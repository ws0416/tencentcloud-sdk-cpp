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

#ifndef TENCENTCLOUD_TCB_V20180608_TCBCLIENT_H_
#define TENCENTCLOUD_TCB_V20180608_TCBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcb/v20180608/model/DescribeDatabaseACLRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeDatabaseACLResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvsRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvsResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyDatabaseACLRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyDatabaseACLResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEnvResponse.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            class TcbClient : public AbstractClient
            {
            public:
                TcbClient(const Credential &credential, const std::string &region);
                TcbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DescribeDatabaseACLResponse> DescribeDatabaseACLOutcome;
                typedef std::future<DescribeDatabaseACLOutcome> DescribeDatabaseACLOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeDatabaseACLRequest&, DescribeDatabaseACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseACLAsyncHandler;
                typedef Outcome<Error, Model::DescribeEnvsResponse> DescribeEnvsOutcome;
                typedef std::future<DescribeEnvsOutcome> DescribeEnvsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvsRequest&, DescribeEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvsAsyncHandler;
                typedef Outcome<Error, Model::ModifyDatabaseACLResponse> ModifyDatabaseACLOutcome;
                typedef std::future<ModifyDatabaseACLOutcome> ModifyDatabaseACLOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyDatabaseACLRequest&, ModifyDatabaseACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseACLAsyncHandler;
                typedef Outcome<Error, Model::ModifyEnvResponse> ModifyEnvOutcome;
                typedef std::future<ModifyEnvOutcome> ModifyEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyEnvRequest&, ModifyEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnvAsyncHandler;



                /**
                 *获取数据库权限
                 * @param req DescribeDatabaseACLRequest
                 * @return DescribeDatabaseACLOutcome
                 */
                DescribeDatabaseACLOutcome DescribeDatabaseACL(const Model::DescribeDatabaseACLRequest &request);
                void DescribeDatabaseACLAsync(const Model::DescribeDatabaseACLRequest& request, const DescribeDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseACLOutcomeCallable DescribeDatabaseACLCallable(const Model::DescribeDatabaseACLRequest& request);

                /**
                 *获取环境列表，含环境下的各个资源信息。尤其是各资源的唯一标识，是请求各资源的关键参数
                 * @param req DescribeEnvsRequest
                 * @return DescribeEnvsOutcome
                 */
                DescribeEnvsOutcome DescribeEnvs(const Model::DescribeEnvsRequest &request);
                void DescribeEnvsAsync(const Model::DescribeEnvsRequest& request, const DescribeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvsOutcomeCallable DescribeEnvsCallable(const Model::DescribeEnvsRequest& request);

                /**
                 *修改数据库权限
                 * @param req ModifyDatabaseACLRequest
                 * @return ModifyDatabaseACLOutcome
                 */
                ModifyDatabaseACLOutcome ModifyDatabaseACL(const Model::ModifyDatabaseACLRequest &request);
                void ModifyDatabaseACLAsync(const Model::ModifyDatabaseACLRequest& request, const ModifyDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseACLOutcomeCallable ModifyDatabaseACLCallable(const Model::ModifyDatabaseACLRequest& request);

                /**
                 *更新环境信息
                 * @param req ModifyEnvRequest
                 * @return ModifyEnvOutcome
                 */
                ModifyEnvOutcome ModifyEnv(const Model::ModifyEnvRequest &request);
                void ModifyEnvAsync(const Model::ModifyEnvRequest& request, const ModifyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnvOutcomeCallable ModifyEnvCallable(const Model::ModifyEnvRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_TCBCLIENT_H_
