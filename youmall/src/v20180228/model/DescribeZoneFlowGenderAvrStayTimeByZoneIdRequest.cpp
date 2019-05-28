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

#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Youmall::V20180228::Model;
using namespace rapidjson;
using namespace std;

DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

string DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_companyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shopId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_startDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endDate.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::GetCompanyId() const
{
    return m_companyId;
}

void DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::GetShopId() const
{
    return m_shopId;
}

void DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::SetShopId(const int64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

int64_t DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}


