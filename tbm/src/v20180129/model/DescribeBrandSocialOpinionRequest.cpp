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

#include <tencentcloud/tbm/v20180129/model/DescribeBrandSocialOpinionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbm::V20180129::Model;
using namespace rapidjson;
using namespace std;

DescribeBrandSocialOpinionRequest::DescribeBrandSocialOpinionRequest() :
    m_brandIdHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_showListHasBeenSet(false)
{
}

string DescribeBrandSocialOpinionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_brandIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BrandId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_brandId.c_str(), allocator).Move(), allocator);
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

    if (m_showListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShowList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_showList, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBrandSocialOpinionRequest::GetBrandId() const
{
    return m_brandId;
}

void DescribeBrandSocialOpinionRequest::SetBrandId(const string& _brandId)
{
    m_brandId = _brandId;
    m_brandIdHasBeenSet = true;
}

bool DescribeBrandSocialOpinionRequest::BrandIdHasBeenSet() const
{
    return m_brandIdHasBeenSet;
}

string DescribeBrandSocialOpinionRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribeBrandSocialOpinionRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribeBrandSocialOpinionRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeBrandSocialOpinionRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeBrandSocialOpinionRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeBrandSocialOpinionRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

int64_t DescribeBrandSocialOpinionRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBrandSocialOpinionRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBrandSocialOpinionRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeBrandSocialOpinionRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBrandSocialOpinionRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBrandSocialOpinionRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeBrandSocialOpinionRequest::GetShowList() const
{
    return m_showList;
}

void DescribeBrandSocialOpinionRequest::SetShowList(const bool& _showList)
{
    m_showList = _showList;
    m_showListHasBeenSet = true;
}

bool DescribeBrandSocialOpinionRequest::ShowListHasBeenSet() const
{
    return m_showListHasBeenSet;
}


