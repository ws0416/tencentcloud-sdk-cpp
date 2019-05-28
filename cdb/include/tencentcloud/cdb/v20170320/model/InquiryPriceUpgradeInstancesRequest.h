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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INQUIRYPRICEUPGRADEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INQUIRYPRICEUPGRADEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * InquiryPriceUpgradeInstances请求参数结构体
                */
                class InquiryPriceUpgradeInstancesRequest : public AbstractModel
                {
                public:
                    InquiryPriceUpgradeInstancesRequest();
                    ~InquiryPriceUpgradeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cdb-c1nl9rpv或者cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值
                     * @return InstanceId 实例ID，格式如：cdb-c1nl9rpv或者cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cdb-c1nl9rpv或者cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值
                     * @param InstanceId 实例ID，格式如：cdb-c1nl9rpv或者cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取升级后的内存大小，单位：MB，为保证传入 Memory 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的内存规格
                     * @return Memory 升级后的内存大小，单位：MB，为保证传入 Memory 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的内存规格
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置升级后的内存大小，单位：MB，为保证传入 Memory 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的内存规格
                     * @param Memory 升级后的内存大小，单位：MB，为保证传入 Memory 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的内存规格
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取升级后的硬盘大小，单位：GB，为保证传入 Volume 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的硬盘范围
                     * @return Volume 升级后的硬盘大小，单位：GB，为保证传入 Volume 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的硬盘范围
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置升级后的硬盘大小，单位：GB，为保证传入 Volume 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的硬盘范围
                     * @param Volume 升级后的硬盘大小，单位：GB，为保证传入 Volume 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的硬盘范围
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取升级后的核心数目，单位：核，为保证传入 CPU 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值
                     * @return Cpu 升级后的核心数目，单位：核，为保证传入 CPU 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置升级后的核心数目，单位：核，为保证传入 CPU 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值
                     * @param Cpu 升级后的核心数目，单位：核，为保证传入 CPU 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取数据复制方式，支持值包括：0-异步复制，1-半同步复制，2-强同步复制，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义
                     * @return ProtectMode 数据复制方式，支持值包括：0-异步复制，1-半同步复制，2-强同步复制，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义
                     */
                    uint64_t GetProtectMode() const;

                    /**
                     * 设置数据复制方式，支持值包括：0-异步复制，1-半同步复制，2-强同步复制，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义
                     * @param ProtectMode 数据复制方式，支持值包括：0-异步复制，1-半同步复制，2-强同步复制，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义
                     */
                    void SetProtectMode(const uint64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     */
                    bool ProtectModeHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cdb-c1nl9rpv或者cdbro-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 升级后的内存大小，单位：MB，为保证传入 Memory 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的内存规格
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 升级后的硬盘大小，单位：GB，为保证传入 Volume 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的硬盘范围
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 升级后的核心数目，单位：核，为保证传入 CPU 值有效，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/product/236/17229)接口获取可升级的核心数目，当未指定该值时，将按照 Memory 大小补全一个默认值
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 数据复制方式，支持值包括：0-异步复制，1-半同步复制，2-强同步复制，升级主实例时可指定该参数，升级只读实例或者灾备实例时指定该参数无意义
                     */
                    uint64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INQUIRYPRICEUPGRADEINSTANCESREQUEST_H_
