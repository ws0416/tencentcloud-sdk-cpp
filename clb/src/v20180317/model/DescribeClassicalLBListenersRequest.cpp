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

#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

DescribeClassicalLBListenersRequest::DescribeClassicalLBListenersRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_listenerPortHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeClassicalLBListenersRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_listenerIds.begin(); itr != m_listenerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_listenerPort, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeClassicalLBListenersRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void DescribeClassicalLBListenersRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool DescribeClassicalLBListenersRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<string> DescribeClassicalLBListenersRequest::GetListenerIds() const
{
    return m_listenerIds;
}

void DescribeClassicalLBListenersRequest::SetListenerIds(const vector<string>& _listenerIds)
{
    m_listenerIds = _listenerIds;
    m_listenerIdsHasBeenSet = true;
}

bool DescribeClassicalLBListenersRequest::ListenerIdsHasBeenSet() const
{
    return m_listenerIdsHasBeenSet;
}

string DescribeClassicalLBListenersRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeClassicalLBListenersRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeClassicalLBListenersRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t DescribeClassicalLBListenersRequest::GetListenerPort() const
{
    return m_listenerPort;
}

void DescribeClassicalLBListenersRequest::SetListenerPort(const int64_t& _listenerPort)
{
    m_listenerPort = _listenerPort;
    m_listenerPortHasBeenSet = true;
}

bool DescribeClassicalLBListenersRequest::ListenerPortHasBeenSet() const
{
    return m_listenerPortHasBeenSet;
}

int64_t DescribeClassicalLBListenersRequest::GetStatus() const
{
    return m_status;
}

void DescribeClassicalLBListenersRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeClassicalLBListenersRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


