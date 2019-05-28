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

#include <tencentcloud/yunjing/v20180228/model/ChargePrepaid.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace rapidjson;
using namespace std;

ChargePrepaid::ChargePrepaid() :
    m_periodHasBeenSet(false),
    m_renewFlagHasBeenSet(false)
{
}

CoreInternalOutcome ChargePrepaid::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ChargePrepaid.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `ChargePrepaid.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChargePrepaid::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ChargePrepaid::GetPeriod() const
{
    return m_period;
}

void ChargePrepaid::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ChargePrepaid::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string ChargePrepaid::GetRenewFlag() const
{
    return m_renewFlag;
}

void ChargePrepaid::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool ChargePrepaid::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

