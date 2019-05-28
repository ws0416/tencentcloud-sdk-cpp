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

#include <tencentcloud/cdb/v20170320/model/ModifyAccountPasswordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

ModifyAccountPasswordRequest::ModifyAccountPasswordRequest() :
    m_instanceIdHasBeenSet(false),
    m_newPasswordHasBeenSet(false),
    m_accountsHasBeenSet(false)
{
}

string ModifyAccountPasswordRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_newPasswordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NewPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_newPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_accountsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Accounts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accounts.begin(); itr != m_accounts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAccountPasswordRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAccountPasswordRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAccountPasswordRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyAccountPasswordRequest::GetNewPassword() const
{
    return m_newPassword;
}

void ModifyAccountPasswordRequest::SetNewPassword(const string& _newPassword)
{
    m_newPassword = _newPassword;
    m_newPasswordHasBeenSet = true;
}

bool ModifyAccountPasswordRequest::NewPasswordHasBeenSet() const
{
    return m_newPasswordHasBeenSet;
}

vector<Account> ModifyAccountPasswordRequest::GetAccounts() const
{
    return m_accounts;
}

void ModifyAccountPasswordRequest::SetAccounts(const vector<Account>& _accounts)
{
    m_accounts = _accounts;
    m_accountsHasBeenSet = true;
}

bool ModifyAccountPasswordRequest::AccountsHasBeenSet() const
{
    return m_accountsHasBeenSet;
}


