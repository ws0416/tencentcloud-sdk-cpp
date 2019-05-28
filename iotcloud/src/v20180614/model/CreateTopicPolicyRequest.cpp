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

#include <tencentcloud/iotcloud/v20180614/model/CreateTopicPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace rapidjson;
using namespace std;

CreateTopicPolicyRequest::CreateTopicPolicyRequest() :
    m_productIDHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_brokerSubscribeHasBeenSet(false)
{
}

string CreateTopicPolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_privilege, allocator);
    }

    if (m_brokerSubscribeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BrokerSubscribe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_brokerSubscribe.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTopicPolicyRequest::GetProductID() const
{
    return m_productID;
}

void CreateTopicPolicyRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool CreateTopicPolicyRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

string CreateTopicPolicyRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateTopicPolicyRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateTopicPolicyRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t CreateTopicPolicyRequest::GetPrivilege() const
{
    return m_privilege;
}

void CreateTopicPolicyRequest::SetPrivilege(const uint64_t& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool CreateTopicPolicyRequest::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

BrokerSubscribe CreateTopicPolicyRequest::GetBrokerSubscribe() const
{
    return m_brokerSubscribe;
}

void CreateTopicPolicyRequest::SetBrokerSubscribe(const BrokerSubscribe& _brokerSubscribe)
{
    m_brokerSubscribe = _brokerSubscribe;
    m_brokerSubscribeHasBeenSet = true;
}

bool CreateTopicPolicyRequest::BrokerSubscribeHasBeenSet() const
{
    return m_brokerSubscribeHasBeenSet;
}


