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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDATARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeStorageData返回参数结构体
                */
                class DescribeStorageDataResponse : public AbstractModel
                {
                public:
                    DescribeStorageDataResponse();
                    ~DescribeStorageDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取当前媒体总量。
                     * @return MediaCount 当前媒体总量。
                     */
                    uint64_t GetMediaCount() const;

                    /**
                     * 判断参数 MediaCount 是否已赋值
                     * @return MediaCount 是否已赋值
                     */
                    bool MediaCountHasBeenSet() const;

                    /**
                     * 获取当前总存储量，单位是字节。
                     * @return TotalStorage 当前总存储量，单位是字节。
                     */
                    uint64_t GetTotalStorage() const;

                    /**
                     * 判断参数 TotalStorage 是否已赋值
                     * @return TotalStorage 是否已赋值
                     */
                    bool TotalStorageHasBeenSet() const;

                    /**
                     * 获取当前低频存储量，单位是字节。
                     * @return InfrequentStorage 当前低频存储量，单位是字节。
                     */
                    uint64_t GetInfrequentStorage() const;

                    /**
                     * 判断参数 InfrequentStorage 是否已赋值
                     * @return InfrequentStorage 是否已赋值
                     */
                    bool InfrequentStorageHasBeenSet() const;

                    /**
                     * 获取当前标准存储量，单位是字节。
                     * @return StandardStorage 当前标准存储量，单位是字节。
                     */
                    uint64_t GetStandardStorage() const;

                    /**
                     * 判断参数 StandardStorage 是否已赋值
                     * @return StandardStorage 是否已赋值
                     */
                    bool StandardStorageHasBeenSet() const;

                private:

                    /**
                     * 当前媒体总量。
                     */
                    uint64_t m_mediaCount;
                    bool m_mediaCountHasBeenSet;

                    /**
                     * 当前总存储量，单位是字节。
                     */
                    uint64_t m_totalStorage;
                    bool m_totalStorageHasBeenSet;

                    /**
                     * 当前低频存储量，单位是字节。
                     */
                    uint64_t m_infrequentStorage;
                    bool m_infrequentStorageHasBeenSet;

                    /**
                     * 当前标准存储量，单位是字节。
                     */
                    uint64_t m_standardStorage;
                    bool m_standardStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDATARESPONSE_H_