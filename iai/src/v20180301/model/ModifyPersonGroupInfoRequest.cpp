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

#include <tencentcloud/iai/v20180301/model/ModifyPersonGroupInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

ModifyPersonGroupInfoRequest::ModifyPersonGroupInfoRequest() :
    m_groupIdHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_personExDescriptionInfosHasBeenSet(false)
{
}

string ModifyPersonGroupInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_personExDescriptionInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonExDescriptionInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_personExDescriptionInfos.begin(); itr != m_personExDescriptionInfos.end(); ++itr, ++i)
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


string ModifyPersonGroupInfoRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyPersonGroupInfoRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyPersonGroupInfoRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ModifyPersonGroupInfoRequest::GetPersonId() const
{
    return m_personId;
}

void ModifyPersonGroupInfoRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool ModifyPersonGroupInfoRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

vector<PersonExDescriptionInfo> ModifyPersonGroupInfoRequest::GetPersonExDescriptionInfos() const
{
    return m_personExDescriptionInfos;
}

void ModifyPersonGroupInfoRequest::SetPersonExDescriptionInfos(const vector<PersonExDescriptionInfo>& _personExDescriptionInfos)
{
    m_personExDescriptionInfos = _personExDescriptionInfos;
    m_personExDescriptionInfosHasBeenSet = true;
}

bool ModifyPersonGroupInfoRequest::PersonExDescriptionInfosHasBeenSet() const
{
    return m_personExDescriptionInfosHasBeenSet;
}


