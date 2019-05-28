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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCEVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCEVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/RedirectInfo.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 任务实例视图信息
                */
                class TaskInstanceView : public AbstractModel
                {
                public:
                    TaskInstanceView();
                    ~TaskInstanceView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务实例索引
                     * @return TaskInstanceIndex 任务实例索引
                     */
                    int64_t GetTaskInstanceIndex() const;

                    /**
                     * 设置任务实例索引
                     * @param TaskInstanceIndex 任务实例索引
                     */
                    void SetTaskInstanceIndex(const int64_t& _taskInstanceIndex);

                    /**
                     * 判断参数 TaskInstanceIndex 是否已赋值
                     * @return TaskInstanceIndex 是否已赋值
                     */
                    bool TaskInstanceIndexHasBeenSet() const;

                    /**
                     * 获取任务实例状态
                     * @return TaskInstanceState 任务实例状态
                     */
                    std::string GetTaskInstanceState() const;

                    /**
                     * 设置任务实例状态
                     * @param TaskInstanceState 任务实例状态
                     */
                    void SetTaskInstanceState(const std::string& _taskInstanceState);

                    /**
                     * 判断参数 TaskInstanceState 是否已赋值
                     * @return TaskInstanceState 是否已赋值
                     */
                    bool TaskInstanceStateHasBeenSet() const;

                    /**
                     * 获取应用程序执行结束的exit code
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExitCode 应用程序执行结束的exit code
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetExitCode() const;

                    /**
                     * 设置应用程序执行结束的exit code
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExitCode 应用程序执行结束的exit code
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExitCode(const int64_t& _exitCode);

                    /**
                     * 判断参数 ExitCode 是否已赋值
                     * @return ExitCode 是否已赋值
                     */
                    bool ExitCodeHasBeenSet() const;

                    /**
                     * 获取任务实例状态原因，任务实例失败时，会记录失败原因
                     * @return StateReason 任务实例状态原因，任务实例失败时，会记录失败原因
                     */
                    std::string GetStateReason() const;

                    /**
                     * 设置任务实例状态原因，任务实例失败时，会记录失败原因
                     * @param StateReason 任务实例状态原因，任务实例失败时，会记录失败原因
                     */
                    void SetStateReason(const std::string& _stateReason);

                    /**
                     * 判断参数 StateReason 是否已赋值
                     * @return StateReason 是否已赋值
                     */
                    bool StateReasonHasBeenSet() const;

                    /**
                     * 获取任务实例运行时所在计算节点（例如CVM）的InstanceId。任务实例未运行或者完结时，本字段为空。任务实例重试时，本字段会随之变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputeNodeInstanceId 任务实例运行时所在计算节点（例如CVM）的InstanceId。任务实例未运行或者完结时，本字段为空。任务实例重试时，本字段会随之变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetComputeNodeInstanceId() const;

                    /**
                     * 设置任务实例运行时所在计算节点（例如CVM）的InstanceId。任务实例未运行或者完结时，本字段为空。任务实例重试时，本字段会随之变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ComputeNodeInstanceId 任务实例运行时所在计算节点（例如CVM）的InstanceId。任务实例未运行或者完结时，本字段为空。任务实例重试时，本字段会随之变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComputeNodeInstanceId(const std::string& _computeNodeInstanceId);

                    /**
                     * 判断参数 ComputeNodeInstanceId 是否已赋值
                     * @return ComputeNodeInstanceId 是否已赋值
                     */
                    bool ComputeNodeInstanceIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaunchTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLaunchTime() const;

                    /**
                     * 设置启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LaunchTime 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLaunchTime(const std::string& _launchTime);

                    /**
                     * 判断参数 LaunchTime 是否已赋值
                     * @return LaunchTime 是否已赋值
                     */
                    bool LaunchTimeHasBeenSet() const;

                    /**
                     * 获取开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningTime 开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRunningTime() const;

                    /**
                     * 设置开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunningTime 开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunningTime(const std::string& _runningTime);

                    /**
                     * 判断参数 RunningTime 是否已赋值
                     * @return RunningTime 是否已赋值
                     */
                    bool RunningTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取重定向信息
                     * @return RedirectInfo 重定向信息
                     */
                    RedirectInfo GetRedirectInfo() const;

                    /**
                     * 设置重定向信息
                     * @param RedirectInfo 重定向信息
                     */
                    void SetRedirectInfo(const RedirectInfo& _redirectInfo);

                    /**
                     * 判断参数 RedirectInfo 是否已赋值
                     * @return RedirectInfo 是否已赋值
                     */
                    bool RedirectInfoHasBeenSet() const;

                    /**
                     * 获取任务实例状态原因详情，任务实例失败时，会记录失败原因
                     * @return StateDetailedReason 任务实例状态原因详情，任务实例失败时，会记录失败原因
                     */
                    std::string GetStateDetailedReason() const;

                    /**
                     * 设置任务实例状态原因详情，任务实例失败时，会记录失败原因
                     * @param StateDetailedReason 任务实例状态原因详情，任务实例失败时，会记录失败原因
                     */
                    void SetStateDetailedReason(const std::string& _stateDetailedReason);

                    /**
                     * 判断参数 StateDetailedReason 是否已赋值
                     * @return StateDetailedReason 是否已赋值
                     */
                    bool StateDetailedReasonHasBeenSet() const;

                private:

                    /**
                     * 任务实例索引
                     */
                    int64_t m_taskInstanceIndex;
                    bool m_taskInstanceIndexHasBeenSet;

                    /**
                     * 任务实例状态
                     */
                    std::string m_taskInstanceState;
                    bool m_taskInstanceStateHasBeenSet;

                    /**
                     * 应用程序执行结束的exit code
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_exitCode;
                    bool m_exitCodeHasBeenSet;

                    /**
                     * 任务实例状态原因，任务实例失败时，会记录失败原因
                     */
                    std::string m_stateReason;
                    bool m_stateReasonHasBeenSet;

                    /**
                     * 任务实例运行时所在计算节点（例如CVM）的InstanceId。任务实例未运行或者完结时，本字段为空。任务实例重试时，本字段会随之变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computeNodeInstanceId;
                    bool m_computeNodeInstanceIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_launchTime;
                    bool m_launchTimeHasBeenSet;

                    /**
                     * 开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runningTime;
                    bool m_runningTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 重定向信息
                     */
                    RedirectInfo m_redirectInfo;
                    bool m_redirectInfoHasBeenSet;

                    /**
                     * 任务实例状态原因详情，任务实例失败时，会记录失败原因
                     */
                    std::string m_stateDetailedReason;
                    bool m_stateDetailedReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCEVIEW_H_
