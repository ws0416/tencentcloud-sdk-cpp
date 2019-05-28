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

#include <tencentcloud/vod/v20180717/model/MediaSampleSnapshotItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaSampleSnapshotItem::MediaSampleSnapshotItem() :
    m_definitionHasBeenSet(false),
    m_sampleTypeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_imageUrlSetHasBeenSet(false),
    m_waterMarkDefinitionHasBeenSet(false)
{
}

CoreInternalOutcome MediaSampleSnapshotItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MediaSampleSnapshotItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("SampleType") && !value["SampleType"].IsNull())
    {
        if (!value["SampleType"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaSampleSnapshotItem.SampleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampleType = string(value["SampleType"].GetString());
        m_sampleTypeHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MediaSampleSnapshotItem.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("ImageUrlSet") && !value["ImageUrlSet"].IsNull())
    {
        if (!value["ImageUrlSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaSampleSnapshotItem.ImageUrlSet` is not array type"));

        const Value &tmpValue = value["ImageUrlSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageUrlSet.push_back((*itr).GetString());
        }
        m_imageUrlSetHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkDefinition") && !value["WaterMarkDefinition"].IsNull())
    {
        if (!value["WaterMarkDefinition"].IsArray())
            return CoreInternalOutcome(Error("response `MediaSampleSnapshotItem.WaterMarkDefinition` is not array type"));

        const Value &tmpValue = value["WaterMarkDefinition"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_waterMarkDefinition.push_back((*itr).GetInt64());
        }
        m_waterMarkDefinitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaSampleSnapshotItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_sampleTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SampleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sampleType.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_imageUrlSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageUrlSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_imageUrlSet.begin(); itr != m_imageUrlSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_waterMarkDefinitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WaterMarkDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_waterMarkDefinition.begin(); itr != m_waterMarkDefinition.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t MediaSampleSnapshotItem::GetDefinition() const
{
    return m_definition;
}

void MediaSampleSnapshotItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MediaSampleSnapshotItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string MediaSampleSnapshotItem::GetSampleType() const
{
    return m_sampleType;
}

void MediaSampleSnapshotItem::SetSampleType(const string& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool MediaSampleSnapshotItem::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

int64_t MediaSampleSnapshotItem::GetInterval() const
{
    return m_interval;
}

void MediaSampleSnapshotItem::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool MediaSampleSnapshotItem::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

vector<string> MediaSampleSnapshotItem::GetImageUrlSet() const
{
    return m_imageUrlSet;
}

void MediaSampleSnapshotItem::SetImageUrlSet(const vector<string>& _imageUrlSet)
{
    m_imageUrlSet = _imageUrlSet;
    m_imageUrlSetHasBeenSet = true;
}

bool MediaSampleSnapshotItem::ImageUrlSetHasBeenSet() const
{
    return m_imageUrlSetHasBeenSet;
}

vector<int64_t> MediaSampleSnapshotItem::GetWaterMarkDefinition() const
{
    return m_waterMarkDefinition;
}

void MediaSampleSnapshotItem::SetWaterMarkDefinition(const vector<int64_t>& _waterMarkDefinition)
{
    m_waterMarkDefinition = _waterMarkDefinition;
    m_waterMarkDefinitionHasBeenSet = true;
}

bool MediaSampleSnapshotItem::WaterMarkDefinitionHasBeenSet() const
{
    return m_waterMarkDefinitionHasBeenSet;
}

