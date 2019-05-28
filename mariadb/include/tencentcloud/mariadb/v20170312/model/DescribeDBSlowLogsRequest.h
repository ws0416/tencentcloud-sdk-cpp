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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBSlowLogs请求参数结构体
                */
                class DescribeDBSlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeDBSlowLogsRequest();
                    ~DescribeDBSlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：tdsql-ow728lmc。
                     * @return InstanceId 实例 ID，形如：tdsql-ow728lmc。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：tdsql-ow728lmc。
                     * @param InstanceId 实例 ID，形如：tdsql-ow728lmc。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取从结果的第几条数据开始返回
                     * @return Offset 从结果的第几条数据开始返回
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置从结果的第几条数据开始返回
                     * @param Offset 从结果的第几条数据开始返回
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回的结果条数
                     * @return Limit 返回的结果条数
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回的结果条数
                     * @param Limit 返回的结果条数
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询的起始时间，形如2016-07-23 14:55:20
                     * @return StartTime 查询的起始时间，形如2016-07-23 14:55:20
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询的起始时间，形如2016-07-23 14:55:20
                     * @param StartTime 查询的起始时间，形如2016-07-23 14:55:20
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询的结束时间，形如2016-08-22 14:55:20
                     * @return EndTime 查询的结束时间，形如2016-08-22 14:55:20
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询的结束时间，形如2016-08-22 14:55:20
                     * @param EndTime 查询的结束时间，形如2016-08-22 14:55:20
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取要查询的具体数据库名称
                     * @return Db 要查询的具体数据库名称
                     */
                    std::string GetDb() const;

                    /**
                     * 设置要查询的具体数据库名称
                     * @param Db 要查询的具体数据库名称
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取排序指标，取值为query_time_sum或者query_count
                     * @return OrderBy 排序指标，取值为query_time_sum或者query_count
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序指标，取值为query_time_sum或者query_count
                     * @param OrderBy 排序指标，取值为query_time_sum或者query_count
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序类型，desc或者asc
                     * @return OrderByType 排序类型，desc或者asc
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序类型，desc或者asc
                     * @param OrderByType 排序类型，desc或者asc
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取是否查询从机的慢查询，0-主机; 1-从机
                     * @return Slave 是否查询从机的慢查询，0-主机; 1-从机
                     */
                    int64_t GetSlave() const;

                    /**
                     * 设置是否查询从机的慢查询，0-主机; 1-从机
                     * @param Slave 是否查询从机的慢查询，0-主机; 1-从机
                     */
                    void SetSlave(const int64_t& _slave);

                    /**
                     * 判断参数 Slave 是否已赋值
                     * @return Slave 是否已赋值
                     */
                    bool SlaveHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：tdsql-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 从结果的第几条数据开始返回
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回的结果条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询的起始时间，形如2016-07-23 14:55:20
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询的结束时间，形如2016-08-22 14:55:20
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 要查询的具体数据库名称
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 排序指标，取值为query_time_sum或者query_count
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型，desc或者asc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 是否查询从机的慢查询，0-主机; 1-从机
                     */
                    int64_t m_slave;
                    bool m_slaveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_
