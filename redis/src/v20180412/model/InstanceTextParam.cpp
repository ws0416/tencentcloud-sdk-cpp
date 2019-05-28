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

#include <tencentcloud/redis/v20180412/model/InstanceTextParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

InstanceTextParam::InstanceTextParam() :
    m_paramNameHasBeenSet(false),
    m_valueTypeHasBeenSet(false),
    m_needRestartHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_currentValueHasBeenSet(false),
    m_tipsHasBeenSet(false),
    m_textValueHasBeenSet(false)
{
}

CoreInternalOutcome InstanceTextParam::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTextParam.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTextParam.ValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = string(value["ValueType"].GetString());
        m_valueTypeHasBeenSet = true;
    }

    if (value.HasMember("NeedRestart") && !value["NeedRestart"].IsNull())
    {
        if (!value["NeedRestart"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTextParam.NeedRestart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_needRestart = string(value["NeedRestart"].GetString());
        m_needRestartHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTextParam.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTextParam.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("Tips") && !value["Tips"].IsNull())
    {
        if (!value["Tips"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceTextParam.Tips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tips = string(value["Tips"].GetString());
        m_tipsHasBeenSet = true;
    }

    if (value.HasMember("TextValue") && !value["TextValue"].IsNull())
    {
        if (!value["TextValue"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceTextParam.TextValue` is not array type"));

        const Value &tmpValue = value["TextValue"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_textValue.push_back((*itr).GetString());
        }
        m_textValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceTextParam::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_valueType.c_str(), allocator).Move(), allocator);
    }

    if (m_needRestartHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_needRestart.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_currentValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_tipsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tips.c_str(), allocator).Move(), allocator);
    }

    if (m_textValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TextValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_textValue.begin(); itr != m_textValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string InstanceTextParam::GetParamName() const
{
    return m_paramName;
}

void InstanceTextParam::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool InstanceTextParam::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string InstanceTextParam::GetValueType() const
{
    return m_valueType;
}

void InstanceTextParam::SetValueType(const string& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool InstanceTextParam::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string InstanceTextParam::GetNeedRestart() const
{
    return m_needRestart;
}

void InstanceTextParam::SetNeedRestart(const string& _needRestart)
{
    m_needRestart = _needRestart;
    m_needRestartHasBeenSet = true;
}

bool InstanceTextParam::NeedRestartHasBeenSet() const
{
    return m_needRestartHasBeenSet;
}

string InstanceTextParam::GetDefaultValue() const
{
    return m_defaultValue;
}

void InstanceTextParam::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool InstanceTextParam::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string InstanceTextParam::GetCurrentValue() const
{
    return m_currentValue;
}

void InstanceTextParam::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool InstanceTextParam::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

string InstanceTextParam::GetTips() const
{
    return m_tips;
}

void InstanceTextParam::SetTips(const string& _tips)
{
    m_tips = _tips;
    m_tipsHasBeenSet = true;
}

bool InstanceTextParam::TipsHasBeenSet() const
{
    return m_tipsHasBeenSet;
}

vector<string> InstanceTextParam::GetTextValue() const
{
    return m_textValue;
}

void InstanceTextParam::SetTextValue(const vector<string>& _textValue)
{
    m_textValue = _textValue;
    m_textValueHasBeenSet = true;
}

bool InstanceTextParam::TextValueHasBeenSet() const
{
    return m_textValueHasBeenSet;
}

