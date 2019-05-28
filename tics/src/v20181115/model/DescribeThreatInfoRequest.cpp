/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tics/v20181115/model/DescribeThreatInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tics::V20181115::Model;
using namespace rapidjson;
using namespace std;

DescribeThreatInfoRequest::DescribeThreatInfoRequest() :
    m_keyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_optionHasBeenSet(false)
{
}

string DescribeThreatInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_optionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_option, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeThreatInfoRequest::GetKey() const
{
    return m_key;
}

void DescribeThreatInfoRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DescribeThreatInfoRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string DescribeThreatInfoRequest::GetType() const
{
    return m_type;
}

void DescribeThreatInfoRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeThreatInfoRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeThreatInfoRequest::GetOption() const
{
    return m_option;
}

void DescribeThreatInfoRequest::SetOption(const uint64_t& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool DescribeThreatInfoRequest::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}


