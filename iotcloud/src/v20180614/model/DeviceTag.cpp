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

#include <tencentcloud/iotcloud/v20180614/model/DeviceTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace rapidjson;
using namespace std;

DeviceTag::DeviceTag() :
    m_tagHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome DeviceTag::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceTag.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DeviceTag.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeviceTag.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceTag::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string DeviceTag::GetTag() const
{
    return m_tag;
}

void DeviceTag::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DeviceTag::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

uint64_t DeviceTag::GetType() const
{
    return m_type;
}

void DeviceTag::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeviceTag::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DeviceTag::GetValue() const
{
    return m_value;
}

void DeviceTag::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DeviceTag::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

