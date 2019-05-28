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

#include <tencentcloud/as/v20180419/model/ActivtyRelatedInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

ActivtyRelatedInstance::ActivtyRelatedInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceStatusHasBeenSet(false)
{
}

CoreInternalOutcome ActivtyRelatedInstance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActivtyRelatedInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActivtyRelatedInstance.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivtyRelatedInstance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

}


string ActivtyRelatedInstance::GetInstanceId() const
{
    return m_instanceId;
}

void ActivtyRelatedInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ActivtyRelatedInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ActivtyRelatedInstance::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void ActivtyRelatedInstance::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool ActivtyRelatedInstance::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

