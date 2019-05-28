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

#include <tencentcloud/scf/v20180416/model/DeleteTriggerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

DeleteTriggerRequest::DeleteTriggerRequest() :
    m_functionNameHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_triggerDescHasBeenSet(false),
    m_qualifierHasBeenSet(false)
{
}

string DeleteTriggerRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TriggerDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_triggerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTriggerRequest::GetFunctionName() const
{
    return m_functionName;
}

void DeleteTriggerRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool DeleteTriggerRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string DeleteTriggerRequest::GetTriggerName() const
{
    return m_triggerName;
}

void DeleteTriggerRequest::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool DeleteTriggerRequest::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string DeleteTriggerRequest::GetType() const
{
    return m_type;
}

void DeleteTriggerRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DeleteTriggerRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DeleteTriggerRequest::GetTriggerDesc() const
{
    return m_triggerDesc;
}

void DeleteTriggerRequest::SetTriggerDesc(const string& _triggerDesc)
{
    m_triggerDesc = _triggerDesc;
    m_triggerDescHasBeenSet = true;
}

bool DeleteTriggerRequest::TriggerDescHasBeenSet() const
{
    return m_triggerDescHasBeenSet;
}

string DeleteTriggerRequest::GetQualifier() const
{
    return m_qualifier;
}

void DeleteTriggerRequest::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool DeleteTriggerRequest::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}


