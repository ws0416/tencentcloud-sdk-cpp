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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_ADDLIVEDOMAINREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_ADDLIVEDOMAINREQUEST_H_

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
                * AddLiveDomain请求参数结构体
                */
                class AddLiveDomainRequest : public AbstractModel
                {
                public:
                    AddLiveDomainRequest();
                    ~AddLiveDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名名称。
                     * @return DomainName 域名名称。
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置域名名称。
                     * @param DomainName 域名名称。
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取域名类型，
0：推流域名，
1：播放域名。
                     * @return DomainType 域名类型，
0：推流域名，
1：播放域名。
                     */
                    uint64_t GetDomainType() const;

                    /**
                     * 设置域名类型，
0：推流域名，
1：播放域名。
                     * @param DomainType 域名类型，
0：推流域名，
1：播放域名。
                     */
                    void SetDomainType(const uint64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     */
                    bool DomainTypeHasBeenSet() const;

                    /**
                     * 获取拉流域名类型：
1：国内，
2：全球，
3：境外。
                     * @return PlayType 拉流域名类型：
1：国内，
2：全球，
3：境外。
                     */
                    uint64_t GetPlayType() const;

                    /**
                     * 设置拉流域名类型：
1：国内，
2：全球，
3：境外。
                     * @param PlayType 拉流域名类型：
1：国内，
2：全球，
3：境外。
                     */
                    void SetPlayType(const uint64_t& _playType);

                    /**
                     * 判断参数 PlayType 是否已赋值
                     * @return PlayType 是否已赋值
                     */
                    bool PlayTypeHasBeenSet() const;

                    /**
                     * 获取默认 0 ：普通直播，
1：慢直播。
                     * @return IsDelayLive 默认 0 ：普通直播，
1：慢直播。
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置默认 0 ：普通直播，
1：慢直播。
                     * @param IsDelayLive 默认 0 ：普通直播，
1：慢直播。
                     */
                    void SetIsDelayLive(const int64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     */
                    bool IsDelayLiveHasBeenSet() const;

                private:

                    /**
                     * 域名名称。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 域名类型，
0：推流域名，
1：播放域名。
                     */
                    uint64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * 拉流域名类型：
1：国内，
2：全球，
3：境外。
                     */
                    uint64_t m_playType;
                    bool m_playTypeHasBeenSet;

                    /**
                     * 默认 0 ：普通直播，
1：慢直播。
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_ADDLIVEDOMAINREQUEST_H_
