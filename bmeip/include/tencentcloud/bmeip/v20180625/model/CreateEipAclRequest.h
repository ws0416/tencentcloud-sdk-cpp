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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_CREATEEIPACLREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_CREATEEIPACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * CreateEipAcl请求参数结构体
                */
                class CreateEipAclRequest : public AbstractModel
                {
                public:
                    CreateEipAclRequest();
                    ~CreateEipAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ACL 名称
                     * @return AclName ACL 名称
                     */
                    std::string GetAclName() const;

                    /**
                     * 设置ACL 名称
                     * @param AclName ACL 名称
                     */
                    void SetAclName(const std::string& _aclName);

                    /**
                     * 判断参数 AclName 是否已赋值
                     * @return AclName 是否已赋值
                     */
                    bool AclNameHasBeenSet() const;

                    /**
                     * 获取ACL 状态 0：无状态，1：有状态
                     * @return Status ACL 状态 0：无状态，1：有状态
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置ACL 状态 0：无状态，1：有状态
                     * @param Status ACL 状态 0：无状态，1：有状态
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * ACL 名称
                     */
                    std::string m_aclName;
                    bool m_aclNameHasBeenSet;

                    /**
                     * ACL 状态 0：无状态，1：有状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_CREATEEIPACLREQUEST_H_
