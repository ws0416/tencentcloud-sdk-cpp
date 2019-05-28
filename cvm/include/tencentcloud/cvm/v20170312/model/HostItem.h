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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_HOSTITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_HOSTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/HostResource.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * cdh实例详细信息
                */
                class HostItem : public AbstractModel
                {
                public:
                    HostItem();
                    ~HostItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cdh实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @return Placement cdh实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置cdh实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @param Placement cdh实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取cdh实例id
                     * @return HostId cdh实例id
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置cdh实例id
                     * @param HostId cdh实例id
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取cdh实例类型
                     * @return HostType cdh实例类型
                     */
                    std::string GetHostType() const;

                    /**
                     * 设置cdh实例类型
                     * @param HostType cdh实例类型
                     */
                    void SetHostType(const std::string& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取cdh实例名称
                     * @return HostName cdh实例名称
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置cdh实例名称
                     * @param HostName cdh实例名称
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取cdh实例付费模式
                     * @return HostChargeType cdh实例付费模式
                     */
                    std::string GetHostChargeType() const;

                    /**
                     * 设置cdh实例付费模式
                     * @param HostChargeType cdh实例付费模式
                     */
                    void SetHostChargeType(const std::string& _hostChargeType);

                    /**
                     * 判断参数 HostChargeType 是否已赋值
                     * @return HostChargeType 是否已赋值
                     */
                    bool HostChargeTypeHasBeenSet() const;

                    /**
                     * 获取cdh实例自动续费标记
                     * @return RenewFlag cdh实例自动续费标记
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置cdh实例自动续费标记
                     * @param RenewFlag cdh实例自动续费标记
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取cdh实例创建时间
                     * @return CreatedTime cdh实例创建时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置cdh实例创建时间
                     * @param CreatedTime cdh实例创建时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取cdh实例过期时间
                     * @return ExpiredTime cdh实例过期时间
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置cdh实例过期时间
                     * @param ExpiredTime cdh实例过期时间
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取cdh实例上已创建云子机的实例id列表
                     * @return InstanceIds cdh实例上已创建云子机的实例id列表
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置cdh实例上已创建云子机的实例id列表
                     * @param InstanceIds cdh实例上已创建云子机的实例id列表
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取cdh实例状态
                     * @return HostState cdh实例状态
                     */
                    std::string GetHostState() const;

                    /**
                     * 设置cdh实例状态
                     * @param HostState cdh实例状态
                     */
                    void SetHostState(const std::string& _hostState);

                    /**
                     * 判断参数 HostState 是否已赋值
                     * @return HostState 是否已赋值
                     */
                    bool HostStateHasBeenSet() const;

                    /**
                     * 获取cdh实例ip
                     * @return HostIp cdh实例ip
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置cdh实例ip
                     * @param HostIp cdh实例ip
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取cdh实例资源信息
                     * @return HostResource cdh实例资源信息
                     */
                    HostResource GetHostResource() const;

                    /**
                     * 设置cdh实例资源信息
                     * @param HostResource cdh实例资源信息
                     */
                    void SetHostResource(const HostResource& _hostResource);

                    /**
                     * 判断参数 HostResource 是否已赋值
                     * @return HostResource 是否已赋值
                     */
                    bool HostResourceHasBeenSet() const;

                    /**
                     * 获取专用宿主机所属的围笼ID。该字段仅对金融专区围笼内的专用宿主机有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CageId 专用宿主机所属的围笼ID。该字段仅对金融专区围笼内的专用宿主机有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置专用宿主机所属的围笼ID。该字段仅对金融专区围笼内的专用宿主机有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CageId 专用宿主机所属的围笼ID。该字段仅对金融专区围笼内的专用宿主机有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     */
                    bool CageIdHasBeenSet() const;

                private:

                    /**
                     * cdh实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * cdh实例id
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * cdh实例类型
                     */
                    std::string m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * cdh实例名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * cdh实例付费模式
                     */
                    std::string m_hostChargeType;
                    bool m_hostChargeTypeHasBeenSet;

                    /**
                     * cdh实例自动续费标记
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * cdh实例创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * cdh实例过期时间
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * cdh实例上已创建云子机的实例id列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * cdh实例状态
                     */
                    std::string m_hostState;
                    bool m_hostStateHasBeenSet;

                    /**
                     * cdh实例ip
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * cdh实例资源信息
                     */
                    HostResource m_hostResource;
                    bool m_hostResourceHasBeenSet;

                    /**
                     * 专用宿主机所属的围笼ID。该字段仅对金融专区围笼内的专用宿主机有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_HOSTITEM_H_
