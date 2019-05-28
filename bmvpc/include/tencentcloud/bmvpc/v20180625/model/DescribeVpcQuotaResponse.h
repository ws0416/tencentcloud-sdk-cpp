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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCQUOTARESPONSE_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/VpcQuota.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeVpcQuota返回参数结构体
                */
                class DescribeVpcQuotaResponse : public AbstractModel
                {
                public:
                    DescribeVpcQuotaResponse();
                    ~DescribeVpcQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取配额信息
                     * @return VpcQuotaSet 配额信息
                     */
                    std::vector<VpcQuota> GetVpcQuotaSet() const;

                    /**
                     * 判断参数 VpcQuotaSet 是否已赋值
                     * @return VpcQuotaSet 是否已赋值
                     */
                    bool VpcQuotaSetHasBeenSet() const;

                private:

                    /**
                     * 配额信息
                     */
                    std::vector<VpcQuota> m_vpcQuotaSet;
                    bool m_vpcQuotaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBEVPCQUOTARESPONSE_H_
