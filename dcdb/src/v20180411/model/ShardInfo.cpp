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

#include <tencentcloud/dcdb/v20180411/model/ShardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace rapidjson;
using namespace std;

ShardInfo::ShardInfo() :
    m_shardInstanceIdHasBeenSet(false),
    m_shardSerialIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createtimeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_shardIdHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_pidHasBeenSet(false)
{
}

CoreInternalOutcome ShardInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ShardInstanceId") && !value["ShardInstanceId"].IsNull())
    {
        if (!value["ShardInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ShardInfo.ShardInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardInstanceId = string(value["ShardInstanceId"].GetString());
        m_shardInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ShardSerialId") && !value["ShardSerialId"].IsNull())
    {
        if (!value["ShardSerialId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ShardInfo.ShardSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardSerialId = string(value["ShardSerialId"].GetString());
        m_shardSerialIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ShardInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Createtime") && !value["Createtime"].IsNull())
    {
        if (!value["Createtime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ShardInfo.Createtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createtime = string(value["Createtime"].GetString());
        m_createtimeHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ShardInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ShardInfo.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("ShardId") && !value["ShardId"].IsNull())
    {
        if (!value["ShardId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ShardInfo.ShardId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardId = value["ShardId"].GetInt64();
        m_shardIdHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ShardInfo.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ShardInfo.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShardInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_shardInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_shardInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_shardSerialIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_shardSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createtimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Createtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createtime.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_shardIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardId, allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_pidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

}


string ShardInfo::GetShardInstanceId() const
{
    return m_shardInstanceId;
}

void ShardInfo::SetShardInstanceId(const string& _shardInstanceId)
{
    m_shardInstanceId = _shardInstanceId;
    m_shardInstanceIdHasBeenSet = true;
}

bool ShardInfo::ShardInstanceIdHasBeenSet() const
{
    return m_shardInstanceIdHasBeenSet;
}

string ShardInfo::GetShardSerialId() const
{
    return m_shardSerialId;
}

void ShardInfo::SetShardSerialId(const string& _shardSerialId)
{
    m_shardSerialId = _shardSerialId;
    m_shardSerialIdHasBeenSet = true;
}

bool ShardInfo::ShardSerialIdHasBeenSet() const
{
    return m_shardSerialIdHasBeenSet;
}

int64_t ShardInfo::GetStatus() const
{
    return m_status;
}

void ShardInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ShardInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ShardInfo::GetCreatetime() const
{
    return m_createtime;
}

void ShardInfo::SetCreatetime(const string& _createtime)
{
    m_createtime = _createtime;
    m_createtimeHasBeenSet = true;
}

bool ShardInfo::CreatetimeHasBeenSet() const
{
    return m_createtimeHasBeenSet;
}

int64_t ShardInfo::GetMemory() const
{
    return m_memory;
}

void ShardInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ShardInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t ShardInfo::GetStorage() const
{
    return m_storage;
}

void ShardInfo::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool ShardInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t ShardInfo::GetShardId() const
{
    return m_shardId;
}

void ShardInfo::SetShardId(const int64_t& _shardId)
{
    m_shardId = _shardId;
    m_shardIdHasBeenSet = true;
}

bool ShardInfo::ShardIdHasBeenSet() const
{
    return m_shardIdHasBeenSet;
}

int64_t ShardInfo::GetNodeCount() const
{
    return m_nodeCount;
}

void ShardInfo::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool ShardInfo::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

int64_t ShardInfo::GetPid() const
{
    return m_pid;
}

void ShardInfo::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool ShardInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

