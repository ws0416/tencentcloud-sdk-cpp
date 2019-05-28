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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPLAYDOMAINREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPLAYDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLivePlayDomain请求参数结构体
                */
                class ModifyLivePlayDomainRequest : public AbstractModel
                {
                public:
                    ModifyLivePlayDomainRequest();
                    ~ModifyLivePlayDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取播放域名。
                     * @return DomainName 播放域名。
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置播放域名。
                     * @param DomainName 播放域名。
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取拉流域名类型。1-国内；2-全球；3-境外
                     * @return PlayType 拉流域名类型。1-国内；2-全球；3-境外
                     */
                    int64_t GetPlayType() const;

                    /**
                     * 设置拉流域名类型。1-国内；2-全球；3-境外
                     * @param PlayType 拉流域名类型。1-国内；2-全球；3-境外
                     */
                    void SetPlayType(const int64_t& _playType);

                    /**
                     * 判断参数 PlayType 是否已赋值
                     * @return PlayType 是否已赋值
                     */
                    bool PlayTypeHasBeenSet() const;

                private:

                    /**
                     * 播放域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 拉流域名类型。1-国内；2-全球；3-境外
                     */
                    int64_t m_playType;
                    bool m_playTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPLAYDOMAINREQUEST_H_
