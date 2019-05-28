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

#include <tencentcloud/vpc/v20170312/model/SecurityGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

SecurityGroup::SecurityGroup() :
    m_securityGroupIdHasBeenSet(false),
    m_securityGroupNameHasBeenSet(false),
    m_securityGroupDescHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroup::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityGroupId") && !value["SecurityGroupId"].IsNull())
    {
        if (!value["SecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.SecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupId = string(value["SecurityGroupId"].GetString());
        m_securityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupName") && !value["SecurityGroupName"].IsNull())
    {
        if (!value["SecurityGroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.SecurityGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupName = string(value["SecurityGroupName"].GetString());
        m_securityGroupNameHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupDesc") && !value["SecurityGroupDesc"].IsNull())
    {
        if (!value["SecurityGroupDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.SecurityGroupDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupDesc = string(value["SecurityGroupDesc"].GetString());
        m_securityGroupDescHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroup::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_securityGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_securityGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_securityGroupDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string SecurityGroup::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void SecurityGroup::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool SecurityGroup::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

string SecurityGroup::GetSecurityGroupName() const
{
    return m_securityGroupName;
}

void SecurityGroup::SetSecurityGroupName(const string& _securityGroupName)
{
    m_securityGroupName = _securityGroupName;
    m_securityGroupNameHasBeenSet = true;
}

bool SecurityGroup::SecurityGroupNameHasBeenSet() const
{
    return m_securityGroupNameHasBeenSet;
}

string SecurityGroup::GetSecurityGroupDesc() const
{
    return m_securityGroupDesc;
}

void SecurityGroup::SetSecurityGroupDesc(const string& _securityGroupDesc)
{
    m_securityGroupDesc = _securityGroupDesc;
    m_securityGroupDescHasBeenSet = true;
}

bool SecurityGroup::SecurityGroupDescHasBeenSet() const
{
    return m_securityGroupDescHasBeenSet;
}

string SecurityGroup::GetProjectId() const
{
    return m_projectId;
}

void SecurityGroup::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SecurityGroup::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool SecurityGroup::GetIsDefault() const
{
    return m_isDefault;
}

void SecurityGroup::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool SecurityGroup::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string SecurityGroup::GetCreatedTime() const
{
    return m_createdTime;
}

void SecurityGroup::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool SecurityGroup::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

