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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_APPSCANSET_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_APPSCANSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 扫描后app的信息，包含基本信息和扫描状态信息
                */
                class AppScanSet : public AbstractModel
                {
                public:
                    AppScanSet();
                    ~AppScanSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务唯一标识
                     * @return ItemId 任务唯一标识
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置任务唯一标识
                     * @param ItemId 任务唯一标识
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取app的名称
                     * @return AppName app的名称
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置app的名称
                     * @param AppName app的名称
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取app的包名
                     * @return AppPkgName app的包名
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置app的包名
                     * @param AppPkgName app的包名
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     */
                    bool AppPkgNameHasBeenSet() const;

                    /**
                     * 获取app的版本号
                     * @return AppVersion app的版本号
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置app的版本号
                     * @param AppVersion app的版本号
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取app的md5
                     * @return AppMd5 app的md5
                     */
                    std::string GetAppMd5() const;

                    /**
                     * 设置app的md5
                     * @param AppMd5 app的md5
                     */
                    void SetAppMd5(const std::string& _appMd5);

                    /**
                     * 判断参数 AppMd5 是否已赋值
                     * @return AppMd5 是否已赋值
                     */
                    bool AppMd5HasBeenSet() const;

                    /**
                     * 获取app的大小
                     * @return AppSize app的大小
                     */
                    uint64_t GetAppSize() const;

                    /**
                     * 设置app的大小
                     * @param AppSize app的大小
                     */
                    void SetAppSize(const uint64_t& _appSize);

                    /**
                     * 判断参数 AppSize 是否已赋值
                     * @return AppSize 是否已赋值
                     */
                    bool AppSizeHasBeenSet() const;

                    /**
                     * 获取扫描结果返回码
                     * @return ScanCode 扫描结果返回码
                     */
                    uint64_t GetScanCode() const;

                    /**
                     * 设置扫描结果返回码
                     * @param ScanCode 扫描结果返回码
                     */
                    void SetScanCode(const uint64_t& _scanCode);

                    /**
                     * 判断参数 ScanCode 是否已赋值
                     * @return ScanCode 是否已赋值
                     */
                    bool ScanCodeHasBeenSet() const;

                    /**
                     * 获取任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * @return TaskStatus 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     * @param TaskStatus 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取提交扫描时间
                     * @return TaskTime 提交扫描时间
                     */
                    uint64_t GetTaskTime() const;

                    /**
                     * 设置提交扫描时间
                     * @param TaskTime 提交扫描时间
                     */
                    void SetTaskTime(const uint64_t& _taskTime);

                    /**
                     * 判断参数 TaskTime 是否已赋值
                     * @return TaskTime 是否已赋值
                     */
                    bool TaskTimeHasBeenSet() const;

                    /**
                     * 获取app的图标url
                     * @return AppIconUrl app的图标url
                     */
                    std::string GetAppIconUrl() const;

                    /**
                     * 设置app的图标url
                     * @param AppIconUrl app的图标url
                     */
                    void SetAppIconUrl(const std::string& _appIconUrl);

                    /**
                     * 判断参数 AppIconUrl 是否已赋值
                     * @return AppIconUrl 是否已赋值
                     */
                    bool AppIconUrlHasBeenSet() const;

                    /**
                     * 获取标识唯一该app，主要用于删除
                     * @return AppSid 标识唯一该app，主要用于删除
                     */
                    std::string GetAppSid() const;

                    /**
                     * 设置标识唯一该app，主要用于删除
                     * @param AppSid 标识唯一该app，主要用于删除
                     */
                    void SetAppSid(const std::string& _appSid);

                    /**
                     * 判断参数 AppSid 是否已赋值
                     * @return AppSid 是否已赋值
                     */
                    bool AppSidHasBeenSet() const;

                    /**
                     * 获取安全类型:1-安全软件，2-风险软件，3病毒软件
                     * @return SafeType 安全类型:1-安全软件，2-风险软件，3病毒软件
                     */
                    uint64_t GetSafeType() const;

                    /**
                     * 设置安全类型:1-安全软件，2-风险软件，3病毒软件
                     * @param SafeType 安全类型:1-安全软件，2-风险软件，3病毒软件
                     */
                    void SetSafeType(const uint64_t& _safeType);

                    /**
                     * 判断参数 SafeType 是否已赋值
                     * @return SafeType 是否已赋值
                     */
                    bool SafeTypeHasBeenSet() const;

                    /**
                     * 获取漏洞个数
                     * @return VulCount 漏洞个数
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置漏洞个数
                     * @param VulCount 漏洞个数
                     */
                    void SetVulCount(const uint64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     */
                    bool VulCountHasBeenSet() const;

                private:

                    /**
                     * 任务唯一标识
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * app的名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * app的包名
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                    /**
                     * app的版本号
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * app的md5
                     */
                    std::string m_appMd5;
                    bool m_appMd5HasBeenSet;

                    /**
                     * app的大小
                     */
                    uint64_t m_appSize;
                    bool m_appSizeHasBeenSet;

                    /**
                     * 扫描结果返回码
                     */
                    uint64_t m_scanCode;
                    bool m_scanCodeHasBeenSet;

                    /**
                     * 任务状态: 1-已完成,2-处理中,3-处理出错,4-处理超时
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 提交扫描时间
                     */
                    uint64_t m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * app的图标url
                     */
                    std::string m_appIconUrl;
                    bool m_appIconUrlHasBeenSet;

                    /**
                     * 标识唯一该app，主要用于删除
                     */
                    std::string m_appSid;
                    bool m_appSidHasBeenSet;

                    /**
                     * 安全类型:1-安全软件，2-风险软件，3病毒软件
                     */
                    uint64_t m_safeType;
                    bool m_safeTypeHasBeenSet;

                    /**
                     * 漏洞个数
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_APPSCANSET_H_
