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

#include <tencentcloud/vpc/v20170312/model/ModifyDirectConnectGatewayAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

ModifyDirectConnectGatewayAttributeRequest::ModifyDirectConnectGatewayAttributeRequest() :
    m_directConnectGatewayIdHasBeenSet(false),
    m_directConnectGatewayNameHasBeenSet(false),
    m_ccnRouteTypeHasBeenSet(false)
{
}

string ModifyDirectConnectGatewayAttributeRequest::ToJsonString() const
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

    if (m_directConnectGatewayNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DirectConnectGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_directConnectGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnRouteTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnRouteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ccnRouteType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDirectConnectGatewayAttributeRequest::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void ModifyDirectConnectGatewayAttributeRequest::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool ModifyDirectConnectGatewayAttributeRequest::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

string ModifyDirectConnectGatewayAttributeRequest::GetDirectConnectGatewayName() const
{
    return m_directConnectGatewayName;
}

void ModifyDirectConnectGatewayAttributeRequest::SetDirectConnectGatewayName(const string& _directConnectGatewayName)
{
    m_directConnectGatewayName = _directConnectGatewayName;
    m_directConnectGatewayNameHasBeenSet = true;
}

bool ModifyDirectConnectGatewayAttributeRequest::DirectConnectGatewayNameHasBeenSet() const
{
    return m_directConnectGatewayNameHasBeenSet;
}

string ModifyDirectConnectGatewayAttributeRequest::GetCcnRouteType() const
{
    return m_ccnRouteType;
}

void ModifyDirectConnectGatewayAttributeRequest::SetCcnRouteType(const string& _ccnRouteType)
{
    m_ccnRouteType = _ccnRouteType;
    m_ccnRouteTypeHasBeenSet = true;
}

bool ModifyDirectConnectGatewayAttributeRequest::CcnRouteTypeHasBeenSet() const
{
    return m_ccnRouteTypeHasBeenSet;
}


