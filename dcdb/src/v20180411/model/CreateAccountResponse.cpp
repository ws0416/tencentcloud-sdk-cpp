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

#include <tencentcloud/dcdb/v20180411/model/CreateAccountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace rapidjson;
using namespace std;

CreateAccountResponse::CreateAccountResponse() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_readOnlyHasBeenSet(false)
{
}

CoreInternalOutcome CreateAccountResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("UserName") && !rsp["UserName"].IsNull())
    {
        if (!rsp["UserName"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(rsp["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (rsp.HasMember("Host") && !rsp["Host"].IsNull())
    {
        if (!rsp["Host"].IsString())
        {
            return CoreInternalOutcome(Error("response `Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(rsp["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (rsp.HasMember("ReadOnly") && !rsp["ReadOnly"].IsNull())
    {
        if (!rsp["ReadOnly"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ReadOnly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = rsp["ReadOnly"].GetInt64();
        m_readOnlyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateAccountResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool CreateAccountResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateAccountResponse::GetUserName() const
{
    return m_userName;
}

bool CreateAccountResponse::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateAccountResponse::GetHost() const
{
    return m_host;
}

bool CreateAccountResponse::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t CreateAccountResponse::GetReadOnly() const
{
    return m_readOnly;
}

bool CreateAccountResponse::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}


