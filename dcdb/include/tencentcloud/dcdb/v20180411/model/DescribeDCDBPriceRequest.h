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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBPRICEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBPrice请求参数结构体
                */
                class DescribeDCDBPriceRequest : public AbstractModel
                {
                public:
                    DescribeDCDBPriceRequest();
                    ~DescribeDCDBPriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取欲新购实例的可用区ID。
                     * @return Zone 欲新购实例的可用区ID。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置欲新购实例的可用区ID。
                     * @param Zone 欲新购实例的可用区ID。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取欲购买实例的数量，目前只支持购买1个实例
                     * @return Count 欲购买实例的数量，目前只支持购买1个实例
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置欲购买实例的数量，目前只支持购买1个实例
                     * @param Count 欲购买实例的数量，目前只支持购买1个实例
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取欲购买的时长，单位：月。
                     * @return Period 欲购买的时长，单位：月。
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置欲购买的时长，单位：月。
                     * @param Period 欲购买的时长，单位：月。
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取单个分片节点个数大小，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @return ShardNodeCount 单个分片节点个数大小，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    int64_t GetShardNodeCount() const;

                    /**
                     * 设置单个分片节点个数大小，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @param ShardNodeCount 单个分片节点个数大小，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    void SetShardNodeCount(const int64_t& _shardNodeCount);

                    /**
                     * 判断参数 ShardNodeCount 是否已赋值
                     * @return ShardNodeCount 是否已赋值
                     */
                    bool ShardNodeCountHasBeenSet() const;

                    /**
                     * 获取分片内存大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @return ShardMemory 分片内存大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    int64_t GetShardMemory() const;

                    /**
                     * 设置分片内存大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @param ShardMemory 分片内存大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    void SetShardMemory(const int64_t& _shardMemory);

                    /**
                     * 判断参数 ShardMemory 是否已赋值
                     * @return ShardMemory 是否已赋值
                     */
                    bool ShardMemoryHasBeenSet() const;

                    /**
                     * 获取分片存储空间大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @return ShardStorage 分片存储空间大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    int64_t GetShardStorage() const;

                    /**
                     * 设置分片存储空间大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     * @param ShardStorage 分片存储空间大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    void SetShardStorage(const int64_t& _shardStorage);

                    /**
                     * 判断参数 ShardStorage 是否已赋值
                     * @return ShardStorage 是否已赋值
                     */
                    bool ShardStorageHasBeenSet() const;

                    /**
                     * 获取实例分片个数，可选范围2-8，可以通过升级实例进行新增分片到最多64个分片。
                     * @return ShardCount 实例分片个数，可选范围2-8，可以通过升级实例进行新增分片到最多64个分片。
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置实例分片个数，可选范围2-8，可以通过升级实例进行新增分片到最多64个分片。
                     * @param ShardCount 实例分片个数，可选范围2-8，可以通过升级实例进行新增分片到最多64个分片。
                     */
                    void SetShardCount(const int64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     */
                    bool ShardCountHasBeenSet() const;

                private:

                    /**
                     * 欲新购实例的可用区ID。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 欲购买实例的数量，目前只支持购买1个实例
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 欲购买的时长，单位：月。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 单个分片节点个数大小，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    int64_t m_shardNodeCount;
                    bool m_shardNodeCountHasBeenSet;

                    /**
                     * 分片内存大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    int64_t m_shardMemory;
                    bool m_shardMemoryHasBeenSet;

                    /**
                     * 分片存储空间大小，单位：GB，可以通过 DescribeShardSpec
 查询实例规格获得。
                     */
                    int64_t m_shardStorage;
                    bool m_shardStorageHasBeenSet;

                    /**
                     * 实例分片个数，可选范围2-8，可以通过升级实例进行新增分片到最多64个分片。
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBPRICEREQUEST_H_
