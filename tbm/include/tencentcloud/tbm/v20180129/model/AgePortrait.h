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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_AGEPORTRAIT_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_AGEPORTRAIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * 用户年龄画像
                */
                class AgePortrait : public AbstractModel
                {
                public:
                    AgePortrait();
                    ~AgePortrait() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取年龄区间
                     * @return AgeRange 年龄区间
                     */
                    std::string GetAgeRange() const;

                    /**
                     * 设置年龄区间
                     * @param AgeRange 年龄区间
                     */
                    void SetAgeRange(const std::string& _ageRange);

                    /**
                     * 判断参数 AgeRange 是否已赋值
                     * @return AgeRange 是否已赋值
                     */
                    bool AgeRangeHasBeenSet() const;

                    /**
                     * 获取百分比
                     * @return Percent 百分比
                     */
                    double GetPercent() const;

                    /**
                     * 设置百分比
                     * @param Percent 百分比
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     */
                    bool PercentHasBeenSet() const;

                private:

                    /**
                     * 年龄区间
                     */
                    std::string m_ageRange;
                    bool m_ageRangeHasBeenSet;

                    /**
                     * 百分比
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_AGEPORTRAIT_H_
