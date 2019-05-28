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

#include <tencentcloud/vpc/v20170312/model/ServiceTemplateGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

ServiceTemplateGroup::ServiceTemplateGroup() :
    m_serviceTemplateGroupIdHasBeenSet(false),
    m_serviceTemplateGroupNameHasBeenSet(false),
    m_serviceTemplateIdSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome ServiceTemplateGroup::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceTemplateGroupId") && !value["ServiceTemplateGroupId"].IsNull())
    {
        if (!value["ServiceTemplateGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceTemplateGroup.ServiceTemplateGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateGroupId = string(value["ServiceTemplateGroupId"].GetString());
        m_serviceTemplateGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateGroupName") && !value["ServiceTemplateGroupName"].IsNull())
    {
        if (!value["ServiceTemplateGroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceTemplateGroup.ServiceTemplateGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTemplateGroupName = string(value["ServiceTemplateGroupName"].GetString());
        m_serviceTemplateGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceTemplateIdSet") && !value["ServiceTemplateIdSet"].IsNull())
    {
        if (!value["ServiceTemplateIdSet"].IsArray())
            return CoreInternalOutcome(Error("response `ServiceTemplateGroup.ServiceTemplateIdSet` is not array type"));

        const Value &tmpValue = value["ServiceTemplateIdSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serviceTemplateIdSet.push_back((*itr).GetString());
        }
        m_serviceTemplateIdSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceTemplateGroup.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceTemplateGroup::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_serviceTemplateGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTemplateGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceTemplateGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateGroupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTemplateGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceTemplateGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTemplateIdSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceTemplateIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_serviceTemplateIdSet.begin(); itr != m_serviceTemplateIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string ServiceTemplateGroup::GetServiceTemplateGroupId() const
{
    return m_serviceTemplateGroupId;
}

void ServiceTemplateGroup::SetServiceTemplateGroupId(const string& _serviceTemplateGroupId)
{
    m_serviceTemplateGroupId = _serviceTemplateGroupId;
    m_serviceTemplateGroupIdHasBeenSet = true;
}

bool ServiceTemplateGroup::ServiceTemplateGroupIdHasBeenSet() const
{
    return m_serviceTemplateGroupIdHasBeenSet;
}

string ServiceTemplateGroup::GetServiceTemplateGroupName() const
{
    return m_serviceTemplateGroupName;
}

void ServiceTemplateGroup::SetServiceTemplateGroupName(const string& _serviceTemplateGroupName)
{
    m_serviceTemplateGroupName = _serviceTemplateGroupName;
    m_serviceTemplateGroupNameHasBeenSet = true;
}

bool ServiceTemplateGroup::ServiceTemplateGroupNameHasBeenSet() const
{
    return m_serviceTemplateGroupNameHasBeenSet;
}

vector<string> ServiceTemplateGroup::GetServiceTemplateIdSet() const
{
    return m_serviceTemplateIdSet;
}

void ServiceTemplateGroup::SetServiceTemplateIdSet(const vector<string>& _serviceTemplateIdSet)
{
    m_serviceTemplateIdSet = _serviceTemplateIdSet;
    m_serviceTemplateIdSetHasBeenSet = true;
}

bool ServiceTemplateGroup::ServiceTemplateIdSetHasBeenSet() const
{
    return m_serviceTemplateIdSetHasBeenSet;
}

string ServiceTemplateGroup::GetCreatedTime() const
{
    return m_createdTime;
}

void ServiceTemplateGroup::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ServiceTemplateGroup::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

