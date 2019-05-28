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

#include <tencentcloud/vpc/v20170312/model/AddIp6RulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

AddIp6RulesRequest::AddIp6RulesRequest() :
    m_ip6TranslatorIdHasBeenSet(false),
    m_ip6RuleInfosHasBeenSet(false),
    m_ip6RuleNameHasBeenSet(false)
{
}

string AddIp6RulesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ip6TranslatorIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip6TranslatorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ip6TranslatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_ip6RuleInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip6RuleInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ip6RuleInfos.begin(); itr != m_ip6RuleInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ip6RuleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip6RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ip6RuleName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddIp6RulesRequest::GetIp6TranslatorId() const
{
    return m_ip6TranslatorId;
}

void AddIp6RulesRequest::SetIp6TranslatorId(const string& _ip6TranslatorId)
{
    m_ip6TranslatorId = _ip6TranslatorId;
    m_ip6TranslatorIdHasBeenSet = true;
}

bool AddIp6RulesRequest::Ip6TranslatorIdHasBeenSet() const
{
    return m_ip6TranslatorIdHasBeenSet;
}

vector<Ip6RuleInfo> AddIp6RulesRequest::GetIp6RuleInfos() const
{
    return m_ip6RuleInfos;
}

void AddIp6RulesRequest::SetIp6RuleInfos(const vector<Ip6RuleInfo>& _ip6RuleInfos)
{
    m_ip6RuleInfos = _ip6RuleInfos;
    m_ip6RuleInfosHasBeenSet = true;
}

bool AddIp6RulesRequest::Ip6RuleInfosHasBeenSet() const
{
    return m_ip6RuleInfosHasBeenSet;
}

string AddIp6RulesRequest::GetIp6RuleName() const
{
    return m_ip6RuleName;
}

void AddIp6RulesRequest::SetIp6RuleName(const string& _ip6RuleName)
{
    m_ip6RuleName = _ip6RuleName;
    m_ip6RuleNameHasBeenSet = true;
}

bool AddIp6RulesRequest::Ip6RuleNameHasBeenSet() const
{
    return m_ip6RuleNameHasBeenSet;
}


