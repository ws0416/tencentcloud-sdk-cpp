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

#include <tencentcloud/clb/v20180317/model/BatchModifyTargetWeightRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

BatchModifyTargetWeightRequest::BatchModifyTargetWeightRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_modifyListHasBeenSet(false)
{
}

string BatchModifyTargetWeightRequest::ToJsonString() const
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

    if (m_modifyListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModifyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modifyList.begin(); itr != m_modifyList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchModifyTargetWeightRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void BatchModifyTargetWeightRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool BatchModifyTargetWeightRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<RsWeightRule> BatchModifyTargetWeightRequest::GetModifyList() const
{
    return m_modifyList;
}

void BatchModifyTargetWeightRequest::SetModifyList(const vector<RsWeightRule>& _modifyList)
{
    m_modifyList = _modifyList;
    m_modifyListHasBeenSet = true;
}

bool BatchModifyTargetWeightRequest::ModifyListHasBeenSet() const
{
    return m_modifyListHasBeenSet;
}


