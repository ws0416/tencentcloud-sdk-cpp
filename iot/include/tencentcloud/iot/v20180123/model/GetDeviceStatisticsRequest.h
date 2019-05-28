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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESTATISTICSREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * GetDeviceStatistics请求参数结构体
                */
                class GetDeviceStatisticsRequest : public AbstractModel
                {
                public:
                    GetDeviceStatisticsRequest();
                    ~GetDeviceStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品Id列表
                     * @return Products 产品Id列表
                     */
                    std::vector<std::string> GetProducts() const;

                    /**
                     * 设置产品Id列表
                     * @param Products 产品Id列表
                     */
                    void SetProducts(const std::vector<std::string>& _products);

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取开始日期
                     * @return StartDate 开始日期
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始日期
                     * @param StartDate 开始日期
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取结束日期
                     * @return EndDate 结束日期
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束日期
                     * @param EndDate 结束日期
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * 产品Id列表
                     */
                    std::vector<std::string> m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * 开始日期
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束日期
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESTATISTICSREQUEST_H_
