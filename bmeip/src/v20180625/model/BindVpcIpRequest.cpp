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

#include <tencentcloud/bmeip/v20180625/model/BindVpcIpRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace rapidjson;
using namespace std;

BindVpcIpRequest::BindVpcIpRequest() :
    m_eipIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcIpHasBeenSet(false)
{
}

string BindVpcIpRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eipIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EipId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_eipId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcIp.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindVpcIpRequest::GetEipId() const
{
    return m_eipId;
}

void BindVpcIpRequest::SetEipId(const string& _eipId)
{
    m_eipId = _eipId;
    m_eipIdHasBeenSet = true;
}

bool BindVpcIpRequest::EipIdHasBeenSet() const
{
    return m_eipIdHasBeenSet;
}

string BindVpcIpRequest::GetVpcId() const
{
    return m_vpcId;
}

void BindVpcIpRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool BindVpcIpRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string BindVpcIpRequest::GetVpcIp() const
{
    return m_vpcIp;
}

void BindVpcIpRequest::SetVpcIp(const string& _vpcIp)
{
    m_vpcIp = _vpcIp;
    m_vpcIpHasBeenSet = true;
}

bool BindVpcIpRequest::VpcIpHasBeenSet() const
{
    return m_vpcIpHasBeenSet;
}


