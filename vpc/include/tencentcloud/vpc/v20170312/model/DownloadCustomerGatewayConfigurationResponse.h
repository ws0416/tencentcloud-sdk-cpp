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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DownloadCustomerGatewayConfiguration返回参数结构体
                */
                class DownloadCustomerGatewayConfigurationResponse : public AbstractModel
                {
                public:
                    DownloadCustomerGatewayConfigurationResponse();
                    ~DownloadCustomerGatewayConfigurationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取XML格式配置信息。
                     * @return CustomerGatewayConfiguration XML格式配置信息。
                     */
                    std::string GetCustomerGatewayConfiguration() const;

                    /**
                     * 判断参数 CustomerGatewayConfiguration 是否已赋值
                     * @return CustomerGatewayConfiguration 是否已赋值
                     */
                    bool CustomerGatewayConfigurationHasBeenSet() const;

                private:

                    /**
                     * XML格式配置信息。
                     */
                    std::string m_customerGatewayConfiguration;
                    bool m_customerGatewayConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONRESPONSE_H_
