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

#include <tencentcloud/cynosdb/v20190107/model/CynosdbCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace rapidjson;
using namespace std;

CynosdbCluster::CynosdbCluster() :
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_projectIDHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_cynosVersionHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_processingTaskHasBeenSet(false),
    m_tasksHasBeenSet(false)
{
}

CoreInternalOutcome CynosdbCluster::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.InstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetInt64();
        m_instanceNumHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("CynosVersion") && !value["CynosVersion"].IsNull())
    {
        if (!value["CynosVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.CynosVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersion = string(value["CynosVersion"].GetString());
        m_cynosVersionHasBeenSet = true;
    }

    if (value.HasMember("StorageLimit") && !value["StorageLimit"].IsNull())
    {
        if (!value["StorageLimit"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.StorageLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageLimit = value["StorageLimit"].GetInt64();
        m_storageLimitHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("ProcessingTask") && !value["ProcessingTask"].IsNull())
    {
        if (!value["ProcessingTask"].IsString())
        {
            return CoreInternalOutcome(Error("response `CynosdbCluster.ProcessingTask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processingTask = string(value["ProcessingTask"].GetString());
        m_processingTaskHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Error("response `CynosdbCluster.Tasks` is not array type"));

        const Value &tmpValue = value["Tasks"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ObjectTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CynosdbCluster::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_uinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
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

    if (m_projectIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectID, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_cynosVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CynosVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cynosVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_processingTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProcessingTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_processingTask.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CynosdbCluster::GetStatus() const
{
    return m_status;
}

void CynosdbCluster::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CynosdbCluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CynosdbCluster::GetUpdateTime() const
{
    return m_updateTime;
}

void CynosdbCluster::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CynosdbCluster::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CynosdbCluster::GetZone() const
{
    return m_zone;
}

void CynosdbCluster::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CynosdbCluster::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CynosdbCluster::GetClusterName() const
{
    return m_clusterName;
}

void CynosdbCluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CynosdbCluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CynosdbCluster::GetRegion() const
{
    return m_region;
}

void CynosdbCluster::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CynosdbCluster::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CynosdbCluster::GetDbVersion() const
{
    return m_dbVersion;
}

void CynosdbCluster::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool CynosdbCluster::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

string CynosdbCluster::GetClusterId() const
{
    return m_clusterId;
}

void CynosdbCluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CynosdbCluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t CynosdbCluster::GetInstanceNum() const
{
    return m_instanceNum;
}

void CynosdbCluster::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool CynosdbCluster::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

string CynosdbCluster::GetUin() const
{
    return m_uin;
}

void CynosdbCluster::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CynosdbCluster::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string CynosdbCluster::GetDbType() const
{
    return m_dbType;
}

void CynosdbCluster::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool CynosdbCluster::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

int64_t CynosdbCluster::GetAppId() const
{
    return m_appId;
}

void CynosdbCluster::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CynosdbCluster::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CynosdbCluster::GetStatusDesc() const
{
    return m_statusDesc;
}

void CynosdbCluster::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool CynosdbCluster::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string CynosdbCluster::GetCreateTime() const
{
    return m_createTime;
}

void CynosdbCluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CynosdbCluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CynosdbCluster::GetPayMode() const
{
    return m_payMode;
}

void CynosdbCluster::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CynosdbCluster::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CynosdbCluster::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void CynosdbCluster::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool CynosdbCluster::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

string CynosdbCluster::GetVip() const
{
    return m_vip;
}

void CynosdbCluster::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CynosdbCluster::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t CynosdbCluster::GetVport() const
{
    return m_vport;
}

void CynosdbCluster::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool CynosdbCluster::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t CynosdbCluster::GetProjectID() const
{
    return m_projectID;
}

void CynosdbCluster::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool CynosdbCluster::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

string CynosdbCluster::GetVpcId() const
{
    return m_vpcId;
}

void CynosdbCluster::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CynosdbCluster::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CynosdbCluster::GetSubnetId() const
{
    return m_subnetId;
}

void CynosdbCluster::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CynosdbCluster::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CynosdbCluster::GetCynosVersion() const
{
    return m_cynosVersion;
}

void CynosdbCluster::SetCynosVersion(const string& _cynosVersion)
{
    m_cynosVersion = _cynosVersion;
    m_cynosVersionHasBeenSet = true;
}

bool CynosdbCluster::CynosVersionHasBeenSet() const
{
    return m_cynosVersionHasBeenSet;
}

int64_t CynosdbCluster::GetStorageLimit() const
{
    return m_storageLimit;
}

void CynosdbCluster::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool CynosdbCluster::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

int64_t CynosdbCluster::GetRenewFlag() const
{
    return m_renewFlag;
}

void CynosdbCluster::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CynosdbCluster::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string CynosdbCluster::GetProcessingTask() const
{
    return m_processingTask;
}

void CynosdbCluster::SetProcessingTask(const string& _processingTask)
{
    m_processingTask = _processingTask;
    m_processingTaskHasBeenSet = true;
}

bool CynosdbCluster::ProcessingTaskHasBeenSet() const
{
    return m_processingTaskHasBeenSet;
}

vector<ObjectTask> CynosdbCluster::GetTasks() const
{
    return m_tasks;
}

void CynosdbCluster::SetTasks(const vector<ObjectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CynosdbCluster::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

