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

#include <tencentcloud/bm/v20180423/model/DescribeOsInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace rapidjson;
using namespace std;

DescribeOsInfoRequest::DescribeOsInfoRequest() :
    m_deviceClassCodeHasBeenSet(false)
{
}

string DescribeOsInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceClassCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceClassCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceClassCode.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeOsInfoRequest::GetDeviceClassCode() const
{
    return m_deviceClassCode;
}

void DescribeOsInfoRequest::SetDeviceClassCode(const string& _deviceClassCode)
{
    m_deviceClassCode = _deviceClassCode;
    m_deviceClassCodeHasBeenSet = true;
}

bool DescribeOsInfoRequest::DeviceClassCodeHasBeenSet() const
{
    return m_deviceClassCodeHasBeenSet;
}


