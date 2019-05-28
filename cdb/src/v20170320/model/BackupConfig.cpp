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

#include <tencentcloud/cdb/v20170320/model/BackupConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

BackupConfig::BackupConfig() :
    m_replicationModeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false)
{
}

CoreInternalOutcome BackupConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplicationMode") && !value["ReplicationMode"].IsNull())
    {
        if (!value["ReplicationMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupConfig.ReplicationMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicationMode = string(value["ReplicationMode"].GetString());
        m_replicationModeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupConfig.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `BackupConfig.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BackupConfig.Vport` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetUint64();
        m_vportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_replicationModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplicationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_replicationMode.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

}


string BackupConfig::GetReplicationMode() const
{
    return m_replicationMode;
}

void BackupConfig::SetReplicationMode(const string& _replicationMode)
{
    m_replicationMode = _replicationMode;
    m_replicationModeHasBeenSet = true;
}

bool BackupConfig::ReplicationModeHasBeenSet() const
{
    return m_replicationModeHasBeenSet;
}

string BackupConfig::GetZone() const
{
    return m_zone;
}

void BackupConfig::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool BackupConfig::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string BackupConfig::GetVip() const
{
    return m_vip;
}

void BackupConfig::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool BackupConfig::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t BackupConfig::GetVport() const
{
    return m_vport;
}

void BackupConfig::SetVport(const uint64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool BackupConfig::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

