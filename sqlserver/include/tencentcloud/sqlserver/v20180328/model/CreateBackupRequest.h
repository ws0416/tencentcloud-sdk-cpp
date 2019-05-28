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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBACKUPREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateBackup请求参数结构体
                */
                class CreateBackupRequest : public AbstractModel
                {
                public:
                    CreateBackupRequest();
                    ~CreateBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份策略(0-实例备份 1-多库备份)
                     * @return Strategy 备份策略(0-实例备份 1-多库备份)
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置备份策略(0-实例备份 1-多库备份)
                     * @param Strategy 备份策略(0-实例备份 1-多库备份)
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取需要备份库名的列表(多库备份才填写)
                     * @return DBNames 需要备份库名的列表(多库备份才填写)
                     */
                    std::vector<std::string> GetDBNames() const;

                    /**
                     * 设置需要备份库名的列表(多库备份才填写)
                     * @param DBNames 需要备份库名的列表(多库备份才填写)
                     */
                    void SetDBNames(const std::vector<std::string>& _dBNames);

                    /**
                     * 判断参数 DBNames 是否已赋值
                     * @return DBNames 是否已赋值
                     */
                    bool DBNamesHasBeenSet() const;

                    /**
                     * 获取实例ID，形如mssql-i1z41iwd
                     * @return InstanceId 实例ID，形如mssql-i1z41iwd
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-i1z41iwd
                     * @param InstanceId 实例ID，形如mssql-i1z41iwd
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 备份策略(0-实例备份 1-多库备份)
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 需要备份库名的列表(多库备份才填写)
                     */
                    std::vector<std::string> m_dBNames;
                    bool m_dBNamesHasBeenSet;

                    /**
                     * 实例ID，形如mssql-i1z41iwd
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBACKUPREQUEST_H_
