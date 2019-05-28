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

#include <tencentcloud/iotcloud/v20180614/model/DescribeMultiDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace rapidjson;
using namespace std;

DescribeMultiDevicesRequest::DescribeMultiDevicesRequest() :
    m_productIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeMultiDevicesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_taskId.c_str(), allocator).Move(), allocator);
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


string DescribeMultiDevicesRequest::GetProductId() const
{
    return m_productId;
}

void DescribeMultiDevicesRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeMultiDevicesRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeMultiDevicesRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeMultiDevicesRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeMultiDevicesRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t DescribeMultiDevicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMultiDevicesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMultiDevicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeMultiDevicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMultiDevicesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMultiDevicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


