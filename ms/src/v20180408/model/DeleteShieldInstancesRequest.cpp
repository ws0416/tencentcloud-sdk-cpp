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

#include <tencentcloud/ms/v20180408/model/DeleteShieldInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace rapidjson;
using namespace std;

DeleteShieldInstancesRequest::DeleteShieldInstancesRequest() :
    m_itemIdsHasBeenSet(false)
{
}

string DeleteShieldInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_itemIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ItemIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_itemIds.begin(); itr != m_itemIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteShieldInstancesRequest::GetItemIds() const
{
    return m_itemIds;
}

void DeleteShieldInstancesRequest::SetItemIds(const vector<string>& _itemIds)
{
    m_itemIds = _itemIds;
    m_itemIdsHasBeenSet = true;
}

bool DeleteShieldInstancesRequest::ItemIdsHasBeenSet() const
{
    return m_itemIdsHasBeenSet;
}


