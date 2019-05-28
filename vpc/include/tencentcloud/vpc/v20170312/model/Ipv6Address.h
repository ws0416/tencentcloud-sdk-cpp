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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IPV6ADDRESS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IPV6ADDRESS_H_

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
                * `IPv6`地址信息。
                */
                class Ipv6Address : public AbstractModel
                {
                public:
                    Ipv6Address();
                    ~Ipv6Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`IPv6`地址，形如：`3402:4e00:20:100:0:8cd9:2a67:71f3`
                     * @return Address `IPv6`地址，形如：`3402:4e00:20:100:0:8cd9:2a67:71f3`
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置`IPv6`地址，形如：`3402:4e00:20:100:0:8cd9:2a67:71f3`
                     * @param Address `IPv6`地址，形如：`3402:4e00:20:100:0:8cd9:2a67:71f3`
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取是否是主`IP`。
                     * @return Primary 是否是主`IP`。
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置是否是主`IP`。
                     * @param Primary 是否是主`IP`。
                     */
                    void SetPrimary(const bool& _primary);

                    /**
                     * 判断参数 Primary 是否已赋值
                     * @return Primary 是否已赋值
                     */
                    bool PrimaryHasBeenSet() const;

                    /**
                     * 获取`EIP`实例`ID`，形如：`eip-hxlqja90`。
                     * @return AddressId `EIP`实例`ID`，形如：`eip-hxlqja90`。
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置`EIP`实例`ID`，形如：`eip-hxlqja90`。
                     * @param AddressId `EIP`实例`ID`，形如：`eip-hxlqja90`。
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取描述信息。
                     * @return Description 描述信息。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
                     * @param Description 描述信息。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取公网IP是否被封堵。
                     * @return IsWanIpBlocked 公网IP是否被封堵。
                     */
                    bool GetIsWanIpBlocked() const;

                    /**
                     * 设置公网IP是否被封堵。
                     * @param IsWanIpBlocked 公网IP是否被封堵。
                     */
                    void SetIsWanIpBlocked(const bool& _isWanIpBlocked);

                    /**
                     * 判断参数 IsWanIpBlocked 是否已赋值
                     * @return IsWanIpBlocked 是否已赋值
                     */
                    bool IsWanIpBlockedHasBeenSet() const;

                    /**
                     * 获取`IPv6`地址状态：
<li>`PENDING`：生产中</li>
<li>`MIGRATING`：迁移中</li>
<li>`DELETING`：删除中</li>
<li>`AVAILABLE`：可用的</li>
                     * @return State `IPv6`地址状态：
<li>`PENDING`：生产中</li>
<li>`MIGRATING`：迁移中</li>
<li>`DELETING`：删除中</li>
<li>`AVAILABLE`：可用的</li>
                     */
                    std::string GetState() const;

                    /**
                     * 设置`IPv6`地址状态：
<li>`PENDING`：生产中</li>
<li>`MIGRATING`：迁移中</li>
<li>`DELETING`：删除中</li>
<li>`AVAILABLE`：可用的</li>
                     * @param State `IPv6`地址状态：
<li>`PENDING`：生产中</li>
<li>`MIGRATING`：迁移中</li>
<li>`DELETING`：删除中</li>
<li>`AVAILABLE`：可用的</li>
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * `IPv6`地址，形如：`3402:4e00:20:100:0:8cd9:2a67:71f3`
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 是否是主`IP`。
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * `EIP`实例`ID`，形如：`eip-hxlqja90`。
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 公网IP是否被封堵。
                     */
                    bool m_isWanIpBlocked;
                    bool m_isWanIpBlockedHasBeenSet;

                    /**
                     * `IPv6`地址状态：
<li>`PENDING`：生产中</li>
<li>`MIGRATING`：迁移中</li>
<li>`DELETING`：删除中</li>
<li>`AVAILABLE`：可用的</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IPV6ADDRESS_H_
