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

#include <tencentcloud/cis/v20180408/model/ContainerState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cis::V20180408::Model;
using namespace rapidjson;
using namespace std;

ContainerState::ContainerState() :
    m_startTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_exitCodeHasBeenSet(false)
{
}

CoreInternalOutcome ContainerState::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerState.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerState.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerState.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ContainerState.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("ExitCode") && !value["ExitCode"].IsNull())
    {
        if (!value["ExitCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ContainerState.ExitCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exitCode = value["ExitCode"].GetInt64();
        m_exitCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerState::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_exitCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExitCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exitCode, allocator);
    }

}


string ContainerState::GetStartTime() const
{
    return m_startTime;
}

void ContainerState::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ContainerState::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ContainerState::GetState() const
{
    return m_state;
}

void ContainerState::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ContainerState::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string ContainerState::GetReason() const
{
    return m_reason;
}

void ContainerState::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ContainerState::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string ContainerState::GetFinishTime() const
{
    return m_finishTime;
}

void ContainerState::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool ContainerState::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

int64_t ContainerState::GetExitCode() const
{
    return m_exitCode;
}

void ContainerState::SetExitCode(const int64_t& _exitCode)
{
    m_exitCode = _exitCode;
    m_exitCodeHasBeenSet = true;
}

bool ContainerState::ExitCodeHasBeenSet() const
{
    return m_exitCodeHasBeenSet;
}

