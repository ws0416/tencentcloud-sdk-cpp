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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBESALEINFORESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBESALEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSaleInfo返回参数结构体
                */
                class DescribeSaleInfoResponse : public AbstractModel
                {
                public:
                    DescribeSaleInfoResponse();
                    ~DescribeSaleInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取可售卖地域信息列表
                     * @return RegionList 可售卖地域信息列表
                     */
                    std::vector<RegionInfo> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     */
                    bool RegionListHasBeenSet() const;

                private:

                    /**
                     * 可售卖地域信息列表
                     */
                    std::vector<RegionInfo> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBESALEINFORESPONSE_H_
