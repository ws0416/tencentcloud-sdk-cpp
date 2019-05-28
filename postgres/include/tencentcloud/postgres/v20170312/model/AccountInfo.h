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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 账户信息
                */
                class AccountInfo : public AbstractModel
                {
                public:
                    AccountInfo();
                    ~AccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID，形如postgres-lnp6j617
                     * @return DBInstanceId 实例ID，形如postgres-lnp6j617
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-lnp6j617
                     * @param DBInstanceId 实例ID，形如postgres-lnp6j617
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取帐号
                     * @return UserName 帐号
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置帐号
                     * @param UserName 帐号
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取帐号备注
                     * @return Remark 帐号备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置帐号备注
                     * @param Remark 帐号备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取帐号状态。 1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     * @return Status 帐号状态。 1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置帐号状态。 1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     * @param Status 帐号状态。 1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取帐号创建时间
                     * @return CreateTime 帐号创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置帐号创建时间
                     * @param CreateTime 帐号创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取帐号最后一次更新时间
                     * @return UpdateTime 帐号最后一次更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置帐号最后一次更新时间
                     * @param UpdateTime 帐号最后一次更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如postgres-lnp6j617
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 帐号
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 帐号备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 帐号状态。 1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 帐号创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 帐号最后一次更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_
