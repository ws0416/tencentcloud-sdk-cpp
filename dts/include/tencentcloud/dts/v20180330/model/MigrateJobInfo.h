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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEJOBINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/MigrateOption.h>
#include <tencentcloud/dts/v20180330/model/SrcInfo.h>
#include <tencentcloud/dts/v20180330/model/DstInfo.h>
#include <tencentcloud/dts/v20180330/model/MigrateDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 迁移任务详情
                */
                class MigrateJobInfo : public AbstractModel
                {
                public:
                    MigrateJobInfo();
                    ~MigrateJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据迁移任务ID
                     * @return JobId 数据迁移任务ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置数据迁移任务ID
                     * @param JobId 数据迁移任务ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取数据迁移任务名称
                     * @return JobName 数据迁移任务名称
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置数据迁移任务名称
                     * @param JobName 数据迁移任务名称
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取迁移任务配置选项
                     * @return MigrateOption 迁移任务配置选项
                     */
                    MigrateOption GetMigrateOption() const;

                    /**
                     * 设置迁移任务配置选项
                     * @param MigrateOption 迁移任务配置选项
                     */
                    void SetMigrateOption(const MigrateOption& _migrateOption);

                    /**
                     * 判断参数 MigrateOption 是否已赋值
                     * @return MigrateOption 是否已赋值
                     */
                    bool MigrateOptionHasBeenSet() const;

                    /**
                     * 获取源实例数据库类型:mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb
                     * @return SrcDatabaseType 源实例数据库类型:mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置源实例数据库类型:mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb
                     * @param SrcDatabaseType 源实例数据库类型:mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取源实例接入类型，值包括：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     * @return SrcAccessType 源实例接入类型，值包括：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置源实例接入类型，值包括：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     * @param SrcAccessType 源实例接入类型，值包括：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取源实例信息，具体内容跟迁移任务类型相关
                     * @return SrcInfo 源实例信息，具体内容跟迁移任务类型相关
                     */
                    SrcInfo GetSrcInfo() const;

                    /**
                     * 设置源实例信息，具体内容跟迁移任务类型相关
                     * @param SrcInfo 源实例信息，具体内容跟迁移任务类型相关
                     */
                    void SetSrcInfo(const SrcInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取目标实例数据库类型,mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb
                     * @return DstDatabaseType 目标实例数据库类型,mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置目标实例数据库类型,mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb
                     * @param DstDatabaseType 目标实例数据库类型,mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取源实例接入类型，值包括：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     * @return DstAccessType 源实例接入类型，值包括：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置源实例接入类型，值包括：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     * @param DstAccessType 源实例接入类型，值包括：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取目的实例信息
                     * @return DstInfo 目的实例信息
                     */
                    DstInfo GetDstInfo() const;

                    /**
                     * 设置目的实例信息
                     * @param DstInfo 目的实例信息
                     */
                    void SetDstInfo(const DstInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取需要迁移的源数据库表信息，如果需要迁移的是整个实例，该字段为[]
                     * @return DatabaseInfo 需要迁移的源数据库表信息，如果需要迁移的是整个实例，该字段为[]
                     */
                    std::string GetDatabaseInfo() const;

                    /**
                     * 设置需要迁移的源数据库表信息，如果需要迁移的是整个实例，该字段为[]
                     * @param DatabaseInfo 需要迁移的源数据库表信息，如果需要迁移的是整个实例，该字段为[]
                     */
                    void SetDatabaseInfo(const std::string& _databaseInfo);

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     */
                    bool DatabaseInfoHasBeenSet() const;

                    /**
                     * 获取任务创建(提交)时间
                     * @return CreateTime 任务创建(提交)时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建(提交)时间
                     * @param CreateTime 任务创建(提交)时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务开始执行时间
                     * @return StartTime 任务开始执行时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始执行时间
                     * @param StartTime 任务开始执行时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务执行结束时间
                     * @return EndTime 任务执行结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务执行结束时间
                     * @param EndTime 任务执行结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务状态,取值为：1-创建中(Creating),2-创建完成(Created),3-校验中(Checking)4-校验通过(CheckPass),5-校验不通过（CheckNotPass）,6-准备运行(ReadyRun),7-任务运行(Running),8-准备完成（ReadyComplete）,9-任务成功（Success）,10-任务失败（Failed）,11-中止中（Stoping）,12-完成中（Completing）
                     * @return Status 任务状态,取值为：1-创建中(Creating),2-创建完成(Created),3-校验中(Checking)4-校验通过(CheckPass),5-校验不通过（CheckNotPass）,6-准备运行(ReadyRun),7-任务运行(Running),8-准备完成（ReadyComplete）,9-任务成功（Success）,10-任务失败（Failed）,11-中止中（Stoping）,12-完成中（Completing）
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态,取值为：1-创建中(Creating),2-创建完成(Created),3-校验中(Checking)4-校验通过(CheckPass),5-校验不通过（CheckNotPass）,6-准备运行(ReadyRun),7-任务运行(Running),8-准备完成（ReadyComplete）,9-任务成功（Success）,10-任务失败（Failed）,11-中止中（Stoping）,12-完成中（Completing）
                     * @param Status 任务状态,取值为：1-创建中(Creating),2-创建完成(Created),3-校验中(Checking)4-校验通过(CheckPass),5-校验不通过（CheckNotPass）,6-准备运行(ReadyRun),7-任务运行(Running),8-准备完成（ReadyComplete）,9-任务成功（Success）,10-任务失败（Failed）,11-中止中（Stoping）,12-完成中（Completing）
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务详情
                     * @return Detail 任务详情
                     */
                    MigrateDetailInfo GetDetail() const;

                    /**
                     * 设置任务详情
                     * @param Detail 任务详情
                     */
                    void SetDetail(const MigrateDetailInfo& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 数据迁移任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 数据迁移任务名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 迁移任务配置选项
                     */
                    MigrateOption m_migrateOption;
                    bool m_migrateOptionHasBeenSet;

                    /**
                     * 源实例数据库类型:mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * 源实例接入类型，值包括：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * 源实例信息，具体内容跟迁移任务类型相关
                     */
                    SrcInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 目标实例数据库类型,mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * 源实例接入类型，值包括：extranet(外网),cvm(cvm自建实例),dcg(专线接入的实例),vpncloud(云vpn接入的实例),vpnselfbuild(自建vpn接入的实例)，cdb(云上cdb实例)
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * 目的实例信息
                     */
                    DstInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 需要迁移的源数据库表信息，如果需要迁移的是整个实例，该字段为[]
                     */
                    std::string m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                    /**
                     * 任务创建(提交)时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始执行时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务执行结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务状态,取值为：1-创建中(Creating),2-创建完成(Created),3-校验中(Checking)4-校验通过(CheckPass),5-校验不通过（CheckNotPass）,6-准备运行(ReadyRun),7-任务运行(Running),8-准备完成（ReadyComplete）,9-任务成功（Success）,10-任务失败（Failed）,11-中止中（Stoping）,12-完成中（Completing）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务详情
                     */
                    MigrateDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MIGRATEJOBINFO_H_
