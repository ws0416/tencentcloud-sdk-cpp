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

#include <tencentcloud/bmvpc/v20180625/model/AsyncRegisterIpsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace rapidjson;
using namespace std;

AsyncRegisterIpsRequest::AsyncRegisterIpsRequest() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_ipsHasBeenSet(false)
{
}

string AsyncRegisterIpsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ips.begin(); itr != m_ips.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AsyncRegisterIpsRequest::GetVpcId() const
{
    return m_vpcId;
}

void AsyncRegisterIpsRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AsyncRegisterIpsRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AsyncRegisterIpsRequest::GetSubnetId() const
{
    return m_subnetId;
}

void AsyncRegisterIpsRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool AsyncRegisterIpsRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<string> AsyncRegisterIpsRequest::GetIps() const
{
    return m_ips;
}

void AsyncRegisterIpsRequest::SetIps(const vector<string>& _ips)
{
    m_ips = _ips;
    m_ipsHasBeenSet = true;
}

bool AsyncRegisterIpsRequest::IpsHasBeenSet() const
{
    return m_ipsHasBeenSet;
}


