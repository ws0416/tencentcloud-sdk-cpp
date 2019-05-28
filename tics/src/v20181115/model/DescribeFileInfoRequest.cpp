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

#include <tencentcloud/tics/v20181115/model/DescribeFileInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tics::V20181115::Model;
using namespace rapidjson;
using namespace std;

DescribeFileInfoRequest::DescribeFileInfoRequest() :
    m_keyHasBeenSet(false),
    m_optionHasBeenSet(false)
{
}

string DescribeFileInfoRequest::ToJsonString() const
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


string DescribeFileInfoRequest::GetKey() const
{
    return m_key;
}

void DescribeFileInfoRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DescribeFileInfoRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

uint64_t DescribeFileInfoRequest::GetOption() const
{
    return m_option;
}

void DescribeFileInfoRequest::SetOption(const uint64_t& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool DescribeFileInfoRequest::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}


