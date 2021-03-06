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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateClusters请求参数结构体
                */
                class CreateClustersRequest : public AbstractModel
                {
                public:
                    CreateClustersRequest();
                    ~CreateClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取所属VPC网络ID
                     * @return VpcId 所属VPC网络ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属VPC网络ID
                     * @param VpcId 所属VPC网络ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取所属子网ID
                     * @return SubnetId 所属子网ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置所属子网ID
                     * @param SubnetId 所属子网ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取数据库类型，取值范围: 
<li> MYSQL </li>
                     * @return DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型，取值范围: 
<li> MYSQL </li>
                     * @param DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取数据库版本，取值范围: 
<li> MYSQL可选值：5.7 </li>
                     * @return DbVersion 数据库版本，取值范围: 
<li> MYSQL可选值：5.7 </li>
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置数据库版本，取值范围: 
<li> MYSQL可选值：5.7 </li>
                     * @param DbVersion 数据库版本，取值范围: 
<li> MYSQL可选值：5.7 </li>
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取Cpu核数
                     * @return Cpu Cpu核数
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Cpu核数
                     * @param Cpu Cpu核数
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return Memory 内存
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存
                     * @param Memory 内存
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取存储上限，单位GB
                     * @return StorageLimit 存储上限，单位GB
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置存储上限，单位GB
                     * @param StorageLimit 存储上限，单位GB
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取所属项目ID
                     * @return ProjectId 所属项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置所属项目ID
                     * @param ProjectId 所属项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取存储
                     * @return Storage 存储
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储
                     * @param Storage 存储
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param ClusterName 集群名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取账号密码(8-64个字符，至少包含字母、数字、字符（支持的字符：_+-&=!@#$%^*()~）中的两种)
                     * @return AdminPassword 账号密码(8-64个字符，至少包含字母、数字、字符（支持的字符：_+-&=!@#$%^*()~）中的两种)
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置账号密码(8-64个字符，至少包含字母、数字、字符（支持的字符：_+-&=!@#$%^*()~）中的两种)
                     * @param AdminPassword 账号密码(8-64个字符，至少包含字母、数字、字符（支持的字符：_+-&=!@#$%^*()~）中的两种)
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取端口，默认5432
                     * @return Port 端口，默认5432
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口，默认5432
                     * @param Port 端口，默认5432
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取计费模式，按量计费：0，包年包月：1。默认按量计费。
                     * @return PayMode 计费模式，按量计费：0，包年包月：1。默认按量计费。
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费模式，按量计费：0，包年包月：1。默认按量计费。
                     * @param PayMode 计费模式，按量计费：0，包年包月：1。默认按量计费。
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取购买个数，目前只支持传1（不传默认为1）
                     * @return Count 购买个数，目前只支持传1（不传默认为1）
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置购买个数，目前只支持传1（不传默认为1）
                     * @param Count 购买个数，目前只支持传1（不传默认为1）
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取回档类型：
noneRollback：不回档；
snapRollback，快照回档；
timeRollback，时间点回档
                     * @return RollbackStrategy 回档类型：
noneRollback：不回档；
snapRollback，快照回档；
timeRollback，时间点回档
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置回档类型：
noneRollback：不回档；
snapRollback，快照回档；
timeRollback，时间点回档
                     * @param RollbackStrategy 回档类型：
noneRollback：不回档；
snapRollback，快照回档；
timeRollback，时间点回档
                     */
                    void SetRollbackStrategy(const std::string& _rollbackStrategy);

                    /**
                     * 判断参数 RollbackStrategy 是否已赋值
                     * @return RollbackStrategy 是否已赋值
                     */
                    bool RollbackStrategyHasBeenSet() const;

                    /**
                     * 获取快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     * @return RollbackId 快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     */
                    uint64_t GetRollbackId() const;

                    /**
                     * 设置快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     * @param RollbackId 快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     */
                    void SetRollbackId(const uint64_t& _rollbackId);

                    /**
                     * 判断参数 RollbackId 是否已赋值
                     * @return RollbackId 是否已赋值
                     */
                    bool RollbackIdHasBeenSet() const;

                    /**
                     * 获取回档时，传入源集群ID，用于查找源poolId
                     * @return OriginalClusterId 回档时，传入源集群ID，用于查找源poolId
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置回档时，传入源集群ID，用于查找源poolId
                     * @param OriginalClusterId 回档时，传入源集群ID，用于查找源poolId
                     */
                    void SetOriginalClusterId(const std::string& _originalClusterId);

                    /**
                     * 判断参数 OriginalClusterId 是否已赋值
                     * @return OriginalClusterId 是否已赋值
                     */
                    bool OriginalClusterIdHasBeenSet() const;

                    /**
                     * 获取时间点回档，指定时间；快照回档，快照时间
                     * @return ExpectTime 时间点回档，指定时间；快照回档，快照时间
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置时间点回档，指定时间；快照回档，快照时间
                     * @param ExpectTime 时间点回档，指定时间；快照回档，快照时间
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取时间点回档，指定时间允许范围
                     * @return ExpectTimeThresh 时间点回档，指定时间允许范围
                     */
                    uint64_t GetExpectTimeThresh() const;

                    /**
                     * 设置时间点回档，指定时间允许范围
                     * @param ExpectTimeThresh 时间点回档，指定时间允许范围
                     */
                    void SetExpectTimeThresh(const uint64_t& _expectTimeThresh);

                    /**
                     * 判断参数 ExpectTimeThresh 是否已赋值
                     * @return ExpectTimeThresh 是否已赋值
                     */
                    bool ExpectTimeThreshHasBeenSet() const;

                    /**
                     * 获取实例数量
                     * @return InstanceCount 实例数量
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置实例数量
                     * @param InstanceCount 实例数量
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取包年包月购买时长
                     * @return TimeSpan 包年包月购买时长
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置包年包月购买时长
                     * @param TimeSpan 包年包月购买时长
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取包年包月购买时长单位
                     * @return TimeUnit 包年包月购买时长单位
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置包年包月购买时长单位
                     * @param TimeUnit 包年包月购买时长单位
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取包年包月购买是否自动续费
                     * @return AutoRenewFlag 包年包月购买是否自动续费
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置包年包月购买是否自动续费
                     * @param AutoRenewFlag 包年包月购买是否自动续费
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取是否自动选择代金券 1是 0否 默认为0
                     * @return AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券 1是 0否 默认为0
                     * @param AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取实例数量（该参数已不再使用，只做存量兼容处理）
                     * @return HaCount 实例数量（该参数已不再使用，只做存量兼容处理）
                     */
                    int64_t GetHaCount() const;

                    /**
                     * 设置实例数量（该参数已不再使用，只做存量兼容处理）
                     * @param HaCount 实例数量（该参数已不再使用，只做存量兼容处理）
                     */
                    void SetHaCount(const int64_t& _haCount);

                    /**
                     * 判断参数 HaCount 是否已赋值
                     * @return HaCount 是否已赋值
                     */
                    bool HaCountHasBeenSet() const;

                    /**
                     * 获取订单来源
                     * @return OrderSource 订单来源
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置订单来源
                     * @param OrderSource 订单来源
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     */
                    bool OrderSourceHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 所属VPC网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所属子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 数据库版本，取值范围: 
<li> MYSQL可选值：5.7 </li>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * Cpu核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储上限，单位GB
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 所属项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 存储
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 账号密码(8-64个字符，至少包含字母、数字、字符（支持的字符：_+-&=!@#$%^*()~）中的两种)
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * 端口，默认5432
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 计费模式，按量计费：0，包年包月：1。默认按量计费。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 购买个数，目前只支持传1（不传默认为1）
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 回档类型：
noneRollback：不回档；
snapRollback，快照回档；
timeRollback，时间点回档
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * 快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * 回档时，传入源集群ID，用于查找源poolId
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * 时间点回档，指定时间；快照回档，快照时间
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * 时间点回档，指定时间允许范围
                     */
                    uint64_t m_expectTimeThresh;
                    bool m_expectTimeThreshHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 包年包月购买时长
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 包年包月购买时长单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 包年包月购买是否自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 实例数量（该参数已不再使用，只做存量兼容处理）
                     */
                    int64_t m_haCount;
                    bool m_haCountHasBeenSet;

                    /**
                     * 订单来源
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_
