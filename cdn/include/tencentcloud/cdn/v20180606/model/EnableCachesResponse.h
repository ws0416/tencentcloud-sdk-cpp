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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ENABLECACHESRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ENABLECACHESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CacheOptResult.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * EnableCaches返回参数结构体
                */
                class EnableCachesResponse : public AbstractModel
                {
                public:
                    EnableCachesResponse();
                    ~EnableCachesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheOptResult 结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheOptResult GetCacheOptResult() const;

                    /**
                     * 判断参数 CacheOptResult 是否已赋值
                     * @return CacheOptResult 是否已赋值
                     */
                    bool CacheOptResultHasBeenSet() const;

                private:

                    /**
                     * 结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheOptResult m_cacheOptResult;
                    bool m_cacheOptResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ENABLECACHESRESPONSE_H_
