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

#include <tencentcloud/cdn/v20180606/model/CacheOptResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

CacheOptResult::CacheOptResult() :
    m_successUrlsHasBeenSet(false),
    m_failUrlsHasBeenSet(false)
{
}

CoreInternalOutcome CacheOptResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SuccessUrls") && !value["SuccessUrls"].IsNull())
    {
        if (!value["SuccessUrls"].IsArray())
            return CoreInternalOutcome(Error("response `CacheOptResult.SuccessUrls` is not array type"));

        const Value &tmpValue = value["SuccessUrls"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successUrls.push_back((*itr).GetString());
        }
        m_successUrlsHasBeenSet = true;
    }

    if (value.HasMember("FailUrls") && !value["FailUrls"].IsNull())
    {
        if (!value["FailUrls"].IsArray())
            return CoreInternalOutcome(Error("response `CacheOptResult.FailUrls` is not array type"));

        const Value &tmpValue = value["FailUrls"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failUrls.push_back((*itr).GetString());
        }
        m_failUrlsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheOptResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_successUrlsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SuccessUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_successUrls.begin(); itr != m_successUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failUrlsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FailUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_failUrls.begin(); itr != m_failUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> CacheOptResult::GetSuccessUrls() const
{
    return m_successUrls;
}

void CacheOptResult::SetSuccessUrls(const vector<string>& _successUrls)
{
    m_successUrls = _successUrls;
    m_successUrlsHasBeenSet = true;
}

bool CacheOptResult::SuccessUrlsHasBeenSet() const
{
    return m_successUrlsHasBeenSet;
}

vector<string> CacheOptResult::GetFailUrls() const
{
    return m_failUrls;
}

void CacheOptResult::SetFailUrls(const vector<string>& _failUrls)
{
    m_failUrls = _failUrls;
    m_failUrlsHasBeenSet = true;
}

bool CacheOptResult::FailUrlsHasBeenSet() const
{
    return m_failUrlsHasBeenSet;
}

