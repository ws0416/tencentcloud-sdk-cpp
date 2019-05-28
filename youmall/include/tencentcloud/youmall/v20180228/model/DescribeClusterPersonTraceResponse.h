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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBECLUSTERPERSONTRACERESPONSE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBECLUSTERPERSONTRACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/DailyTracePoint.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeClusterPersonTrace返回参数结构体
                */
                class DescribeClusterPersonTraceResponse : public AbstractModel
                {
                public:
                    DescribeClusterPersonTraceResponse();
                    ~DescribeClusterPersonTraceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取卖场系统编码
                     * @return MallId 卖场系统编码
                     */
                    std::string GetMallId() const;

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取卖场用户编码
                     * @return MallCode 卖场用户编码
                     */
                    std::string GetMallCode() const;

                    /**
                     * 判断参数 MallCode 是否已赋值
                     * @return MallCode 是否已赋值
                     */
                    bool MallCodeHasBeenSet() const;

                    /**
                     * 获取客户编码
                     * @return PersonId 客户编码
                     */
                    std::string GetPersonId() const;

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取轨迹序列
                     * @return TracePointSet 轨迹序列
                     */
                    std::vector<DailyTracePoint> GetTracePointSet() const;

                    /**
                     * 判断参数 TracePointSet 是否已赋值
                     * @return TracePointSet 是否已赋值
                     */
                    bool TracePointSetHasBeenSet() const;

                private:

                    /**
                     * 卖场系统编码
                     */
                    std::string m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 卖场用户编码
                     */
                    std::string m_mallCode;
                    bool m_mallCodeHasBeenSet;

                    /**
                     * 客户编码
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 轨迹序列
                     */
                    std::vector<DailyTracePoint> m_tracePointSet;
                    bool m_tracePointSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBECLUSTERPERSONTRACERESPONSE_H_
