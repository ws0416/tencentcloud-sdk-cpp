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

#include <tencentcloud/partners/v20180321/model/AgentTransferMoneyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace rapidjson;
using namespace std;

AgentTransferMoneyRequest::AgentTransferMoneyRequest() :
    m_clientUinHasBeenSet(false),
    m_amountHasBeenSet(false)
{
}

string AgentTransferMoneyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clientUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientUin.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_amount, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AgentTransferMoneyRequest::GetClientUin() const
{
    return m_clientUin;
}

void AgentTransferMoneyRequest::SetClientUin(const string& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool AgentTransferMoneyRequest::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

uint64_t AgentTransferMoneyRequest::GetAmount() const
{
    return m_amount;
}

void AgentTransferMoneyRequest::SetAmount(const uint64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool AgentTransferMoneyRequest::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}


