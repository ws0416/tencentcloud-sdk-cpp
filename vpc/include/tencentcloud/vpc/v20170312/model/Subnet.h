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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SUBNET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SUBNET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 子网对象
                */
                class Subnet : public AbstractModel
                {
                public:
                    Subnet();
                    ~Subnet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`VPC`实例`ID`。
                     * @return VpcId `VPC`实例`ID`。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC`实例`ID`。
                     * @param VpcId `VPC`实例`ID`。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网实例`ID`，例如：subnet-bthucmmy。
                     * @return SubnetId 子网实例`ID`，例如：subnet-bthucmmy。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例`ID`，例如：subnet-bthucmmy。
                     * @param SubnetId 子网实例`ID`，例如：subnet-bthucmmy。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取子网名称。
                     * @return SubnetName 子网名称。
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称。
                     * @param SubnetName 子网名称。
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取子网的 `IPv4` `CIDR`。
                     * @return CidrBlock 子网的 `IPv4` `CIDR`。
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置子网的 `IPv4` `CIDR`。
                     * @param CidrBlock 子网的 `IPv4` `CIDR`。
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取是否默认子网。
                     * @return IsDefault 是否默认子网。
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否默认子网。
                     * @param IsDefault 是否默认子网。
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取是否开启广播。
                     * @return EnableBroadcast 是否开启广播。
                     */
                    bool GetEnableBroadcast() const;

                    /**
                     * 设置是否开启广播。
                     * @param EnableBroadcast 是否开启广播。
                     */
                    void SetEnableBroadcast(const bool& _enableBroadcast);

                    /**
                     * 判断参数 EnableBroadcast 是否已赋值
                     * @return EnableBroadcast 是否已赋值
                     */
                    bool EnableBroadcastHasBeenSet() const;

                    /**
                     * 获取可用区。
                     * @return Zone 可用区。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
                     * @param Zone 可用区。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取路由表实例ID，例如：rtb-l2h8d7c2。
                     * @return RouteTableId 路由表实例ID，例如：rtb-l2h8d7c2。
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表实例ID，例如：rtb-l2h8d7c2。
                     * @param RouteTableId 路由表实例ID，例如：rtb-l2h8d7c2。
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreatedTime 创建时间。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取可用`IP`数。
                     * @return AvailableIpAddressCount 可用`IP`数。
                     */
                    uint64_t GetAvailableIpAddressCount() const;

                    /**
                     * 设置可用`IP`数。
                     * @param AvailableIpAddressCount 可用`IP`数。
                     */
                    void SetAvailableIpAddressCount(const uint64_t& _availableIpAddressCount);

                    /**
                     * 判断参数 AvailableIpAddressCount 是否已赋值
                     * @return AvailableIpAddressCount 是否已赋值
                     */
                    bool AvailableIpAddressCountHasBeenSet() const;

                    /**
                     * 获取子网的 `IPv6` `CIDR`。
                     * @return Ipv6CidrBlock 子网的 `IPv6` `CIDR`。
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置子网的 `IPv6` `CIDR`。
                     * @param Ipv6CidrBlock 子网的 `IPv6` `CIDR`。
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取关联`ACL`ID
                     * @return NetworkAclId 关联`ACL`ID
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置关联`ACL`ID
                     * @param NetworkAclId 关联`ACL`ID
                     */
                    void SetNetworkAclId(const std::string& _networkAclId);

                    /**
                     * 判断参数 NetworkAclId 是否已赋值
                     * @return NetworkAclId 是否已赋值
                     */
                    bool NetworkAclIdHasBeenSet() const;

                    /**
                     * 获取是否为 `SNAT` 地址池子网。
                     * @return IsRemoteVpcSnat 是否为 `SNAT` 地址池子网。
                     */
                    bool GetIsRemoteVpcSnat() const;

                    /**
                     * 设置是否为 `SNAT` 地址池子网。
                     * @param IsRemoteVpcSnat 是否为 `SNAT` 地址池子网。
                     */
                    void SetIsRemoteVpcSnat(const bool& _isRemoteVpcSnat);

                    /**
                     * 判断参数 IsRemoteVpcSnat 是否已赋值
                     * @return IsRemoteVpcSnat 是否已赋值
                     */
                    bool IsRemoteVpcSnatHasBeenSet() const;

                private:

                    /**
                     * `VPC`实例`ID`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例`ID`，例如：subnet-bthucmmy。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名称。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 子网的 `IPv4` `CIDR`。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 是否默认子网。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 是否开启广播。
                     */
                    bool m_enableBroadcast;
                    bool m_enableBroadcastHasBeenSet;

                    /**
                     * 可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 路由表实例ID，例如：rtb-l2h8d7c2。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 可用`IP`数。
                     */
                    uint64_t m_availableIpAddressCount;
                    bool m_availableIpAddressCountHasBeenSet;

                    /**
                     * 子网的 `IPv6` `CIDR`。
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * 关联`ACL`ID
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * 是否为 `SNAT` 地址池子网。
                     */
                    bool m_isRemoteVpcSnat;
                    bool m_isRemoteVpcSnatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SUBNET_H_
