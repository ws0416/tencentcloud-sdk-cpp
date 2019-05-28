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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PROJECTENTRYEX_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PROJECTENTRYEX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 项目详情
                */
                class ProjectEntryEx : public AbstractModel
                {
                public:
                    ProjectEntryEx();
                    ~ProjectEntryEx() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param ProjectName 项目名称
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目描述
                     * @return ProjectDesc 项目描述
                     */
                    std::string GetProjectDesc() const;

                    /**
                     * 设置项目描述
                     * @param ProjectDesc 项目描述
                     */
                    void SetProjectDesc(const std::string& _projectDesc);

                    /**
                     * 判断参数 ProjectDesc 是否已赋值
                     * @return ProjectDesc 是否已赋值
                     */
                    bool ProjectDescHasBeenSet() const;

                    /**
                     * 获取项目创建时间，unix时间戳
                     * @return CreateTime 项目创建时间，unix时间戳
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置项目创建时间，unix时间戳
                     * @param CreateTime 项目创建时间，unix时间戳
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取项目更新时间，unix时间戳
                     * @return UpdateTime 项目更新时间，unix时间戳
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置项目更新时间，unix时间戳
                     * @param UpdateTime 项目更新时间，unix时间戳
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取产品数量
                     * @return ProductCount 产品数量
                     */
                    uint64_t GetProductCount() const;

                    /**
                     * 设置产品数量
                     * @param ProductCount 产品数量
                     */
                    void SetProductCount(const uint64_t& _productCount);

                    /**
                     * 判断参数 ProductCount 是否已赋值
                     * @return ProductCount 是否已赋值
                     */
                    bool ProductCountHasBeenSet() const;

                    /**
                     * 获取NativeApp数量
                     * @return NativeAppCount NativeApp数量
                     */
                    uint64_t GetNativeAppCount() const;

                    /**
                     * 设置NativeApp数量
                     * @param NativeAppCount NativeApp数量
                     */
                    void SetNativeAppCount(const uint64_t& _nativeAppCount);

                    /**
                     * 判断参数 NativeAppCount 是否已赋值
                     * @return NativeAppCount 是否已赋值
                     */
                    bool NativeAppCountHasBeenSet() const;

                    /**
                     * 获取WebApp数量
                     * @return WebAppCount WebApp数量
                     */
                    uint64_t GetWebAppCount() const;

                    /**
                     * 设置WebApp数量
                     * @param WebAppCount WebApp数量
                     */
                    void SetWebAppCount(const uint64_t& _webAppCount);

                    /**
                     * 判断参数 WebAppCount 是否已赋值
                     * @return WebAppCount 是否已赋值
                     */
                    bool WebAppCountHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目描述
                     */
                    std::string m_projectDesc;
                    bool m_projectDescHasBeenSet;

                    /**
                     * 项目创建时间，unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目更新时间，unix时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 产品数量
                     */
                    uint64_t m_productCount;
                    bool m_productCountHasBeenSet;

                    /**
                     * NativeApp数量
                     */
                    uint64_t m_nativeAppCount;
                    bool m_nativeAppCountHasBeenSet;

                    /**
                     * WebApp数量
                     */
                    uint64_t m_webAppCount;
                    bool m_webAppCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PROJECTENTRYEX_H_
