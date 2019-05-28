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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEVIPVPORTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEVIPVPORTREQUEST_H_

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
                * ModifyDBInstanceVipVport请求参数结构体
                */
                class ModifyDBInstanceVipVportRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceVipVportRequest();
                    ~ModifyDBInstanceVipVportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * @return InstanceId 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * @param InstanceId 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取目标IP。该参数和DstPort参数，两者必传一个。
                     * @return DstIp 目标IP。该参数和DstPort参数，两者必传一个。
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目标IP。该参数和DstPort参数，两者必传一个。
                     * @param DstIp 目标IP。该参数和DstPort参数，两者必传一个。
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取目标端口，支持范围为：[1024-65535]。该参数和DstIp参数，两者必传一个。
                     * @return DstPort 目标端口，支持范围为：[1024-65535]。该参数和DstIp参数，两者必传一个。
                     */
                    int64_t GetDstPort() const;

                    /**
                     * 设置目标端口，支持范围为：[1024-65535]。该参数和DstIp参数，两者必传一个。
                     * @param DstPort 目标端口，支持范围为：[1024-65535]。该参数和DstIp参数，两者必传一个。
                     */
                    void SetDstPort(const int64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取私有网络统一ID。
                     * @return UniqVpcId 私有网络统一ID。
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络统一ID。
                     * @param UniqVpcId 私有网络统一ID。
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取子网统一ID。
                     * @return UniqSubnetId 子网统一ID。
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置子网统一ID。
                     * @param UniqSubnetId 子网统一ID。
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同，可使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872) 接口获取，其值为输出参数中字段 InstanceId 的值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 目标IP。该参数和DstPort参数，两者必传一个。
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 目标端口，支持范围为：[1024-65535]。该参数和DstIp参数，两者必传一个。
                     */
                    int64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 私有网络统一ID。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 子网统一ID。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEVIPVPORTREQUEST_H_
