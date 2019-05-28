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

#include <tencentcloud/aai/v20180522/model/TextToVoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aai::V20180522::Model;
using namespace rapidjson;
using namespace std;

TextToVoiceRequest::TextToVoiceRequest() :
    m_textHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_speedHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_voiceTypeHasBeenSet(false),
    m_primaryLanguageHasBeenSet(false),
    m_sampleRateHasBeenSet(false)
{
}

string TextToVoiceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelType, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }

    if (m_speedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speed, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceType, allocator);
    }

    if (m_primaryLanguageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrimaryLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_primaryLanguage, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleRate, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextToVoiceRequest::GetText() const
{
    return m_text;
}

void TextToVoiceRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextToVoiceRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string TextToVoiceRequest::GetSessionId() const
{
    return m_sessionId;
}

void TextToVoiceRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TextToVoiceRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t TextToVoiceRequest::GetModelType() const
{
    return m_modelType;
}

void TextToVoiceRequest::SetModelType(const int64_t& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool TextToVoiceRequest::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

double TextToVoiceRequest::GetVolume() const
{
    return m_volume;
}

void TextToVoiceRequest::SetVolume(const double& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool TextToVoiceRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

double TextToVoiceRequest::GetSpeed() const
{
    return m_speed;
}

void TextToVoiceRequest::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool TextToVoiceRequest::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

int64_t TextToVoiceRequest::GetProjectId() const
{
    return m_projectId;
}

void TextToVoiceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TextToVoiceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t TextToVoiceRequest::GetVoiceType() const
{
    return m_voiceType;
}

void TextToVoiceRequest::SetVoiceType(const int64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool TextToVoiceRequest::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

uint64_t TextToVoiceRequest::GetPrimaryLanguage() const
{
    return m_primaryLanguage;
}

void TextToVoiceRequest::SetPrimaryLanguage(const uint64_t& _primaryLanguage)
{
    m_primaryLanguage = _primaryLanguage;
    m_primaryLanguageHasBeenSet = true;
}

bool TextToVoiceRequest::PrimaryLanguageHasBeenSet() const
{
    return m_primaryLanguageHasBeenSet;
}

uint64_t TextToVoiceRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void TextToVoiceRequest::SetSampleRate(const uint64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool TextToVoiceRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}


