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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TABLEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TABLEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TextTable.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * TableOCR返回参数结构体
                */
                class TableOCRResponse : public AbstractModel
                {
                public:
                    TableOCRResponse();
                    ~TableOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取检测到的文本信息，具体内容请点击左侧链接。
                     * @return TextDetections 检测到的文本信息，具体内容请点击左侧链接。
                     */
                    std::vector<TextTable> GetTextDetections() const;

                    /**
                     * 判断参数 TextDetections 是否已赋值
                     * @return TextDetections 是否已赋值
                     */
                    bool TextDetectionsHasBeenSet() const;

                    /**
                     * 获取Base64 编码后的 Excel 数据。
                     * @return Data Base64 编码后的 Excel 数据。
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 检测到的文本信息，具体内容请点击左侧链接。
                     */
                    std::vector<TextTable> m_textDetections;
                    bool m_textDetectionsHasBeenSet;

                    /**
                     * Base64 编码后的 Excel 数据。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TABLEOCRRESPONSE_H_
