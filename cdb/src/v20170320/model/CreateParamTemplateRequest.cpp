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

#include <tencentcloud/cdb/v20170320/model/CreateParamTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

CreateParamTemplateRequest::CreateParamTemplateRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_paramListHasBeenSet(false)
{
}

string CreateParamTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_paramListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateParamTemplateRequest::GetName() const
{
    return m_name;
}

void CreateParamTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateParamTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateParamTemplateRequest::GetDescription() const
{
    return m_description;
}

void CreateParamTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateParamTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateParamTemplateRequest::GetEngineVersion() const
{
    return m_engineVersion;
}

void CreateParamTemplateRequest::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool CreateParamTemplateRequest::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

int64_t CreateParamTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateParamTemplateRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateParamTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<Parameter> CreateParamTemplateRequest::GetParamList() const
{
    return m_paramList;
}

void CreateParamTemplateRequest::SetParamList(const vector<Parameter>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool CreateParamTemplateRequest::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}


