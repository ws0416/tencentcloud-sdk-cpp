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

#include <tencentcloud/bmvpc/v20180625/model/BindSubnetsToNatGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace rapidjson;
using namespace std;

BindSubnetsToNatGatewayRequest::BindSubnetsToNatGatewayRequest() :
    m_natIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false)
{
}

string BindSubnetsToNatGatewayRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NatId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_natId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindSubnetsToNatGatewayRequest::GetNatId() const
{
    return m_natId;
}

void BindSubnetsToNatGatewayRequest::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool BindSubnetsToNatGatewayRequest::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

string BindSubnetsToNatGatewayRequest::GetVpcId() const
{
    return m_vpcId;
}

void BindSubnetsToNatGatewayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool BindSubnetsToNatGatewayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> BindSubnetsToNatGatewayRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void BindSubnetsToNatGatewayRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool BindSubnetsToNatGatewayRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}


