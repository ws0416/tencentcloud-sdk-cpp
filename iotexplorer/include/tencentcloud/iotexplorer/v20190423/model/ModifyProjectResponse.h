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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYPROJECTRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/ProjectEntry.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ModifyProject返回参数结构体
                */
                class ModifyProjectResponse : public AbstractModel
                {
                public:
                    ModifyProjectResponse();
                    ~ModifyProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取项目详情
                     * @return Project 项目详情
                     */
                    ProjectEntry GetProject() const;

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     */
                    bool ProjectHasBeenSet() const;

                private:

                    /**
                     * 项目详情
                     */
                    ProjectEntry m_project;
                    bool m_projectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYPROJECTRESPONSE_H_
