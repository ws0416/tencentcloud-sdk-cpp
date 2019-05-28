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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * AddUser请求参数结构体
                */
                class AddUserRequest : public AbstractModel
                {
                public:
                    AddUserRequest();
                    ~AddUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子用户用户名
                     * @return Name 子用户用户名
                     */
                    std::string GetName() const;

                    /**
                     * 设置子用户用户名
                     * @param Name 子用户用户名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取子用户备注
                     * @return Remark 子用户备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置子用户备注
                     * @param Remark 子用户备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取子用户是否可以登录控制台
                     * @return ConsoleLogin 子用户是否可以登录控制台
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 设置子用户是否可以登录控制台
                     * @param ConsoleLogin 子用户是否可以登录控制台
                     */
                    void SetConsoleLogin(const uint64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取是否生成子用户密钥
                     * @return UseApi 是否生成子用户密钥
                     */
                    uint64_t GetUseApi() const;

                    /**
                     * 设置是否生成子用户密钥
                     * @param UseApi 是否生成子用户密钥
                     */
                    void SetUseApi(const uint64_t& _useApi);

                    /**
                     * 判断参数 UseApi 是否已赋值
                     * @return UseApi 是否已赋值
                     */
                    bool UseApiHasBeenSet() const;

                    /**
                     * 获取子用户控制台登录密码，只有可以登录控制台时才有效，如果传空并且上面指定允许登录控制台，则自动生成随机密码
                     * @return Password 子用户控制台登录密码，只有可以登录控制台时才有效，如果传空并且上面指定允许登录控制台，则自动生成随机密码
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置子用户控制台登录密码，只有可以登录控制台时才有效，如果传空并且上面指定允许登录控制台，则自动生成随机密码
                     * @param Password 子用户控制台登录密码，只有可以登录控制台时才有效，如果传空并且上面指定允许登录控制台，则自动生成随机密码
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取子用户是否要在下次登录时重置密码
                     * @return NeedResetPassword 子用户是否要在下次登录时重置密码
                     */
                    uint64_t GetNeedResetPassword() const;

                    /**
                     * 设置子用户是否要在下次登录时重置密码
                     * @param NeedResetPassword 子用户是否要在下次登录时重置密码
                     */
                    void SetNeedResetPassword(const uint64_t& _needResetPassword);

                    /**
                     * 判断参数 NeedResetPassword 是否已赋值
                     * @return NeedResetPassword 是否已赋值
                     */
                    bool NeedResetPasswordHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return PhoneNum 手机号
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置手机号
                     * @param PhoneNum 手机号
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取区号
                     * @return CountryCode 区号
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置区号
                     * @param CountryCode 区号
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Email 邮箱
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param Email 邮箱
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * 子用户用户名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 子用户备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 子用户是否可以登录控制台
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * 是否生成子用户密钥
                     */
                    uint64_t m_useApi;
                    bool m_useApiHasBeenSet;

                    /**
                     * 子用户控制台登录密码，只有可以登录控制台时才有效，如果传空并且上面指定允许登录控制台，则自动生成随机密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 子用户是否要在下次登录时重置密码
                     */
                    uint64_t m_needResetPassword;
                    bool m_needResetPasswordHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 区号
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERREQUEST_H_
