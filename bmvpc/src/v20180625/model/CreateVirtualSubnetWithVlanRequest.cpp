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

#include <tencentcloud/bmvpc/v20180625/model/CreateVirtualSubnetWithVlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace rapidjson;
using namespace std;

CreateVirtualSubnetWithVlanRequest::CreateVirtualSubnetWithVlanRequest() :
    m_vpcIdHasBeenSet(false),
    m_subnetSetHasBeenSet(false)
{
}

string CreateVirtualSubnetWithVlanRequest::ToJsonString() const
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

    if (m_subnetSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subnetSet.begin(); itr != m_subnetSet.end(); ++itr, ++i)
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


string CreateVirtualSubnetWithVlanRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateVirtualSubnetWithVlanRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateVirtualSubnetWithVlanRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<SubnetCreateInputInfo> CreateVirtualSubnetWithVlanRequest::GetSubnetSet() const
{
    return m_subnetSet;
}

void CreateVirtualSubnetWithVlanRequest::SetSubnetSet(const vector<SubnetCreateInputInfo>& _subnetSet)
{
    m_subnetSet = _subnetSet;
    m_subnetSetHasBeenSet = true;
}

bool CreateVirtualSubnetWithVlanRequest::SubnetSetHasBeenSet() const
{
    return m_subnetSetHasBeenSet;
}


