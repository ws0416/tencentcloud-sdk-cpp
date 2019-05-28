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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHOSTSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHOSTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/HostItem.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeHosts返回参数结构体
                */
                class DescribeHostsResponse : public AbstractModel
                {
                public:
                    DescribeHostsResponse();
                    ~DescribeHostsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取符合查询条件的cdh实例总数
                     * @return TotalCount 符合查询条件的cdh实例总数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取cdh实例详细信息列表
                     * @return HostSet cdh实例详细信息列表
                     */
                    std::vector<HostItem> GetHostSet() const;

                    /**
                     * 判断参数 HostSet 是否已赋值
                     * @return HostSet 是否已赋值
                     */
                    bool HostSetHasBeenSet() const;

                private:

                    /**
                     * 符合查询条件的cdh实例总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * cdh实例详细信息列表
                     */
                    std::vector<HostItem> m_hostSet;
                    bool m_hostSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHOSTSRESPONSE_H_
