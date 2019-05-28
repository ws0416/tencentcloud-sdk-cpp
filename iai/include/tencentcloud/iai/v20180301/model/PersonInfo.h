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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_PERSONINFO_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_PERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 返回的人员信息
                */
                class PersonInfo : public AbstractModel
                {
                public:
                    PersonInfo();
                    ~PersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员名称
                     * @return PersonName 人员名称
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置人员名称
                     * @param PersonName 人员名称
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取人员Id
                     * @return PersonId 人员Id
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员Id
                     * @param PersonId 人员Id
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取人员性别
                     * @return Gender 人员性别
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置人员性别
                     * @param Gender 人员性别
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取人员描述字段内容
                     * @return PersonExDescriptions 人员描述字段内容
                     */
                    std::vector<std::string> GetPersonExDescriptions() const;

                    /**
                     * 设置人员描述字段内容
                     * @param PersonExDescriptions 人员描述字段内容
                     */
                    void SetPersonExDescriptions(const std::vector<std::string>& _personExDescriptions);

                    /**
                     * 判断参数 PersonExDescriptions 是否已赋值
                     * @return PersonExDescriptions 是否已赋值
                     */
                    bool PersonExDescriptionsHasBeenSet() const;

                    /**
                     * 获取包含的人脸照片列表
                     * @return FaceIds 包含的人脸照片列表
                     */
                    std::vector<std::string> GetFaceIds() const;

                    /**
                     * 设置包含的人脸照片列表
                     * @param FaceIds 包含的人脸照片列表
                     */
                    void SetFaceIds(const std::vector<std::string>& _faceIds);

                    /**
                     * 判断参数 FaceIds 是否已赋值
                     * @return FaceIds 是否已赋值
                     */
                    bool FaceIdsHasBeenSet() const;

                private:

                    /**
                     * 人员名称
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * 人员Id
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人员性别
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 人员描述字段内容
                     */
                    std::vector<std::string> m_personExDescriptions;
                    bool m_personExDescriptionsHasBeenSet;

                    /**
                     * 包含的人脸照片列表
                     */
                    std::vector<std::string> m_faceIds;
                    bool m_faceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_PERSONINFO_H_
