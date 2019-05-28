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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * UpgradeDBInstanceEngineVersion返回参数结构体
                */
                class UpgradeDBInstanceEngineVersionResponse : public AbstractModel
                {
                public:
                    UpgradeDBInstanceEngineVersionResponse();
                    ~UpgradeDBInstanceEngineVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取异步任务ID，可使用[查询异步任务的执行结果](https://cloud.tencent.com/document/api/236/20410)获取其执行情况。
                     * @return AsyncRequestId 异步任务ID，可使用[查询异步任务的执行结果](https://cloud.tencent.com/document/api/236/20410)获取其执行情况。
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * 异步任务ID，可使用[查询异步任务的执行结果](https://cloud.tencent.com/document/api/236/20410)获取其执行情况。
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONRESPONSE_H_
