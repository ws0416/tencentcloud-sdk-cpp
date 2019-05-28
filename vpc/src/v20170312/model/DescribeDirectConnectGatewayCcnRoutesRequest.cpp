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

#include <tencentcloud/vpc/v20170312/model/DescribeDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

DescribeDirectConnectGatewayCcnRoutesRequest::DescribeDirectConnectGatewayCcnRoutesRequest() :
    m_directConnectGatewayIdHasBeenSet(false),
    m_ccnRouteTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeDirectConnectGatewayCcnRoutesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directConnectGatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_directConnectGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnRouteTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnRouteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ccnRouteType.c_str(), allocator).Move(), allocator);
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


string DescribeDirectConnectGatewayCcnRoutesRequest::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void DescribeDirectConnectGatewayCcnRoutesRequest::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool DescribeDirectConnectGatewayCcnRoutesRequest::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

string DescribeDirectConnectGatewayCcnRoutesRequest::GetCcnRouteType() const
{
    return m_ccnRouteType;
}

void DescribeDirectConnectGatewayCcnRoutesRequest::SetCcnRouteType(const string& _ccnRouteType)
{
    m_ccnRouteType = _ccnRouteType;
    m_ccnRouteTypeHasBeenSet = true;
}

bool DescribeDirectConnectGatewayCcnRoutesRequest::CcnRouteTypeHasBeenSet() const
{
    return m_ccnRouteTypeHasBeenSet;
}

uint64_t DescribeDirectConnectGatewayCcnRoutesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDirectConnectGatewayCcnRoutesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDirectConnectGatewayCcnRoutesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDirectConnectGatewayCcnRoutesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDirectConnectGatewayCcnRoutesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDirectConnectGatewayCcnRoutesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


