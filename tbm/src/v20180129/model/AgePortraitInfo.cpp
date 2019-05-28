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

#include <tencentcloud/tbm/v20180129/model/AgePortraitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbm::V20180129::Model;
using namespace rapidjson;
using namespace std;

AgePortraitInfo::AgePortraitInfo() :
    m_portraitSetHasBeenSet(false)
{
}

CoreInternalOutcome AgePortraitInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PortraitSet") && !value["PortraitSet"].IsNull())
    {
        if (!value["PortraitSet"].IsArray())
            return CoreInternalOutcome(Error("response `AgePortraitInfo.PortraitSet` is not array type"));

        const Value &tmpValue = value["PortraitSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgePortrait item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_portraitSet.push_back(item);
        }
        m_portraitSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgePortraitInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_portraitSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PortraitSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_portraitSet.begin(); itr != m_portraitSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AgePortrait> AgePortraitInfo::GetPortraitSet() const
{
    return m_portraitSet;
}

void AgePortraitInfo::SetPortraitSet(const vector<AgePortrait>& _portraitSet)
{
    m_portraitSet = _portraitSet;
    m_portraitSetHasBeenSet = true;
}

bool AgePortraitInfo::PortraitSetHasBeenSet() const
{
    return m_portraitSetHasBeenSet;
}

