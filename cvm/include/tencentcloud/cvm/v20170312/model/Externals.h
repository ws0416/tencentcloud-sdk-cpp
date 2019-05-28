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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_EXTERNALS_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_EXTERNALS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/StorageBlock.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 扩展数据
                */
                class Externals : public AbstractModel
                {
                public:
                    Externals();
                    ~Externals() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取释放地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseAddress 释放地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetReleaseAddress() const;

                    /**
                     * 设置释放地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReleaseAddress 释放地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReleaseAddress(const bool& _releaseAddress);

                    /**
                     * 判断参数 ReleaseAddress 是否已赋值
                     * @return ReleaseAddress 是否已赋值
                     */
                    bool ReleaseAddressHasBeenSet() const;

                    /**
                     * 获取不支持的网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnsupportNetworks 不支持的网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetUnsupportNetworks() const;

                    /**
                     * 设置不支持的网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnsupportNetworks 不支持的网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnsupportNetworks(const std::vector<std::string>& _unsupportNetworks);

                    /**
                     * 判断参数 UnsupportNetworks 是否已赋值
                     * @return UnsupportNetworks 是否已赋值
                     */
                    bool UnsupportNetworksHasBeenSet() const;

                    /**
                     * 获取HDD本地存储属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageBlockAttr HDD本地存储属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StorageBlock GetStorageBlockAttr() const;

                    /**
                     * 设置HDD本地存储属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageBlockAttr HDD本地存储属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageBlockAttr(const StorageBlock& _storageBlockAttr);

                    /**
                     * 判断参数 StorageBlockAttr 是否已赋值
                     * @return StorageBlockAttr 是否已赋值
                     */
                    bool StorageBlockAttrHasBeenSet() const;

                private:

                    /**
                     * 释放地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_releaseAddress;
                    bool m_releaseAddressHasBeenSet;

                    /**
                     * 不支持的网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_unsupportNetworks;
                    bool m_unsupportNetworksHasBeenSet;

                    /**
                     * HDD本地存储属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StorageBlock m_storageBlockAttr;
                    bool m_storageBlockAttrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_EXTERNALS_H_
