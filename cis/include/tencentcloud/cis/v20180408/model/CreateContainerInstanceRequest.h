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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_CREATECONTAINERINSTANCEREQUEST_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_CREATECONTAINERINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cis/v20180408/model/Container.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateContainerInstance请求参数结构体
                */
                class CreateContainerInstanceRequest : public AbstractModel
                {
                public:
                    CreateContainerInstanceRequest();
                    ~CreateContainerInstanceRequest() = default;
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
                     * 获取vpcId
                     * @return VpcId vpcId
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId
                     * @param VpcId vpcId
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取subnetId
                     * @return SubnetId subnetId
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置subnetId
                     * @param SubnetId subnetId
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取容器实例名称，由小写字母、数字和 - 组成，由小写字母开头，小写字母或数字结尾，且长度不超过 40个字符
                     * @return InstanceName 容器实例名称，由小写字母、数字和 - 组成，由小写字母开头，小写字母或数字结尾，且长度不超过 40个字符
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置容器实例名称，由小写字母、数字和 - 组成，由小写字母开头，小写字母或数字结尾，且长度不超过 40个字符
                     * @param InstanceName 容器实例名称，由小写字母、数字和 - 组成，由小写字母开头，小写字母或数字结尾，且长度不超过 40个字符
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取重启策略（Always,OnFailure,Never）
                     * @return RestartPolicy 重启策略（Always,OnFailure,Never）
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置重启策略（Always,OnFailure,Never）
                     * @param RestartPolicy 重启策略（Always,OnFailure,Never）
                     */
                    void SetRestartPolicy(const std::string& _restartPolicy);

                    /**
                     * 判断参数 RestartPolicy 是否已赋值
                     * @return RestartPolicy 是否已赋值
                     */
                    bool RestartPolicyHasBeenSet() const;

                    /**
                     * 获取容器列表
                     * @return Containers 容器列表
                     */
                    std::vector<Container> GetContainers() const;

                    /**
                     * 设置容器列表
                     * @param Containers 容器列表
                     */
                    void SetContainers(const std::vector<Container>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     */
                    bool ContainersHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * vpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * subnetId
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 容器实例名称，由小写字母、数字和 - 组成，由小写字母开头，小写字母或数字结尾，且长度不超过 40个字符
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 重启策略（Always,OnFailure,Never）
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                    /**
                     * 容器列表
                     */
                    std::vector<Container> m_containers;
                    bool m_containersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_CREATECONTAINERINSTANCEREQUEST_H_
