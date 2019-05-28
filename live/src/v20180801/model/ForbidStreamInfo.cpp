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

#include <tencentcloud/live/v20180801/model/ForbidStreamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

ForbidStreamInfo::ForbidStreamInfo() :
    m_streamNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome ForbidStreamInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ForbidStreamInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ForbidStreamInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ForbidStreamInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForbidStreamInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_streamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string ForbidStreamInfo::GetStreamName() const
{
    return m_streamName;
}

void ForbidStreamInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool ForbidStreamInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string ForbidStreamInfo::GetCreateTime() const
{
    return m_createTime;
}

void ForbidStreamInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ForbidStreamInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ForbidStreamInfo::GetExpireTime() const
{
    return m_expireTime;
}

void ForbidStreamInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ForbidStreamInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

