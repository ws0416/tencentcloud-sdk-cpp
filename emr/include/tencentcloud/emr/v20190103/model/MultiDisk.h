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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISK_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 多云盘参数
                */
                class MultiDisk : public AbstractModel
                {
                public:
                    MultiDisk();
                    ~MultiDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云盘类型("CLOUD_PREMIUM","CLOUD_SSD","CLOUD_BASIC")的一种
                     * @return DiskType 云盘类型("CLOUD_PREMIUM","CLOUD_SSD","CLOUD_BASIC")的一种
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置云盘类型("CLOUD_PREMIUM","CLOUD_SSD","CLOUD_BASIC")的一种
                     * @param DiskType 云盘类型("CLOUD_PREMIUM","CLOUD_SSD","CLOUD_BASIC")的一种
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取云盘大小
                     * @return Volume 云盘大小
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置云盘大小
                     * @param Volume 云盘大小
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * 云盘类型("CLOUD_PREMIUM","CLOUD_SSD","CLOUD_BASIC")的一种
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 云盘大小
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISK_H_
