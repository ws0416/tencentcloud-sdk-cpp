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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_JOBVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_JOBVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Placement.h>
#include <tencentcloud/batch/v20170312/model/TaskMetrics.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 作业信息
                */
                class JobView : public AbstractModel
                {
                public:
                    JobView();
                    ~JobView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作业ID
                     * @return JobId 作业ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID
                     * @param JobId 作业ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取作业名称
                     * @return JobName 作业名称
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置作业名称
                     * @param JobName 作业名称
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取作业状态
                     * @return JobState 作业状态
                     */
                    std::string GetJobState() const;

                    /**
                     * 设置作业状态
                     * @param JobState 作业状态
                     */
                    void SetJobState(const std::string& _jobState);

                    /**
                     * 判断参数 JobState 是否已赋值
                     * @return JobState 是否已赋值
                     */
                    bool JobStateHasBeenSet() const;

                    /**
                     * 获取作业优先级
                     * @return Priority 作业优先级
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置作业优先级
                     * @param Priority 作业优先级
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Placement 位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Placement 位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

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
                     * 获取任务统计指标
                     * @return TaskMetrics 任务统计指标
                     */
                    TaskMetrics GetTaskMetrics() const;

                    /**
                     * 设置任务统计指标
                     * @param TaskMetrics 任务统计指标
                     */
                    void SetTaskMetrics(const TaskMetrics& _taskMetrics);

                    /**
                     * 判断参数 TaskMetrics 是否已赋值
                     * @return TaskMetrics 是否已赋值
                     */
                    bool TaskMetricsHasBeenSet() const;

                private:

                    /**
                     * 作业ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 作业名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 作业状态
                     */
                    std::string m_jobState;
                    bool m_jobStateHasBeenSet;

                    /**
                     * 作业优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务统计指标
                     */
                    TaskMetrics m_taskMetrics;
                    bool m_taskMetricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_JOBVIEW_H_
