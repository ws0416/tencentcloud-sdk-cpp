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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/WatermarkInput.h>
#include <tencentcloud/vod/v20180717/model/MosaicInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 转码任务输入参数类型
                */
                class TranscodeTaskInput : public AbstractModel
                {
                public:
                    TranscodeTaskInput();
                    ~TranscodeTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频转码模板 ID。
                     * @return Definition 视频转码模板 ID。
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置视频转码模板 ID。
                     * @param Definition 视频转码模板 ID。
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * @return WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * @param WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     */
                    bool WatermarkSetHasBeenSet() const;

                    /**
                     * 获取马赛克列表，最大可支持 10 张。
                     * @return MosaicSet 马赛克列表，最大可支持 10 张。
                     */
                    std::vector<MosaicInput> GetMosaicSet() const;

                    /**
                     * 设置马赛克列表，最大可支持 10 张。
                     * @param MosaicSet 马赛克列表，最大可支持 10 张。
                     */
                    void SetMosaicSet(const std::vector<MosaicInput>& _mosaicSet);

                    /**
                     * 判断参数 MosaicSet 是否已赋值
                     * @return MosaicSet 是否已赋值
                     */
                    bool MosaicSetHasBeenSet() const;

                private:

                    /**
                     * 视频转码模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * 马赛克列表，最大可支持 10 张。
                     */
                    std::vector<MosaicInput> m_mosaicSet;
                    bool m_mosaicSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASKINPUT_H_
