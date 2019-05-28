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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_CREATETASKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_CREATETASKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Task.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateTaskTemplate请求参数结构体
                */
                class CreateTaskTemplateRequest : public AbstractModel
                {
                public:
                    CreateTaskTemplateRequest();
                    ~CreateTaskTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务模板名称
                     * @return TaskTemplateName 任务模板名称
                     */
                    std::string GetTaskTemplateName() const;

                    /**
                     * 设置任务模板名称
                     * @param TaskTemplateName 任务模板名称
                     */
                    void SetTaskTemplateName(const std::string& _taskTemplateName);

                    /**
                     * 判断参数 TaskTemplateName 是否已赋值
                     * @return TaskTemplateName 是否已赋值
                     */
                    bool TaskTemplateNameHasBeenSet() const;

                    /**
                     * 获取任务模板内容，参数要求与任务一致
                     * @return TaskTemplateInfo 任务模板内容，参数要求与任务一致
                     */
                    Task GetTaskTemplateInfo() const;

                    /**
                     * 设置任务模板内容，参数要求与任务一致
                     * @param TaskTemplateInfo 任务模板内容，参数要求与任务一致
                     */
                    void SetTaskTemplateInfo(const Task& _taskTemplateInfo);

                    /**
                     * 判断参数 TaskTemplateInfo 是否已赋值
                     * @return TaskTemplateInfo 是否已赋值
                     */
                    bool TaskTemplateInfoHasBeenSet() const;

                    /**
                     * 获取任务模板描述
                     * @return TaskTemplateDescription 任务模板描述
                     */
                    std::string GetTaskTemplateDescription() const;

                    /**
                     * 设置任务模板描述
                     * @param TaskTemplateDescription 任务模板描述
                     */
                    void SetTaskTemplateDescription(const std::string& _taskTemplateDescription);

                    /**
                     * 判断参数 TaskTemplateDescription 是否已赋值
                     * @return TaskTemplateDescription 是否已赋值
                     */
                    bool TaskTemplateDescriptionHasBeenSet() const;

                private:

                    /**
                     * 任务模板名称
                     */
                    std::string m_taskTemplateName;
                    bool m_taskTemplateNameHasBeenSet;

                    /**
                     * 任务模板内容，参数要求与任务一致
                     */
                    Task m_taskTemplateInfo;
                    bool m_taskTemplateInfoHasBeenSet;

                    /**
                     * 任务模板描述
                     */
                    std::string m_taskTemplateDescription;
                    bool m_taskTemplateDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_CREATETASKTEMPLATEREQUEST_H_
