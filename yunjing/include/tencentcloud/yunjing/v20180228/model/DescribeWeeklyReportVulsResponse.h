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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTVULSRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTVULSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/WeeklyReportVul.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWeeklyReportVuls返回参数结构体
                */
                class DescribeWeeklyReportVulsResponse : public AbstractModel
                {
                public:
                    DescribeWeeklyReportVulsResponse();
                    ~DescribeWeeklyReportVulsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取专业周报漏洞数据数组。
                     * @return WeeklyReportVuls 专业周报漏洞数据数组。
                     */
                    std::vector<WeeklyReportVul> GetWeeklyReportVuls() const;

                    /**
                     * 判断参数 WeeklyReportVuls 是否已赋值
                     * @return WeeklyReportVuls 是否已赋值
                     */
                    bool WeeklyReportVulsHasBeenSet() const;

                    /**
                     * 获取记录总数。
                     * @return TotalCount 记录总数。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 专业周报漏洞数据数组。
                     */
                    std::vector<WeeklyReportVul> m_weeklyReportVuls;
                    bool m_weeklyReportVulsHasBeenSet;

                    /**
                     * 记录总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTVULSRESPONSE_H_
