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

#include <tencentcloud/cdb/v20170320/model/Inbound.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

Inbound::Inbound() :
    m_actionHasBeenSet(false),
    m_cidrIpHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_dirHasBeenSet(false)
{
}

CoreInternalOutcome Inbound::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Error("response `Inbound.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("CidrIp") && !value["CidrIp"].IsNull())
    {
        if (!value["CidrIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `Inbound.CidrIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrIp = string(value["CidrIp"].GetString());
        m_cidrIpHasBeenSet = true;
    }

    if (value.HasMember("PortRange") && !value["PortRange"].IsNull())
    {
        if (!value["PortRange"].IsString())
        {
            return CoreInternalOutcome(Error("response `Inbound.PortRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portRange = string(value["PortRange"].GetString());
        m_portRangeHasBeenSet = true;
    }

    if (value.HasMember("IpProtocol") && !value["IpProtocol"].IsNull())
    {
        if (!value["IpProtocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `Inbound.IpProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocol = string(value["IpProtocol"].GetString());
        m_ipProtocolHasBeenSet = true;
    }

    if (value.HasMember("Dir") && !value["Dir"].IsNull())
    {
        if (!value["Dir"].IsString())
        {
            return CoreInternalOutcome(Error("response `Inbound.Dir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dir = string(value["Dir"].GetString());
        m_dirHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Inbound::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CidrIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cidrIp.c_str(), allocator).Move(), allocator);
    }

    if (m_portRangeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PortRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_portRange.c_str(), allocator).Move(), allocator);
    }

    if (m_ipProtocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ipProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_dirHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Dir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dir.c_str(), allocator).Move(), allocator);
    }

}


string Inbound::GetAction() const
{
    return m_action;
}

void Inbound::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool Inbound::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string Inbound::GetCidrIp() const
{
    return m_cidrIp;
}

void Inbound::SetCidrIp(const string& _cidrIp)
{
    m_cidrIp = _cidrIp;
    m_cidrIpHasBeenSet = true;
}

bool Inbound::CidrIpHasBeenSet() const
{
    return m_cidrIpHasBeenSet;
}

string Inbound::GetPortRange() const
{
    return m_portRange;
}

void Inbound::SetPortRange(const string& _portRange)
{
    m_portRange = _portRange;
    m_portRangeHasBeenSet = true;
}

bool Inbound::PortRangeHasBeenSet() const
{
    return m_portRangeHasBeenSet;
}

string Inbound::GetIpProtocol() const
{
    return m_ipProtocol;
}

void Inbound::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool Inbound::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}

string Inbound::GetDir() const
{
    return m_dir;
}

void Inbound::SetDir(const string& _dir)
{
    m_dir = _dir;
    m_dirHasBeenSet = true;
}

bool Inbound::DirHasBeenSet() const
{
    return m_dirHasBeenSet;
}

