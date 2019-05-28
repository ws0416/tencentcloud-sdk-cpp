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

#include <tencentcloud/monitor/v20180724/model/GetMonitorDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

GetMonitorDataRequest::GetMonitorDataRequest() :
    m_namespaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string GetMonitorDataRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_namespaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_instancesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetMonitorDataRequest::GetNamespace() const
{
    return m_namespace;
}

void GetMonitorDataRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GetMonitorDataRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string GetMonitorDataRequest::GetMetricName() const
{
    return m_metricName;
}

void GetMonitorDataRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool GetMonitorDataRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<Instance> GetMonitorDataRequest::GetInstances() const
{
    return m_instances;
}

void GetMonitorDataRequest::SetInstances(const vector<Instance>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool GetMonitorDataRequest::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

uint64_t GetMonitorDataRequest::GetPeriod() const
{
    return m_period;
}

void GetMonitorDataRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool GetMonitorDataRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string GetMonitorDataRequest::GetStartTime() const
{
    return m_startTime;
}

void GetMonitorDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GetMonitorDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GetMonitorDataRequest::GetEndTime() const
{
    return m_endTime;
}

void GetMonitorDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetMonitorDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


