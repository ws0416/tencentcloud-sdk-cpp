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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHAVIPRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHAVIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/HaVip.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateHaVip返回参数结构体
                */
                class CreateHaVipResponse : public AbstractModel
                {
                public:
                    CreateHaVipResponse();
                    ~CreateHaVipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取`HAVIP`对象。
                     * @return HaVip `HAVIP`对象。
                     */
                    HaVip GetHaVip() const;

                    /**
                     * 判断参数 HaVip 是否已赋值
                     * @return HaVip 是否已赋值
                     */
                    bool HaVipHasBeenSet() const;

                private:

                    /**
                     * `HAVIP`对象。
                     */
                    HaVip m_haVip;
                    bool m_haVipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHAVIPRESPONSE_H_
