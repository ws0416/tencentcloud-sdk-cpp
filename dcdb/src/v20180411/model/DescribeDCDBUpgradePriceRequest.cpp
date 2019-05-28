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

#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBUpgradePriceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace rapidjson;
using namespace std;

DescribeDCDBUpgradePriceRequest::DescribeDCDBUpgradePriceRequest() :
    m_instanceIdHasBeenSet(false),
    m_upgradeTypeHasBeenSet(false),
    m_addShardConfigHasBeenSet(false),
    m_expandShardConfigHasBeenSet(false),
    m_splitShardConfigHasBeenSet(false)
{
}

string DescribeDCDBUpgradePriceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpgradeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_upgradeType.c_str(), allocator).Move(), allocator);
    }

    if (m_addShardConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddShardConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_addShardConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_expandShardConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpandShardConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_expandShardConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_splitShardConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SplitShardConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_splitShardConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDCDBUpgradePriceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDCDBUpgradePriceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDCDBUpgradePriceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDCDBUpgradePriceRequest::GetUpgradeType() const
{
    return m_upgradeType;
}

void DescribeDCDBUpgradePriceRequest::SetUpgradeType(const string& _upgradeType)
{
    m_upgradeType = _upgradeType;
    m_upgradeTypeHasBeenSet = true;
}

bool DescribeDCDBUpgradePriceRequest::UpgradeTypeHasBeenSet() const
{
    return m_upgradeTypeHasBeenSet;
}

AddShardConfig DescribeDCDBUpgradePriceRequest::GetAddShardConfig() const
{
    return m_addShardConfig;
}

void DescribeDCDBUpgradePriceRequest::SetAddShardConfig(const AddShardConfig& _addShardConfig)
{
    m_addShardConfig = _addShardConfig;
    m_addShardConfigHasBeenSet = true;
}

bool DescribeDCDBUpgradePriceRequest::AddShardConfigHasBeenSet() const
{
    return m_addShardConfigHasBeenSet;
}

ExpandShardConfig DescribeDCDBUpgradePriceRequest::GetExpandShardConfig() const
{
    return m_expandShardConfig;
}

void DescribeDCDBUpgradePriceRequest::SetExpandShardConfig(const ExpandShardConfig& _expandShardConfig)
{
    m_expandShardConfig = _expandShardConfig;
    m_expandShardConfigHasBeenSet = true;
}

bool DescribeDCDBUpgradePriceRequest::ExpandShardConfigHasBeenSet() const
{
    return m_expandShardConfigHasBeenSet;
}

SplitShardConfig DescribeDCDBUpgradePriceRequest::GetSplitShardConfig() const
{
    return m_splitShardConfig;
}

void DescribeDCDBUpgradePriceRequest::SetSplitShardConfig(const SplitShardConfig& _splitShardConfig)
{
    m_splitShardConfig = _splitShardConfig;
    m_splitShardConfigHasBeenSet = true;
}

bool DescribeDCDBUpgradePriceRequest::SplitShardConfigHasBeenSet() const
{
    return m_splitShardConfigHasBeenSet;
}


