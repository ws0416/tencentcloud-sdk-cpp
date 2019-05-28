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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCELOG_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 任务实例日志详情。
                */
                class TaskInstanceLog : public AbstractModel
                {
                public:
                    TaskInstanceLog();
                    ~TaskInstanceLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务实例
                     * @return TaskInstanceIndex 任务实例
                     */
                    uint64_t GetTaskInstanceIndex() const;

                    /**
                     * 设置任务实例
                     * @param TaskInstanceIndex 任务实例
                     */
                    void SetTaskInstanceIndex(const uint64_t& _taskInstanceIndex);

                    /**
                     * 判断参数 TaskInstanceIndex 是否已赋值
                     * @return TaskInstanceIndex 是否已赋值
                     */
                    bool TaskInstanceIndexHasBeenSet() const;

                    /**
                     * 获取标准输出日志（Base64编码）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StdoutLog 标准输出日志（Base64编码）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStdoutLog() const;

                    /**
                     * 设置标准输出日志（Base64编码）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StdoutLog 标准输出日志（Base64编码）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStdoutLog(const std::string& _stdoutLog);

                    /**
                     * 判断参数 StdoutLog 是否已赋值
                     * @return StdoutLog 是否已赋值
                     */
                    bool StdoutLogHasBeenSet() const;

                    /**
                     * 获取标准错误日志（Base64编码）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StderrLog 标准错误日志（Base64编码）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStderrLog() const;

                    /**
                     * 设置标准错误日志（Base64编码）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StderrLog 标准错误日志（Base64编码）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStderrLog(const std::string& _stderrLog);

                    /**
                     * 判断参数 StderrLog 是否已赋值
                     * @return StderrLog 是否已赋值
                     */
                    bool StderrLogHasBeenSet() const;

                    /**
                     * 获取标准输出重定向路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StdoutRedirectPath 标准输出重定向路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStdoutRedirectPath() const;

                    /**
                     * 设置标准输出重定向路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StdoutRedirectPath 标准输出重定向路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStdoutRedirectPath(const std::string& _stdoutRedirectPath);

                    /**
                     * 判断参数 StdoutRedirectPath 是否已赋值
                     * @return StdoutRedirectPath 是否已赋值
                     */
                    bool StdoutRedirectPathHasBeenSet() const;

                    /**
                     * 获取标准错误重定向路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StderrRedirectPath 标准错误重定向路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStderrRedirectPath() const;

                    /**
                     * 设置标准错误重定向路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StderrRedirectPath 标准错误重定向路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStderrRedirectPath(const std::string& _stderrRedirectPath);

                    /**
                     * 判断参数 StderrRedirectPath 是否已赋值
                     * @return StderrRedirectPath 是否已赋值
                     */
                    bool StderrRedirectPathHasBeenSet() const;

                    /**
                     * 获取标准输出重定向文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StdoutRedirectFileName 标准输出重定向文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStdoutRedirectFileName() const;

                    /**
                     * 设置标准输出重定向文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StdoutRedirectFileName 标准输出重定向文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStdoutRedirectFileName(const std::string& _stdoutRedirectFileName);

                    /**
                     * 判断参数 StdoutRedirectFileName 是否已赋值
                     * @return StdoutRedirectFileName 是否已赋值
                     */
                    bool StdoutRedirectFileNameHasBeenSet() const;

                    /**
                     * 获取标准错误重定向文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StderrRedirectFileName 标准错误重定向文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStderrRedirectFileName() const;

                    /**
                     * 设置标准错误重定向文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StderrRedirectFileName 标准错误重定向文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStderrRedirectFileName(const std::string& _stderrRedirectFileName);

                    /**
                     * 判断参数 StderrRedirectFileName 是否已赋值
                     * @return StderrRedirectFileName 是否已赋值
                     */
                    bool StderrRedirectFileNameHasBeenSet() const;

                private:

                    /**
                     * 任务实例
                     */
                    uint64_t m_taskInstanceIndex;
                    bool m_taskInstanceIndexHasBeenSet;

                    /**
                     * 标准输出日志（Base64编码）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stdoutLog;
                    bool m_stdoutLogHasBeenSet;

                    /**
                     * 标准错误日志（Base64编码）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stderrLog;
                    bool m_stderrLogHasBeenSet;

                    /**
                     * 标准输出重定向路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stdoutRedirectPath;
                    bool m_stdoutRedirectPathHasBeenSet;

                    /**
                     * 标准错误重定向路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stderrRedirectPath;
                    bool m_stderrRedirectPathHasBeenSet;

                    /**
                     * 标准输出重定向文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stdoutRedirectFileName;
                    bool m_stdoutRedirectFileNameHasBeenSet;

                    /**
                     * 标准错误重定向文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stderrRedirectFileName;
                    bool m_stderrRedirectFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASKINSTANCELOG_H_
