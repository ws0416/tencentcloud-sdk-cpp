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

#include <tencentcloud/dts/v20180330/model/MigrateStepDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

MigrateStepDetailInfo::MigrateStepDetailInfo() :
    m_stepNoHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome MigrateStepDetailInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StepNo") && !value["StepNo"].IsNull())
    {
        if (!value["StepNo"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MigrateStepDetailInfo.StepNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNo = value["StepNo"].GetInt64();
        m_stepNoHasBeenSet = true;
    }

    if (value.HasMember("StepName") && !value["StepName"].IsNull())
    {
        if (!value["StepName"].IsString())
        {
            return CoreInternalOutcome(Error("response `MigrateStepDetailInfo.StepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepName = string(value["StepName"].GetString());
        m_stepNameHasBeenSet = true;
    }

    if (value.HasMember("StepId") && !value["StepId"].IsNull())
    {
        if (!value["StepId"].IsString())
        {
            return CoreInternalOutcome(Error("response `MigrateStepDetailInfo.StepId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepId = string(value["StepId"].GetString());
        m_stepIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MigrateStepDetailInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateStepDetailInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_stepNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepNo, allocator);
    }

    if (m_stepNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_stepName.c_str(), allocator).Move(), allocator);
    }

    if (m_stepIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_stepId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t MigrateStepDetailInfo::GetStepNo() const
{
    return m_stepNo;
}

void MigrateStepDetailInfo::SetStepNo(const int64_t& _stepNo)
{
    m_stepNo = _stepNo;
    m_stepNoHasBeenSet = true;
}

bool MigrateStepDetailInfo::StepNoHasBeenSet() const
{
    return m_stepNoHasBeenSet;
}

string MigrateStepDetailInfo::GetStepName() const
{
    return m_stepName;
}

void MigrateStepDetailInfo::SetStepName(const string& _stepName)
{
    m_stepName = _stepName;
    m_stepNameHasBeenSet = true;
}

bool MigrateStepDetailInfo::StepNameHasBeenSet() const
{
    return m_stepNameHasBeenSet;
}

string MigrateStepDetailInfo::GetStepId() const
{
    return m_stepId;
}

void MigrateStepDetailInfo::SetStepId(const string& _stepId)
{
    m_stepId = _stepId;
    m_stepIdHasBeenSet = true;
}

bool MigrateStepDetailInfo::StepIdHasBeenSet() const
{
    return m_stepIdHasBeenSet;
}

int64_t MigrateStepDetailInfo::GetStatus() const
{
    return m_status;
}

void MigrateStepDetailInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MigrateStepDetailInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

