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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROJECTSECURITYGROUPSRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROJECTSECURITYGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/SecurityGroup.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeProjectSecurityGroups返回参数结构体
                */
                class DescribeProjectSecurityGroupsResponse : public AbstractModel
                {
                public:
                    DescribeProjectSecurityGroupsResponse();
                    ~DescribeProjectSecurityGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取安全组详情。
                     * @return Groups 安全组详情。
                     */
                    std::vector<SecurityGroup> GetGroups() const;

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     */
                    bool GroupsHasBeenSet() const;

                private:

                    /**
                     * 安全组详情。
                     */
                    std::vector<SecurityGroup> m_groups;
                    bool m_groupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROJECTSECURITYGROUPSRESPONSE_H_
