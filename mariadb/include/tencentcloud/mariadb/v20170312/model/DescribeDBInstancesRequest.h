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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBInstances请求参数结构体
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个实例 ID 查询。实例 ID 形如：tdsql-ow728lmc。每次请求的实例的上限为100。
                     * @return InstanceIds 按照一个或者多个实例 ID 查询。实例 ID 形如：tdsql-ow728lmc。每次请求的实例的上限为100。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置按照一个或者多个实例 ID 查询。实例 ID 形如：tdsql-ow728lmc。每次请求的实例的上限为100。
                     * @param InstanceIds 按照一个或者多个实例 ID 查询。实例 ID 形如：tdsql-ow728lmc。每次请求的实例的上限为100。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取搜索的字段名，当前支持的值有：instancename、vip、all。传 instancename 表示按实例名进行搜索；传 vip 表示按内网IP进行搜索；传 all 将会按实例ID、实例名和内网IP进行搜索。
                     * @return SearchName 搜索的字段名，当前支持的值有：instancename、vip、all。传 instancename 表示按实例名进行搜索；传 vip 表示按内网IP进行搜索；传 all 将会按实例ID、实例名和内网IP进行搜索。
                     */
                    std::string GetSearchName() const;

                    /**
                     * 设置搜索的字段名，当前支持的值有：instancename、vip、all。传 instancename 表示按实例名进行搜索；传 vip 表示按内网IP进行搜索；传 all 将会按实例ID、实例名和内网IP进行搜索。
                     * @param SearchName 搜索的字段名，当前支持的值有：instancename、vip、all。传 instancename 表示按实例名进行搜索；传 vip 表示按内网IP进行搜索；传 all 将会按实例ID、实例名和内网IP进行搜索。
                     */
                    void SetSearchName(const std::string& _searchName);

                    /**
                     * 判断参数 SearchName 是否已赋值
                     * @return SearchName 是否已赋值
                     */
                    bool SearchNameHasBeenSet() const;

                    /**
                     * 获取搜索的关键字，支持模糊搜索。多个关键字使用换行符（'\n'）分割。
                     * @return SearchKey 搜索的关键字，支持模糊搜索。多个关键字使用换行符（'\n'）分割。
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索的关键字，支持模糊搜索。多个关键字使用换行符（'\n'）分割。
                     * @param SearchKey 搜索的关键字，支持模糊搜索。多个关键字使用换行符（'\n'）分割。
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取按项目 ID 查询
                     * @return ProjectIds 按项目 ID 查询
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置按项目 ID 查询
                     * @param ProjectIds 按项目 ID 查询
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取是否根据 VPC 网络来搜索
                     * @return IsFilterVpc 是否根据 VPC 网络来搜索
                     */
                    bool GetIsFilterVpc() const;

                    /**
                     * 设置是否根据 VPC 网络来搜索
                     * @param IsFilterVpc 是否根据 VPC 网络来搜索
                     */
                    void SetIsFilterVpc(const bool& _isFilterVpc);

                    /**
                     * 判断参数 IsFilterVpc 是否已赋值
                     * @return IsFilterVpc 是否已赋值
                     */
                    bool IsFilterVpcHasBeenSet() const;

                    /**
                     * 获取私有网络 ID， IsFilterVpc 为 1 时有效
                     * @return VpcId 私有网络 ID， IsFilterVpc 为 1 时有效
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络 ID， IsFilterVpc 为 1 时有效
                     * @param VpcId 私有网络 ID， IsFilterVpc 为 1 时有效
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络的子网 ID， IsFilterVpc 为 1 时有效
                     * @return SubnetId 私有网络的子网 ID， IsFilterVpc 为 1 时有效
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络的子网 ID， IsFilterVpc 为 1 时有效
                     * @param SubnetId 私有网络的子网 ID， IsFilterVpc 为 1 时有效
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取排序字段， projectId， createtime， instancename 三者之一
                     * @return OrderBy 排序字段， projectId， createtime， instancename 三者之一
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段， projectId， createtime， instancename 三者之一
                     * @param OrderBy 排序字段， projectId， createtime， instancename 三者之一
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序类型， desc 或者 asc
                     * @return OrderByType 排序类型， desc 或者 asc
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序类型， desc 或者 asc
                     * @param OrderByType 排序类型， desc 或者 asc
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0
                     * @return Offset 偏移量，默认为 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0
                     * @param Offset 偏移量，默认为 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为 20，最大值为 100。
                     * @return Limit 返回数量，默认为 20，最大值为 100。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。
                     * @param Limit 返回数量，默认为 20，最大值为 100。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取按 OriginSerialId 查询
                     * @return OriginSerialIds 按 OriginSerialId 查询
                     */
                    std::vector<std::string> GetOriginSerialIds() const;

                    /**
                     * 设置按 OriginSerialId 查询
                     * @param OriginSerialIds 按 OriginSerialId 查询
                     */
                    void SetOriginSerialIds(const std::vector<std::string>& _originSerialIds);

                    /**
                     * 判断参数 OriginSerialIds 是否已赋值
                     * @return OriginSerialIds 是否已赋值
                     */
                    bool OriginSerialIdsHasBeenSet() const;

                    /**
                     * 获取标识是否使用ExclusterType字段, false不使用，true使用
                     * @return IsFilterExcluster 标识是否使用ExclusterType字段, false不使用，true使用
                     */
                    bool GetIsFilterExcluster() const;

                    /**
                     * 设置标识是否使用ExclusterType字段, false不使用，true使用
                     * @param IsFilterExcluster 标识是否使用ExclusterType字段, false不使用，true使用
                     */
                    void SetIsFilterExcluster(const bool& _isFilterExcluster);

                    /**
                     * 判断参数 IsFilterExcluster 是否已赋值
                     * @return IsFilterExcluster 是否已赋值
                     */
                    bool IsFilterExclusterHasBeenSet() const;

                    /**
                     * 获取实例所属独享集群类型。取值范围：1-非独享集群，2-独享集群， 0-全部
                     * @return ExclusterType 实例所属独享集群类型。取值范围：1-非独享集群，2-独享集群， 0-全部
                     */
                    int64_t GetExclusterType() const;

                    /**
                     * 设置实例所属独享集群类型。取值范围：1-非独享集群，2-独享集群， 0-全部
                     * @param ExclusterType 实例所属独享集群类型。取值范围：1-非独享集群，2-独享集群， 0-全部
                     */
                    void SetExclusterType(const int64_t& _exclusterType);

                    /**
                     * 判断参数 ExclusterType 是否已赋值
                     * @return ExclusterType 是否已赋值
                     */
                    bool ExclusterTypeHasBeenSet() const;

                    /**
                     * 获取按独享集群Id过滤实例，独享集群Id形如dbdc-4ih6uct9
                     * @return ExclusterIds 按独享集群Id过滤实例，独享集群Id形如dbdc-4ih6uct9
                     */
                    std::vector<std::string> GetExclusterIds() const;

                    /**
                     * 设置按独享集群Id过滤实例，独享集群Id形如dbdc-4ih6uct9
                     * @param ExclusterIds 按独享集群Id过滤实例，独享集群Id形如dbdc-4ih6uct9
                     */
                    void SetExclusterIds(const std::vector<std::string>& _exclusterIds);

                    /**
                     * 判断参数 ExclusterIds 是否已赋值
                     * @return ExclusterIds 是否已赋值
                     */
                    bool ExclusterIdsHasBeenSet() const;

                private:

                    /**
                     * 按照一个或者多个实例 ID 查询。实例 ID 形如：tdsql-ow728lmc。每次请求的实例的上限为100。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 搜索的字段名，当前支持的值有：instancename、vip、all。传 instancename 表示按实例名进行搜索；传 vip 表示按内网IP进行搜索；传 all 将会按实例ID、实例名和内网IP进行搜索。
                     */
                    std::string m_searchName;
                    bool m_searchNameHasBeenSet;

                    /**
                     * 搜索的关键字，支持模糊搜索。多个关键字使用换行符（'\n'）分割。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 按项目 ID 查询
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 是否根据 VPC 网络来搜索
                     */
                    bool m_isFilterVpc;
                    bool m_isFilterVpcHasBeenSet;

                    /**
                     * 私有网络 ID， IsFilterVpc 为 1 时有效
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络的子网 ID， IsFilterVpc 为 1 时有效
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 排序字段， projectId， createtime， instancename 三者之一
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型， desc 或者 asc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 按 OriginSerialId 查询
                     */
                    std::vector<std::string> m_originSerialIds;
                    bool m_originSerialIdsHasBeenSet;

                    /**
                     * 标识是否使用ExclusterType字段, false不使用，true使用
                     */
                    bool m_isFilterExcluster;
                    bool m_isFilterExclusterHasBeenSet;

                    /**
                     * 实例所属独享集群类型。取值范围：1-非独享集群，2-独享集群， 0-全部
                     */
                    int64_t m_exclusterType;
                    bool m_exclusterTypeHasBeenSet;

                    /**
                     * 按独享集群Id过滤实例，独享集群Id形如dbdc-4ih6uct9
                     */
                    std::vector<std::string> m_exclusterIds;
                    bool m_exclusterIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
