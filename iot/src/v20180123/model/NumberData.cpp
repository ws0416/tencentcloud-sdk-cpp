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

#include <tencentcloud/iot/v20180123/model/NumberData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace rapidjson;
using namespace std;

NumberData::NumberData() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}

CoreInternalOutcome NumberData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `NumberData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Error("response `NumberData.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Error("response `NumberData.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsArray())
            return CoreInternalOutcome(Error("response `NumberData.Range` is not array type"));

        const Value &tmpValue = value["Range"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_range.push_back((*itr).GetDouble());
        }
        m_rangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NumberData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_range.begin(); itr != m_range.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetDouble(*itr), allocator);
        }
    }

}


string NumberData::GetName() const
{
    return m_name;
}

void NumberData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NumberData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NumberData::GetDesc() const
{
    return m_desc;
}

void NumberData::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool NumberData::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string NumberData::GetMode() const
{
    return m_mode;
}

void NumberData::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool NumberData::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<double> NumberData::GetRange() const
{
    return m_range;
}

void NumberData::SetRange(const vector<double>& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool NumberData::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

