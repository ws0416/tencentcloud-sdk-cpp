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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_DELETEFUNCTIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_DELETEFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DeleteFunction请求参数结构体
                */
                class DeleteFunctionRequest : public AbstractModel
                {
                public:
                    DeleteFunctionRequest();
                    ~DeleteFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的函数名称
                     * @return FunctionName 要删除的函数名称
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置要删除的函数名称
                     * @param FunctionName 要删除的函数名称
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                private:

                    /**
                     * 要删除的函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_DELETEFUNCTIONREQUEST_H_
