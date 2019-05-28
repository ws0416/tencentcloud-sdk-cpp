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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/HeadTailConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/FaceConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/OcrFullTextConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/OcrWordsConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/AsrFullTextConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/AsrWordsConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/ObjectConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyAIRecognitionTemplate请求参数结构体
                */
                class ModifyAIRecognitionTemplateRequest : public AbstractModel
                {
                public:
                    ModifyAIRecognitionTemplateRequest();
                    ~ModifyAIRecognitionTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频内容识别模板唯一标识。
                     * @return Definition 视频内容识别模板唯一标识。
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置视频内容识别模板唯一标识。
                     * @param Definition 视频内容识别模板唯一标识。
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取视频内容识别模板名称，长度限制：64 个字符。
                     * @return Name 视频内容识别模板名称，长度限制：64 个字符。
                     */
                    std::string GetName() const;

                    /**
                     * 设置视频内容识别模板名称，长度限制：64 个字符。
                     * @param Name 视频内容识别模板名称，长度限制：64 个字符。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取视频内容识别模板描述信息，长度限制：256 个字符。
                     * @return Comment 视频内容识别模板描述信息，长度限制：256 个字符。
                     */
                    std::string GetComment() const;

                    /**
                     * 设置视频内容识别模板描述信息，长度限制：256 个字符。
                     * @param Comment 视频内容识别模板描述信息，长度限制：256 个字符。
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取视频片头片尾识别控制参数。
                     * @return HeadTailConfigure 视频片头片尾识别控制参数。
                     */
                    HeadTailConfigureInfoForUpdate GetHeadTailConfigure() const;

                    /**
                     * 设置视频片头片尾识别控制参数。
                     * @param HeadTailConfigure 视频片头片尾识别控制参数。
                     */
                    void SetHeadTailConfigure(const HeadTailConfigureInfoForUpdate& _headTailConfigure);

                    /**
                     * 判断参数 HeadTailConfigure 是否已赋值
                     * @return HeadTailConfigure 是否已赋值
                     */
                    bool HeadTailConfigureHasBeenSet() const;

                    /**
                     * 获取人脸识别控制参数。
                     * @return FaceConfigure 人脸识别控制参数。
                     */
                    FaceConfigureInfoForUpdate GetFaceConfigure() const;

                    /**
                     * 设置人脸识别控制参数。
                     * @param FaceConfigure 人脸识别控制参数。
                     */
                    void SetFaceConfigure(const FaceConfigureInfoForUpdate& _faceConfigure);

                    /**
                     * 判断参数 FaceConfigure 是否已赋值
                     * @return FaceConfigure 是否已赋值
                     */
                    bool FaceConfigureHasBeenSet() const;

                    /**
                     * 获取文本全文识别控制参数。
                     * @return OcrFullTextConfigure 文本全文识别控制参数。
                     */
                    OcrFullTextConfigureInfoForUpdate GetOcrFullTextConfigure() const;

                    /**
                     * 设置文本全文识别控制参数。
                     * @param OcrFullTextConfigure 文本全文识别控制参数。
                     */
                    void SetOcrFullTextConfigure(const OcrFullTextConfigureInfoForUpdate& _ocrFullTextConfigure);

                    /**
                     * 判断参数 OcrFullTextConfigure 是否已赋值
                     * @return OcrFullTextConfigure 是否已赋值
                     */
                    bool OcrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取文本关键词识别控制参数。
                     * @return OcrWordsConfigure 文本关键词识别控制参数。
                     */
                    OcrWordsConfigureInfoForUpdate GetOcrWordsConfigure() const;

                    /**
                     * 设置文本关键词识别控制参数。
                     * @param OcrWordsConfigure 文本关键词识别控制参数。
                     */
                    void SetOcrWordsConfigure(const OcrWordsConfigureInfoForUpdate& _ocrWordsConfigure);

                    /**
                     * 判断参数 OcrWordsConfigure 是否已赋值
                     * @return OcrWordsConfigure 是否已赋值
                     */
                    bool OcrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取语音全文识别控制参数。
                     * @return AsrFullTextConfigure 语音全文识别控制参数。
                     */
                    AsrFullTextConfigureInfoForUpdate GetAsrFullTextConfigure() const;

                    /**
                     * 设置语音全文识别控制参数。
                     * @param AsrFullTextConfigure 语音全文识别控制参数。
                     */
                    void SetAsrFullTextConfigure(const AsrFullTextConfigureInfoForUpdate& _asrFullTextConfigure);

                    /**
                     * 判断参数 AsrFullTextConfigure 是否已赋值
                     * @return AsrFullTextConfigure 是否已赋值
                     */
                    bool AsrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取语音关键词识别控制参数。
                     * @return AsrWordsConfigure 语音关键词识别控制参数。
                     */
                    AsrWordsConfigureInfoForUpdate GetAsrWordsConfigure() const;

                    /**
                     * 设置语音关键词识别控制参数。
                     * @param AsrWordsConfigure 语音关键词识别控制参数。
                     */
                    void SetAsrWordsConfigure(const AsrWordsConfigureInfoForUpdate& _asrWordsConfigure);

                    /**
                     * 判断参数 AsrWordsConfigure 是否已赋值
                     * @return AsrWordsConfigure 是否已赋值
                     */
                    bool AsrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取物体识别控制参数。
                     * @return ObjectConfigure 物体识别控制参数。
                     */
                    ObjectConfigureInfoForUpdate GetObjectConfigure() const;

                    /**
                     * 设置物体识别控制参数。
                     * @param ObjectConfigure 物体识别控制参数。
                     */
                    void SetObjectConfigure(const ObjectConfigureInfoForUpdate& _objectConfigure);

                    /**
                     * 判断参数 ObjectConfigure 是否已赋值
                     * @return ObjectConfigure 是否已赋值
                     */
                    bool ObjectConfigureHasBeenSet() const;

                    /**
                     * 获取截帧间隔，单位为秒，最小值为 0.5 秒。
                     * @return ScreenshotInterval 截帧间隔，单位为秒，最小值为 0.5 秒。
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置截帧间隔，单位为秒，最小值为 0.5 秒。
                     * @param ScreenshotInterval 截帧间隔，单位为秒，最小值为 0.5 秒。
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @return SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @param SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 视频内容识别模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 视频内容识别模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 视频内容识别模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 视频片头片尾识别控制参数。
                     */
                    HeadTailConfigureInfoForUpdate m_headTailConfigure;
                    bool m_headTailConfigureHasBeenSet;

                    /**
                     * 人脸识别控制参数。
                     */
                    FaceConfigureInfoForUpdate m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * 文本全文识别控制参数。
                     */
                    OcrFullTextConfigureInfoForUpdate m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * 文本关键词识别控制参数。
                     */
                    OcrWordsConfigureInfoForUpdate m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * 语音全文识别控制参数。
                     */
                    AsrFullTextConfigureInfoForUpdate m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * 语音关键词识别控制参数。
                     */
                    AsrWordsConfigureInfoForUpdate m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                    /**
                     * 物体识别控制参数。
                     */
                    ObjectConfigureInfoForUpdate m_objectConfigure;
                    bool m_objectConfigureHasBeenSet;

                    /**
                     * 截帧间隔，单位为秒，最小值为 0.5 秒。
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_
