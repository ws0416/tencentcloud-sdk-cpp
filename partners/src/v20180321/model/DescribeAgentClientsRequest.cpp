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

#include <tencentcloud/partners/v20180321/model/DescribeAgentClientsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace rapidjson;
using namespace std;

DescribeAgentClientsRequest::DescribeAgentClientsRequest() :
    m_clientUinHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_clientFlagHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeAgentClientsRequest::ToJsonString() const
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

    if (m_clientNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAgentClientsRequest::GetClientUin() const
{
    return m_clientUin;
}

void DescribeAgentClientsRequest::SetClientUin(const string& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool DescribeAgentClientsRequest::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

string DescribeAgentClientsRequest::GetClientName() const
{
    return m_clientName;
}

void DescribeAgentClientsRequest::SetClientName(const string& _clientName)
{
    m_clientName = _clientName;
    m_clientNameHasBeenSet = true;
}

bool DescribeAgentClientsRequest::ClientNameHasBeenSet() const
{
    return m_clientNameHasBeenSet;
}

string DescribeAgentClientsRequest::GetClientFlag() const
{
    return m_clientFlag;
}

void DescribeAgentClientsRequest::SetClientFlag(const string& _clientFlag)
{
    m_clientFlag = _clientFlag;
    m_clientFlagHasBeenSet = true;
}

bool DescribeAgentClientsRequest::ClientFlagHasBeenSet() const
{
    return m_clientFlagHasBeenSet;
}

string DescribeAgentClientsRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeAgentClientsRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeAgentClientsRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

uint64_t DescribeAgentClientsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAgentClientsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAgentClientsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAgentClientsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAgentClientsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAgentClientsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


