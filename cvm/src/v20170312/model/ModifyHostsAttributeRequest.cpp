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

#include <tencentcloud/cvm/v20170312/model/ModifyHostsAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

ModifyHostsAttributeRequest::ModifyHostsAttributeRequest() :
    m_hostIdsHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_renewFlagHasBeenSet(false)
{
}

string ModifyHostsAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_hostIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HostIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_hostIds.begin(); itr != m_hostIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyHostsAttributeRequest::GetHostIds() const
{
    return m_hostIds;
}

void ModifyHostsAttributeRequest::SetHostIds(const vector<string>& _hostIds)
{
    m_hostIds = _hostIds;
    m_hostIdsHasBeenSet = true;
}

bool ModifyHostsAttributeRequest::HostIdsHasBeenSet() const
{
    return m_hostIdsHasBeenSet;
}

string ModifyHostsAttributeRequest::GetHostName() const
{
    return m_hostName;
}

void ModifyHostsAttributeRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ModifyHostsAttributeRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ModifyHostsAttributeRequest::GetRenewFlag() const
{
    return m_renewFlag;
}

void ModifyHostsAttributeRequest::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool ModifyHostsAttributeRequest::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}


