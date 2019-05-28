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

#include <tencentcloud/tbaas/v20180416/model/InvokeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

InvokeRequest::InvokeRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_chaincodeNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_peersHasBeenSet(false),
    m_funcNameHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_asyncFlagHasBeenSet(false)
{
}

string InvokeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_chaincodeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChaincodeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chaincodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_peersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Peers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_peers.begin(); itr != m_peers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_funcNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FuncName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_funcName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_argsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_asyncFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AsyncFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asyncFlag, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InvokeRequest::GetModule() const
{
    return m_module;
}

void InvokeRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool InvokeRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string InvokeRequest::GetOperation() const
{
    return m_operation;
}

void InvokeRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool InvokeRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string InvokeRequest::GetClusterId() const
{
    return m_clusterId;
}

void InvokeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool InvokeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string InvokeRequest::GetChaincodeName() const
{
    return m_chaincodeName;
}

void InvokeRequest::SetChaincodeName(const string& _chaincodeName)
{
    m_chaincodeName = _chaincodeName;
    m_chaincodeNameHasBeenSet = true;
}

bool InvokeRequest::ChaincodeNameHasBeenSet() const
{
    return m_chaincodeNameHasBeenSet;
}

string InvokeRequest::GetChannelName() const
{
    return m_channelName;
}

void InvokeRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool InvokeRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

vector<PeerSet> InvokeRequest::GetPeers() const
{
    return m_peers;
}

void InvokeRequest::SetPeers(const vector<PeerSet>& _peers)
{
    m_peers = _peers;
    m_peersHasBeenSet = true;
}

bool InvokeRequest::PeersHasBeenSet() const
{
    return m_peersHasBeenSet;
}

string InvokeRequest::GetFuncName() const
{
    return m_funcName;
}

void InvokeRequest::SetFuncName(const string& _funcName)
{
    m_funcName = _funcName;
    m_funcNameHasBeenSet = true;
}

bool InvokeRequest::FuncNameHasBeenSet() const
{
    return m_funcNameHasBeenSet;
}

string InvokeRequest::GetGroupName() const
{
    return m_groupName;
}

void InvokeRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool InvokeRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<string> InvokeRequest::GetArgs() const
{
    return m_args;
}

void InvokeRequest::SetArgs(const vector<string>& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool InvokeRequest::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

uint64_t InvokeRequest::GetAsyncFlag() const
{
    return m_asyncFlag;
}

void InvokeRequest::SetAsyncFlag(const uint64_t& _asyncFlag)
{
    m_asyncFlag = _asyncFlag;
    m_asyncFlagHasBeenSet = true;
}

bool InvokeRequest::AsyncFlagHasBeenSet() const
{
    return m_asyncFlagHasBeenSet;
}


