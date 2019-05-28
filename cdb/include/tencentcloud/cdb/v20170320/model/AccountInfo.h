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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ACCOUNTINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 账号详细信息
                */
                class AccountInfo : public AbstractModel
                {
                public:
                    AccountInfo();
                    ~AccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号备注信息
                     * @return Notes 账号备注信息
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置账号备注信息
                     * @param Notes 账号备注信息
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取账号的域名
                     * @return Host 账号的域名
                     */
                    std::string GetHost() const;

                    /**
                     * 设置账号的域名
                     * @param Host 账号的域名
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取账号的名称
                     * @return User 账号的名称
                     */
                    std::string GetUser() const;

                    /**
                     * 设置账号的名称
                     * @param User 账号的名称
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取账号信息修改时间
                     * @return ModifyTime 账号信息修改时间
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置账号信息修改时间
                     * @param ModifyTime 账号信息修改时间
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取修改密码的时间
                     * @return ModifyPasswordTime 修改密码的时间
                     */
                    std::string GetModifyPasswordTime() const;

                    /**
                     * 设置修改密码的时间
                     * @param ModifyPasswordTime 修改密码的时间
                     */
                    void SetModifyPasswordTime(const std::string& _modifyPasswordTime);

                    /**
                     * 判断参数 ModifyPasswordTime 是否已赋值
                     * @return ModifyPasswordTime 是否已赋值
                     */
                    bool ModifyPasswordTimeHasBeenSet() const;

                    /**
                     * 获取账号的创建时间
                     * @return CreateTime 账号的创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置账号的创建时间
                     * @param CreateTime 账号的创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 账号备注信息
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * 账号的域名
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 账号的名称
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 账号信息修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 修改密码的时间
                     */
                    std::string m_modifyPasswordTime;
                    bool m_modifyPasswordTimeHasBeenSet;

                    /**
                     * 账号的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ACCOUNTINFO_H_
