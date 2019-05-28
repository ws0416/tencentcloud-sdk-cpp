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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/RecordParam.h>
#include <tencentcloud/live/v20180801/model/HlsSpecialParam.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLiveRecordTemplate请求参数结构体
                */
                class ModifyLiveRecordTemplateRequest : public AbstractModel
                {
                public:
                    ModifyLiveRecordTemplateRequest();
                    ~ModifyLiveRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板Id。
                     * @return TemplateId 模板Id。
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板Id。
                     * @param TemplateId 模板Id。
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称。
                     * @return TemplateName 模板名称。
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param TemplateName 模板名称。
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取描述信息。
                     * @return Description 描述信息。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
                     * @param Description 描述信息。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Flv录制参数，开启Flv录制时设置。
                     * @return FlvParam Flv录制参数，开启Flv录制时设置。
                     */
                    RecordParam GetFlvParam() const;

                    /**
                     * 设置Flv录制参数，开启Flv录制时设置。
                     * @param FlvParam Flv录制参数，开启Flv录制时设置。
                     */
                    void SetFlvParam(const RecordParam& _flvParam);

                    /**
                     * 判断参数 FlvParam 是否已赋值
                     * @return FlvParam 是否已赋值
                     */
                    bool FlvParamHasBeenSet() const;

                    /**
                     * 获取Hls录制参数，开启hls录制时设置。
                     * @return HlsParam Hls录制参数，开启hls录制时设置。
                     */
                    RecordParam GetHlsParam() const;

                    /**
                     * 设置Hls录制参数，开启hls录制时设置。
                     * @param HlsParam Hls录制参数，开启hls录制时设置。
                     */
                    void SetHlsParam(const RecordParam& _hlsParam);

                    /**
                     * 判断参数 HlsParam 是否已赋值
                     * @return HlsParam 是否已赋值
                     */
                    bool HlsParamHasBeenSet() const;

                    /**
                     * 获取Mp4录制参数，开启Mp4录制时设置。
                     * @return Mp4Param Mp4录制参数，开启Mp4录制时设置。
                     */
                    RecordParam GetMp4Param() const;

                    /**
                     * 设置Mp4录制参数，开启Mp4录制时设置。
                     * @param Mp4Param Mp4录制参数，开启Mp4录制时设置。
                     */
                    void SetMp4Param(const RecordParam& _mp4Param);

                    /**
                     * 判断参数 Mp4Param 是否已赋值
                     * @return Mp4Param 是否已赋值
                     */
                    bool Mp4ParamHasBeenSet() const;

                    /**
                     * 获取Aac录制参数，开启Aac录制时设置。
                     * @return AacParam Aac录制参数，开启Aac录制时设置。
                     */
                    RecordParam GetAacParam() const;

                    /**
                     * 设置Aac录制参数，开启Aac录制时设置。
                     * @param AacParam Aac录制参数，开启Aac录制时设置。
                     */
                    void SetAacParam(const RecordParam& _aacParam);

                    /**
                     * 判断参数 AacParam 是否已赋值
                     * @return AacParam 是否已赋值
                     */
                    bool AacParamHasBeenSet() const;

                    /**
                     * 获取HLS录制定制参数
                     * @return HlsSpecialParam HLS录制定制参数
                     */
                    HlsSpecialParam GetHlsSpecialParam() const;

                    /**
                     * 设置HLS录制定制参数
                     * @param HlsSpecialParam HLS录制定制参数
                     */
                    void SetHlsSpecialParam(const HlsSpecialParam& _hlsSpecialParam);

                    /**
                     * 判断参数 HlsSpecialParam 是否已赋值
                     * @return HlsSpecialParam 是否已赋值
                     */
                    bool HlsSpecialParamHasBeenSet() const;

                private:

                    /**
                     * 模板Id。
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Flv录制参数，开启Flv录制时设置。
                     */
                    RecordParam m_flvParam;
                    bool m_flvParamHasBeenSet;

                    /**
                     * Hls录制参数，开启hls录制时设置。
                     */
                    RecordParam m_hlsParam;
                    bool m_hlsParamHasBeenSet;

                    /**
                     * Mp4录制参数，开启Mp4录制时设置。
                     */
                    RecordParam m_mp4Param;
                    bool m_mp4ParamHasBeenSet;

                    /**
                     * Aac录制参数，开启Aac录制时设置。
                     */
                    RecordParam m_aacParam;
                    bool m_aacParamHasBeenSet;

                    /**
                     * HLS录制定制参数
                     */
                    HlsSpecialParam m_hlsSpecialParam;
                    bool m_hlsSpecialParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_
