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

#include <tencentcloud/vod/v20180717/model/ModifyContentReviewTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

ModifyContentReviewTemplateRequest::ModifyContentReviewTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_pornConfigureHasBeenSet(false),
    m_terrorismConfigureHasBeenSet(false),
    m_politicalConfigureHasBeenSet(false),
    m_userDefineConfigureHasBeenSet(false),
    m_screenshotIntervalHasBeenSet(false),
    m_reviewWallSwitchHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string ModifyContentReviewTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_pornConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PornConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_pornConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_terrorismConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TerrorismConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_terrorismConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_politicalConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PoliticalConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_politicalConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userDefineConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserDefineConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_userDefineConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_screenshotIntervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScreenshotInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_screenshotInterval, allocator);
    }

    if (m_reviewWallSwitchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReviewWallSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reviewWallSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyContentReviewTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyContentReviewTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyContentReviewTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyContentReviewTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyContentReviewTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyContentReviewTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyContentReviewTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyContentReviewTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyContentReviewTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

PornConfigureInfoForUpdate ModifyContentReviewTemplateRequest::GetPornConfigure() const
{
    return m_pornConfigure;
}

void ModifyContentReviewTemplateRequest::SetPornConfigure(const PornConfigureInfoForUpdate& _pornConfigure)
{
    m_pornConfigure = _pornConfigure;
    m_pornConfigureHasBeenSet = true;
}

bool ModifyContentReviewTemplateRequest::PornConfigureHasBeenSet() const
{
    return m_pornConfigureHasBeenSet;
}

TerrorismConfigureInfoForUpdate ModifyContentReviewTemplateRequest::GetTerrorismConfigure() const
{
    return m_terrorismConfigure;
}

void ModifyContentReviewTemplateRequest::SetTerrorismConfigure(const TerrorismConfigureInfoForUpdate& _terrorismConfigure)
{
    m_terrorismConfigure = _terrorismConfigure;
    m_terrorismConfigureHasBeenSet = true;
}

bool ModifyContentReviewTemplateRequest::TerrorismConfigureHasBeenSet() const
{
    return m_terrorismConfigureHasBeenSet;
}

PoliticalConfigureInfoForUpdate ModifyContentReviewTemplateRequest::GetPoliticalConfigure() const
{
    return m_politicalConfigure;
}

void ModifyContentReviewTemplateRequest::SetPoliticalConfigure(const PoliticalConfigureInfoForUpdate& _politicalConfigure)
{
    m_politicalConfigure = _politicalConfigure;
    m_politicalConfigureHasBeenSet = true;
}

bool ModifyContentReviewTemplateRequest::PoliticalConfigureHasBeenSet() const
{
    return m_politicalConfigureHasBeenSet;
}

UserDefineConfigureInfoForUpdate ModifyContentReviewTemplateRequest::GetUserDefineConfigure() const
{
    return m_userDefineConfigure;
}

void ModifyContentReviewTemplateRequest::SetUserDefineConfigure(const UserDefineConfigureInfoForUpdate& _userDefineConfigure)
{
    m_userDefineConfigure = _userDefineConfigure;
    m_userDefineConfigureHasBeenSet = true;
}

bool ModifyContentReviewTemplateRequest::UserDefineConfigureHasBeenSet() const
{
    return m_userDefineConfigureHasBeenSet;
}

double ModifyContentReviewTemplateRequest::GetScreenshotInterval() const
{
    return m_screenshotInterval;
}

void ModifyContentReviewTemplateRequest::SetScreenshotInterval(const double& _screenshotInterval)
{
    m_screenshotInterval = _screenshotInterval;
    m_screenshotIntervalHasBeenSet = true;
}

bool ModifyContentReviewTemplateRequest::ScreenshotIntervalHasBeenSet() const
{
    return m_screenshotIntervalHasBeenSet;
}

string ModifyContentReviewTemplateRequest::GetReviewWallSwitch() const
{
    return m_reviewWallSwitch;
}

void ModifyContentReviewTemplateRequest::SetReviewWallSwitch(const string& _reviewWallSwitch)
{
    m_reviewWallSwitch = _reviewWallSwitch;
    m_reviewWallSwitchHasBeenSet = true;
}

bool ModifyContentReviewTemplateRequest::ReviewWallSwitchHasBeenSet() const
{
    return m_reviewWallSwitchHasBeenSet;
}

uint64_t ModifyContentReviewTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyContentReviewTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyContentReviewTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


