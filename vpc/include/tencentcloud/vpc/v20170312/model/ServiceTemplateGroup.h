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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATEGROUP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATEGROUP_H_

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
                * 协议端口模板集合
                */
                class ServiceTemplateGroup : public AbstractModel
                {
                public:
                    ServiceTemplateGroup();
                    ~ServiceTemplateGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议端口模板集合实例ID，例如：ppmg-2klmrefu。
                     * @return ServiceTemplateGroupId 协议端口模板集合实例ID，例如：ppmg-2klmrefu。
                     */
                    std::string GetServiceTemplateGroupId() const;

                    /**
                     * 设置协议端口模板集合实例ID，例如：ppmg-2klmrefu。
                     * @param ServiceTemplateGroupId 协议端口模板集合实例ID，例如：ppmg-2klmrefu。
                     */
                    void SetServiceTemplateGroupId(const std::string& _serviceTemplateGroupId);

                    /**
                     * 判断参数 ServiceTemplateGroupId 是否已赋值
                     * @return ServiceTemplateGroupId 是否已赋值
                     */
                    bool ServiceTemplateGroupIdHasBeenSet() const;

                    /**
                     * 获取协议端口模板集合名称。
                     * @return ServiceTemplateGroupName 协议端口模板集合名称。
                     */
                    std::string GetServiceTemplateGroupName() const;

                    /**
                     * 设置协议端口模板集合名称。
                     * @param ServiceTemplateGroupName 协议端口模板集合名称。
                     */
                    void SetServiceTemplateGroupName(const std::string& _serviceTemplateGroupName);

                    /**
                     * 判断参数 ServiceTemplateGroupName 是否已赋值
                     * @return ServiceTemplateGroupName 是否已赋值
                     */
                    bool ServiceTemplateGroupNameHasBeenSet() const;

                    /**
                     * 获取协议端口模板实例ID。
                     * @return ServiceTemplateIdSet 协议端口模板实例ID。
                     */
                    std::vector<std::string> GetServiceTemplateIdSet() const;

                    /**
                     * 设置协议端口模板实例ID。
                     * @param ServiceTemplateIdSet 协议端口模板实例ID。
                     */
                    void SetServiceTemplateIdSet(const std::vector<std::string>& _serviceTemplateIdSet);

                    /**
                     * 判断参数 ServiceTemplateIdSet 是否已赋值
                     * @return ServiceTemplateIdSet 是否已赋值
                     */
                    bool ServiceTemplateIdSetHasBeenSet() const;

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

                private:

                    /**
                     * 协议端口模板集合实例ID，例如：ppmg-2klmrefu。
                     */
                    std::string m_serviceTemplateGroupId;
                    bool m_serviceTemplateGroupIdHasBeenSet;

                    /**
                     * 协议端口模板集合名称。
                     */
                    std::string m_serviceTemplateGroupName;
                    bool m_serviceTemplateGroupNameHasBeenSet;

                    /**
                     * 协议端口模板实例ID。
                     */
                    std::vector<std::string> m_serviceTemplateIdSet;
                    bool m_serviceTemplateIdSetHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATEGROUP_H_
