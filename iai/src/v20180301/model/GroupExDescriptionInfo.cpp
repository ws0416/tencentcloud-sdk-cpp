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

#include <tencentcloud/iai/v20180301/model/GroupExDescriptionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

GroupExDescriptionInfo::GroupExDescriptionInfo() :
    m_groupExDescriptionIndexHasBeenSet(false),
    m_groupExDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome GroupExDescriptionInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupExDescriptionIndex") && !value["GroupExDescriptionIndex"].IsNull())
    {
        if (!value["GroupExDescriptionIndex"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `GroupExDescriptionInfo.GroupExDescriptionIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupExDescriptionIndex = value["GroupExDescriptionIndex"].GetUint64();
        m_groupExDescriptionIndexHasBeenSet = true;
    }

    if (value.HasMember("GroupExDescription") && !value["GroupExDescription"].IsNull())
    {
        if (!value["GroupExDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupExDescriptionInfo.GroupExDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupExDescription = string(value["GroupExDescription"].GetString());
        m_groupExDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupExDescriptionInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_groupExDescriptionIndexHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupExDescriptionIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupExDescriptionIndex, allocator);
    }

    if (m_groupExDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupExDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupExDescription.c_str(), allocator).Move(), allocator);
    }

}


uint64_t GroupExDescriptionInfo::GetGroupExDescriptionIndex() const
{
    return m_groupExDescriptionIndex;
}

void GroupExDescriptionInfo::SetGroupExDescriptionIndex(const uint64_t& _groupExDescriptionIndex)
{
    m_groupExDescriptionIndex = _groupExDescriptionIndex;
    m_groupExDescriptionIndexHasBeenSet = true;
}

bool GroupExDescriptionInfo::GroupExDescriptionIndexHasBeenSet() const
{
    return m_groupExDescriptionIndexHasBeenSet;
}

string GroupExDescriptionInfo::GetGroupExDescription() const
{
    return m_groupExDescription;
}

void GroupExDescriptionInfo::SetGroupExDescription(const string& _groupExDescription)
{
    m_groupExDescription = _groupExDescription;
    m_groupExDescriptionHasBeenSet = true;
}

bool GroupExDescriptionInfo::GroupExDescriptionHasBeenSet() const
{
    return m_groupExDescriptionHasBeenSet;
}

