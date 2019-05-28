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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEBRANDMEDIAREPORTRESPONSE_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEBRANDMEDIAREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbm/v20180129/model/DateCount.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * DescribeBrandMediaReport返回参数结构体
                */
                class DescribeBrandMediaReportResponse : public AbstractModel
                {
                public:
                    DescribeBrandMediaReportResponse();
                    ~DescribeBrandMediaReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取查询范围内文章总数
                     * @return TotalCount 查询范围内文章总数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取按天计算的每天文章数
                     * @return DateCountSet 按天计算的每天文章数
                     */
                    std::vector<DateCount> GetDateCountSet() const;

                    /**
                     * 判断参数 DateCountSet 是否已赋值
                     * @return DateCountSet 是否已赋值
                     */
                    bool DateCountSetHasBeenSet() const;

                private:

                    /**
                     * 查询范围内文章总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 按天计算的每天文章数
                     */
                    std::vector<DateCount> m_dateCountSet;
                    bool m_dateCountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEBRANDMEDIAREPORTRESPONSE_H_
