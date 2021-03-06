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

#include <tencentcloud/asr/v20190614/model/SentenceRecognitionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace rapidjson;
using namespace std;

SentenceRecognitionRequest::SentenceRecognitionRequest() :
    m_projectIdHasBeenSet(false),
    m_subServiceTypeHasBeenSet(false),
    m_engSerViceTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_voiceFormatHasBeenSet(false),
    m_usrAudioKeyHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_dataLenHasBeenSet(false),
    m_hotwordIdHasBeenSet(false),
    m_filterDirtyHasBeenSet(false),
    m_filterModalHasBeenSet(false),
    m_filterPuncHasBeenSet(false),
    m_convertNumModeHasBeenSet(false)
{
}

string SentenceRecognitionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_subServiceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subServiceType, allocator);
    }

    if (m_engSerViceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EngSerViceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_engSerViceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_voiceFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoiceFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_voiceFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_usrAudioKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UsrAudioKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_usrAudioKey.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_dataLenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataLen, allocator);
    }

    if (m_hotwordIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HotwordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_hotwordId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterDirtyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FilterDirty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterDirty, allocator);
    }

    if (m_filterModalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FilterModal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterModal, allocator);
    }

    if (m_filterPuncHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FilterPunc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterPunc, allocator);
    }

    if (m_convertNumModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConvertNumMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_convertNumMode, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SentenceRecognitionRequest::GetProjectId() const
{
    return m_projectId;
}

void SentenceRecognitionRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SentenceRecognitionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t SentenceRecognitionRequest::GetSubServiceType() const
{
    return m_subServiceType;
}

void SentenceRecognitionRequest::SetSubServiceType(const uint64_t& _subServiceType)
{
    m_subServiceType = _subServiceType;
    m_subServiceTypeHasBeenSet = true;
}

bool SentenceRecognitionRequest::SubServiceTypeHasBeenSet() const
{
    return m_subServiceTypeHasBeenSet;
}

string SentenceRecognitionRequest::GetEngSerViceType() const
{
    return m_engSerViceType;
}

void SentenceRecognitionRequest::SetEngSerViceType(const string& _engSerViceType)
{
    m_engSerViceType = _engSerViceType;
    m_engSerViceTypeHasBeenSet = true;
}

bool SentenceRecognitionRequest::EngSerViceTypeHasBeenSet() const
{
    return m_engSerViceTypeHasBeenSet;
}

uint64_t SentenceRecognitionRequest::GetSourceType() const
{
    return m_sourceType;
}

void SentenceRecognitionRequest::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool SentenceRecognitionRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string SentenceRecognitionRequest::GetVoiceFormat() const
{
    return m_voiceFormat;
}

void SentenceRecognitionRequest::SetVoiceFormat(const string& _voiceFormat)
{
    m_voiceFormat = _voiceFormat;
    m_voiceFormatHasBeenSet = true;
}

bool SentenceRecognitionRequest::VoiceFormatHasBeenSet() const
{
    return m_voiceFormatHasBeenSet;
}

string SentenceRecognitionRequest::GetUsrAudioKey() const
{
    return m_usrAudioKey;
}

void SentenceRecognitionRequest::SetUsrAudioKey(const string& _usrAudioKey)
{
    m_usrAudioKey = _usrAudioKey;
    m_usrAudioKeyHasBeenSet = true;
}

bool SentenceRecognitionRequest::UsrAudioKeyHasBeenSet() const
{
    return m_usrAudioKeyHasBeenSet;
}

string SentenceRecognitionRequest::GetUrl() const
{
    return m_url;
}

void SentenceRecognitionRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SentenceRecognitionRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string SentenceRecognitionRequest::GetData() const
{
    return m_data;
}

void SentenceRecognitionRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool SentenceRecognitionRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetDataLen() const
{
    return m_dataLen;
}

void SentenceRecognitionRequest::SetDataLen(const int64_t& _dataLen)
{
    m_dataLen = _dataLen;
    m_dataLenHasBeenSet = true;
}

bool SentenceRecognitionRequest::DataLenHasBeenSet() const
{
    return m_dataLenHasBeenSet;
}

string SentenceRecognitionRequest::GetHotwordId() const
{
    return m_hotwordId;
}

void SentenceRecognitionRequest::SetHotwordId(const string& _hotwordId)
{
    m_hotwordId = _hotwordId;
    m_hotwordIdHasBeenSet = true;
}

bool SentenceRecognitionRequest::HotwordIdHasBeenSet() const
{
    return m_hotwordIdHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetFilterDirty() const
{
    return m_filterDirty;
}

void SentenceRecognitionRequest::SetFilterDirty(const int64_t& _filterDirty)
{
    m_filterDirty = _filterDirty;
    m_filterDirtyHasBeenSet = true;
}

bool SentenceRecognitionRequest::FilterDirtyHasBeenSet() const
{
    return m_filterDirtyHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetFilterModal() const
{
    return m_filterModal;
}

void SentenceRecognitionRequest::SetFilterModal(const int64_t& _filterModal)
{
    m_filterModal = _filterModal;
    m_filterModalHasBeenSet = true;
}

bool SentenceRecognitionRequest::FilterModalHasBeenSet() const
{
    return m_filterModalHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetFilterPunc() const
{
    return m_filterPunc;
}

void SentenceRecognitionRequest::SetFilterPunc(const int64_t& _filterPunc)
{
    m_filterPunc = _filterPunc;
    m_filterPuncHasBeenSet = true;
}

bool SentenceRecognitionRequest::FilterPuncHasBeenSet() const
{
    return m_filterPuncHasBeenSet;
}

int64_t SentenceRecognitionRequest::GetConvertNumMode() const
{
    return m_convertNumMode;
}

void SentenceRecognitionRequest::SetConvertNumMode(const int64_t& _convertNumMode)
{
    m_convertNumMode = _convertNumMode;
    m_convertNumModeHasBeenSet = true;
}

bool SentenceRecognitionRequest::ConvertNumModeHasBeenSet() const
{
    return m_convertNumModeHasBeenSet;
}


