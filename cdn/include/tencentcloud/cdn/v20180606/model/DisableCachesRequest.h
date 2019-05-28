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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DISABLECACHESREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DISABLECACHESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DisableCaches请求参数结构体
                */
                class DisableCachesRequest : public AbstractModel
                {
                public:
                    DisableCachesRequest();
                    ~DisableCachesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要禁用的 URL 列表
每次最多可提交 100 条，每日最多可提交 3000 条
                     * @return Urls 需要禁用的 URL 列表
每次最多可提交 100 条，每日最多可提交 3000 条
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置需要禁用的 URL 列表
每次最多可提交 100 条，每日最多可提交 3000 条
                     * @param Urls 需要禁用的 URL 列表
每次最多可提交 100 条，每日最多可提交 3000 条
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     */
                    bool UrlsHasBeenSet() const;

                private:

                    /**
                     * 需要禁用的 URL 列表
每次最多可提交 100 条，每日最多可提交 3000 条
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DISABLECACHESREQUEST_H_
