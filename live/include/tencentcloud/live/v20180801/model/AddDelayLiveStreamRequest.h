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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_ADDDELAYLIVESTREAMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_ADDDELAYLIVESTREAMREQUEST_H_

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
                * AddDelayLiveStream请求参数结构体
                */
                class AddDelayLiveStreamRequest : public AbstractModel
                {
                public:
                    AddDelayLiveStreamRequest();
                    ~AddDelayLiveStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param AppName 应用名称。
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取您的加速域名。
                     * @return DomainName 您的加速域名。
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置您的加速域名。
                     * @param DomainName 您的加速域名。
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param StreamName 流名称。
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取延播时间，单位：秒，上限：600秒。
                     * @return DelayTime 延播时间，单位：秒，上限：600秒。
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置延播时间，单位：秒，上限：600秒。
                     * @param DelayTime 延播时间，单位：秒，上限：600秒。
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取延播设置的过期时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：默认7天后过期，且最长支持7天内生效。
                     * @return ExpireTime 延播设置的过期时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：默认7天后过期，且最长支持7天内生效。
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置延播设置的过期时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：默认7天后过期，且最长支持7天内生效。
                     * @param ExpireTime 延播设置的过期时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：默认7天后过期，且最长支持7天内生效。
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 您的加速域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 延播时间，单位：秒，上限：600秒。
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 延播设置的过期时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：默认7天后过期，且最长支持7天内生效。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_ADDDELAYLIVESTREAMREQUEST_H_
