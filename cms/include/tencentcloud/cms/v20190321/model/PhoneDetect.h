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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_PHONEDETECT_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_PHONEDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 手机模型识别检测
                */
                class PhoneDetect : public AbstractModel
                {
                public:
                    PhoneDetect();
                    ~PhoneDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取恶意类型
100：正常
21000：综合
                     * @return EvilType 恶意类型
100：正常
21000：综合
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常
21000：综合
                     * @param EvilType 恶意类型
100：正常
21000：综合
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取处置判定 0：正常 1：可疑
                     * @return HitFlag 处置判定 0：正常 1：可疑
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置处置判定 0：正常 1：可疑
                     * @param HitFlag 处置判定 0：正常 1：可疑
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取特征中文描述
                     * @return Labels 特征中文描述
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置特征中文描述
                     * @param Labels 特征中文描述
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取分值范围 0-100，分数越高倾向越明显
                     * @return Score 分值范围 0-100，分数越高倾向越明显
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置分值范围 0-100，分数越高倾向越明显
                     * @param Score 分值范围 0-100，分数越高倾向越明显
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 恶意类型
100：正常
21000：综合
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 处置判定 0：正常 1：可疑
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 特征中文描述
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 分值范围 0-100，分数越高倾向越明显
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_PHONEDETECT_H_
