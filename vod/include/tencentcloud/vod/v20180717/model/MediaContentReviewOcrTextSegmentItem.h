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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWOCRTEXTSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWOCRTEXTSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 内容审核 Ocr 文字审核嫌疑片段
                */
                class MediaContentReviewOcrTextSegmentItem : public AbstractModel
                {
                public:
                    MediaContentReviewOcrTextSegmentItem();
                    ~MediaContentReviewOcrTextSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取嫌疑片段起始的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTimeOffset 嫌疑片段起始的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置嫌疑片段起始的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTimeOffset 嫌疑片段起始的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取嫌疑片段结束的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTimeOffset 嫌疑片段结束的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置嫌疑片段结束的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTimeOffset 嫌疑片段结束的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取嫌疑片段置信度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Confidence 嫌疑片段置信度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetConfidence() const;

                    /**
                     * 设置嫌疑片段置信度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Confidence 嫌疑片段置信度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取嫌疑片段审核结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 嫌疑片段审核结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置嫌疑片段审核结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Suggestion 嫌疑片段审核结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取嫌疑关键词列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeywordSet 嫌疑关键词列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置嫌疑关键词列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KeywordSet 嫌疑关键词列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKeywordSet(const std::vector<std::string>& _keywordSet);

                    /**
                     * 判断参数 KeywordSet 是否已赋值
                     * @return KeywordSet 是否已赋值
                     */
                    bool KeywordSetHasBeenSet() const;

                    /**
                     * 获取嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaCoordSet 嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AreaCoordSet 嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     */
                    bool AreaCoordSetHasBeenSet() const;

                private:

                    /**
                     * 嫌疑片段起始的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 嫌疑片段结束的偏移时间，单位：秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 嫌疑片段置信度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 嫌疑片段审核结果建议，取值范围：
<li>pass。</li>
<li>review。</li>
<li>block。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 嫌疑关键词列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                    /**
                     * 嫌疑文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACONTENTREVIEWOCRTEXTSEGMENTITEM_H_
