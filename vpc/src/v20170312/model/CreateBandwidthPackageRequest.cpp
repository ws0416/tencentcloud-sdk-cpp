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

#include <tencentcloud/vpc/v20170312/model/CreateBandwidthPackageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateBandwidthPackageRequest::CreateBandwidthPackageRequest() :
    m_networkTypeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_bandwidthPackageNameHasBeenSet(false),
    m_bandwidthPackageCountHasBeenSet(false),
    m_internetMaxBandwidthHasBeenSet(false)
{
}

string CreateBandwidthPackageRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthPackageNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthPackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bandwidthPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthPackageCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthPackageCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidthPackageCount, allocator);
    }

    if (m_internetMaxBandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetMaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidth, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBandwidthPackageRequest::GetNetworkType() const
{
    return m_networkType;
}

void CreateBandwidthPackageRequest::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string CreateBandwidthPackageRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateBandwidthPackageRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string CreateBandwidthPackageRequest::GetBandwidthPackageName() const
{
    return m_bandwidthPackageName;
}

void CreateBandwidthPackageRequest::SetBandwidthPackageName(const string& _bandwidthPackageName)
{
    m_bandwidthPackageName = _bandwidthPackageName;
    m_bandwidthPackageNameHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::BandwidthPackageNameHasBeenSet() const
{
    return m_bandwidthPackageNameHasBeenSet;
}

uint64_t CreateBandwidthPackageRequest::GetBandwidthPackageCount() const
{
    return m_bandwidthPackageCount;
}

void CreateBandwidthPackageRequest::SetBandwidthPackageCount(const uint64_t& _bandwidthPackageCount)
{
    m_bandwidthPackageCount = _bandwidthPackageCount;
    m_bandwidthPackageCountHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::BandwidthPackageCountHasBeenSet() const
{
    return m_bandwidthPackageCountHasBeenSet;
}

int64_t CreateBandwidthPackageRequest::GetInternetMaxBandwidth() const
{
    return m_internetMaxBandwidth;
}

void CreateBandwidthPackageRequest::SetInternetMaxBandwidth(const int64_t& _internetMaxBandwidth)
{
    m_internetMaxBandwidth = _internetMaxBandwidth;
    m_internetMaxBandwidthHasBeenSet = true;
}

bool CreateBandwidthPackageRequest::InternetMaxBandwidthHasBeenSet() const
{
    return m_internetMaxBandwidthHasBeenSet;
}


