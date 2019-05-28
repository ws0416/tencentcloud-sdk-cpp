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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL4BACKENDWEIGHTREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL4BACKENDWEIGHTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyL4BackendWeight请求参数结构体
                */
                class ModifyL4BackendWeightRequest : public AbstractModel
                {
                public:
                    ModifyL4BackendWeightRequest();
                    ~ModifyL4BackendWeightRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @return LoadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @param LoadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡四层监听器ID，可通过接口DescribeL4Listeners查询。
                     * @return ListenerId 负载均衡四层监听器ID，可通过接口DescribeL4Listeners查询。
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡四层监听器ID，可通过接口DescribeL4Listeners查询。
                     * @param ListenerId 负载均衡四层监听器ID，可通过接口DescribeL4Listeners查询。
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     * @return InstanceId 黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     * @param InstanceId 黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取权重信息，可选值0~100。
                     * @return Weight 权重信息，可选值0~100。
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置权重信息，可选值0~100。
                     * @param Weight 权重信息，可选值0~100。
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取已绑定的主机端口。
                     * @return Port 已绑定的主机端口。
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置已绑定的主机端口。
                     * @param Port 已绑定的主机端口。
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取绑定类型。0：物理机 1：虚拟机 2：半托管机器
                     * @return BindType 绑定类型。0：物理机 1：虚拟机 2：半托管机器
                     */
                    int64_t GetBindType() const;

                    /**
                     * 设置绑定类型。0：物理机 1：虚拟机 2：半托管机器
                     * @param BindType 绑定类型。0：物理机 1：虚拟机 2：半托管机器
                     */
                    void SetBindType(const int64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     */
                    bool BindTypeHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡四层监听器ID，可通过接口DescribeL4Listeners查询。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 权重信息，可选值0~100。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 已绑定的主机端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 绑定类型。0：物理机 1：虚拟机 2：半托管机器
                     */
                    int64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL4BACKENDWEIGHTREQUEST_H_
