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

#include <tencentcloud/bmlb/v20180625/model/ModifyL4BackendPortRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace rapidjson;
using namespace std;

ModifyL4BackendPortRequest::ModifyL4BackendPortRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_newPortHasBeenSet(false),
    m_bindTypeHasBeenSet(false)
{
}

string ModifyL4BackendPortRequest::ToJsonString() const
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

    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_newPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NewPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newPort, allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindType, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyL4BackendPortRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyL4BackendPortRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyL4BackendPortRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyL4BackendPortRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyL4BackendPortRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyL4BackendPortRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyL4BackendPortRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyL4BackendPortRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyL4BackendPortRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyL4BackendPortRequest::GetPort() const
{
    return m_port;
}

void ModifyL4BackendPortRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ModifyL4BackendPortRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t ModifyL4BackendPortRequest::GetNewPort() const
{
    return m_newPort;
}

void ModifyL4BackendPortRequest::SetNewPort(const int64_t& _newPort)
{
    m_newPort = _newPort;
    m_newPortHasBeenSet = true;
}

bool ModifyL4BackendPortRequest::NewPortHasBeenSet() const
{
    return m_newPortHasBeenSet;
}

int64_t ModifyL4BackendPortRequest::GetBindType() const
{
    return m_bindType;
}

void ModifyL4BackendPortRequest::SetBindType(const int64_t& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool ModifyL4BackendPortRequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}


