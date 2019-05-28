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

#ifndef TENCENTCLOUD_CMS_V20190321_CMSCLIENT_H_
#define TENCENTCLOUD_CMS_V20190321_CMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cms/v20190321/model/AudioModerationRequest.h>
#include <tencentcloud/cms/v20190321/model/AudioModerationResponse.h>
#include <tencentcloud/cms/v20190321/model/DescribeModerationOverviewRequest.h>
#include <tencentcloud/cms/v20190321/model/DescribeModerationOverviewResponse.h>
#include <tencentcloud/cms/v20190321/model/ImageModerationRequest.h>
#include <tencentcloud/cms/v20190321/model/ImageModerationResponse.h>
#include <tencentcloud/cms/v20190321/model/TextModerationRequest.h>
#include <tencentcloud/cms/v20190321/model/TextModerationResponse.h>
#include <tencentcloud/cms/v20190321/model/VideoModerationRequest.h>
#include <tencentcloud/cms/v20190321/model/VideoModerationResponse.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            class CmsClient : public AbstractClient
            {
            public:
                CmsClient(const Credential &credential, const std::string &region);
                CmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AudioModerationResponse> AudioModerationOutcome;
                typedef std::future<AudioModerationOutcome> AudioModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::AudioModerationRequest&, AudioModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AudioModerationAsyncHandler;
                typedef Outcome<Error, Model::DescribeModerationOverviewResponse> DescribeModerationOverviewOutcome;
                typedef std::future<DescribeModerationOverviewOutcome> DescribeModerationOverviewOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::DescribeModerationOverviewRequest&, DescribeModerationOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModerationOverviewAsyncHandler;
                typedef Outcome<Error, Model::ImageModerationResponse> ImageModerationOutcome;
                typedef std::future<ImageModerationOutcome> ImageModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::ImageModerationRequest&, ImageModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageModerationAsyncHandler;
                typedef Outcome<Error, Model::TextModerationResponse> TextModerationOutcome;
                typedef std::future<TextModerationOutcome> TextModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::TextModerationRequest&, TextModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextModerationAsyncHandler;
                typedef Outcome<Error, Model::VideoModerationResponse> VideoModerationOutcome;
                typedef std::future<VideoModerationOutcome> VideoModerationOutcomeCallable;
                typedef std::function<void(const CmsClient*, const Model::VideoModerationRequest&, VideoModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VideoModerationAsyncHandler;



                /**
                 *音频内容检测（Audio Moderation, AM）服务使用了波形分析、声纹分析等技术，能识别涉黄、涉政、涉恐等违规音频，同时支持用户配置音频黑库，打击自定义的违规内容。

通过API直接上传音频即可进行检测，对于高危部分直接屏蔽，可疑部分人工复审，从而节省审核人力，释放业务风险。
                 * @param req AudioModerationRequest
                 * @return AudioModerationOutcome
                 */
                AudioModerationOutcome AudioModeration(const Model::AudioModerationRequest &request);
                void AudioModerationAsync(const Model::AudioModerationRequest& request, const AudioModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AudioModerationOutcomeCallable AudioModerationCallable(const Model::AudioModerationRequest& request);

                /**
                 *根据日期，渠道和服务类型查询识别结果概览数据
                 * @param req DescribeModerationOverviewRequest
                 * @return DescribeModerationOverviewOutcome
                 */
                DescribeModerationOverviewOutcome DescribeModerationOverview(const Model::DescribeModerationOverviewRequest &request);
                void DescribeModerationOverviewAsync(const Model::DescribeModerationOverviewRequest& request, const DescribeModerationOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModerationOverviewOutcomeCallable DescribeModerationOverviewCallable(const Model::DescribeModerationOverviewRequest& request);

                /**
                 *图片内容检测服务（Image Moderation, IM）能自动扫描图片，识别涉黄、涉恐、涉政、涉毒等有害内容，同时支持用户配置图片黑名单，打击自定义的违规图片。
通过API获取检测的标签及置信度，可直接采信高置信度的结果，人工复审低置信度的结果，从而降低人工成本，提高审核效率。
                 * @param req ImageModerationRequest
                 * @return ImageModerationOutcome
                 */
                ImageModerationOutcome ImageModeration(const Model::ImageModerationRequest &request);
                void ImageModerationAsync(const Model::ImageModerationRequest& request, const ImageModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageModerationOutcomeCallable ImageModerationCallable(const Model::ImageModerationRequest& request);

                /**
                 *文本内容检测（Text Moderation）服务使用了深度学习技术，识别涉黄、涉政、涉恐等有害内容，同时支持用户配置词库，打击自定义的违规文本。
通过API接口，能检测内容的危险等级，对于高危部分直接过滤，可疑部分人工复审，从而节省审核人力，释放业务风险。
                 * @param req TextModerationRequest
                 * @return TextModerationOutcome
                 */
                TextModerationOutcome TextModeration(const Model::TextModerationRequest &request);
                void TextModerationAsync(const Model::TextModerationRequest& request, const TextModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextModerationOutcomeCallable TextModerationCallable(const Model::TextModerationRequest& request);

                /**
                 *视频内容检测（Video Moderation, VM）服务能识别涉黄、涉政、涉恐等违规视频，同时支持用户配置视频黑库，打击自定义的违规内容。
通过API直接上传视频即可进行检测，对于高危部分直接过滤，可疑部分人工复审，从而节省审核人力，释放业务风险。
                 * @param req VideoModerationRequest
                 * @return VideoModerationOutcome
                 */
                VideoModerationOutcome VideoModeration(const Model::VideoModerationRequest &request);
                void VideoModerationAsync(const Model::VideoModerationRequest& request, const VideoModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VideoModerationOutcomeCallable VideoModerationCallable(const Model::VideoModerationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_CMSCLIENT_H_
