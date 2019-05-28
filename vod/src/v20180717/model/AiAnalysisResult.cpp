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

#include <tencentcloud/vod/v20180717/model/AiAnalysisResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AiAnalysisResult::AiAnalysisResult() :
    m_typeHasBeenSet(false),
    m_classificationTaskHasBeenSet(false),
    m_coverTaskHasBeenSet(false),
    m_tagTaskHasBeenSet(false),
    m_frameTagTaskHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiAnalysisResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ClassificationTask") && !value["ClassificationTask"].IsNull())
    {
        if (!value["ClassificationTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiAnalysisResult.ClassificationTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classificationTask.Deserialize(value["ClassificationTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classificationTaskHasBeenSet = true;
    }

    if (value.HasMember("CoverTask") && !value["CoverTask"].IsNull())
    {
        if (!value["CoverTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiAnalysisResult.CoverTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coverTask.Deserialize(value["CoverTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coverTaskHasBeenSet = true;
    }

    if (value.HasMember("TagTask") && !value["TagTask"].IsNull())
    {
        if (!value["TagTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiAnalysisResult.TagTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagTask.Deserialize(value["TagTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagTaskHasBeenSet = true;
    }

    if (value.HasMember("FrameTagTask") && !value["FrameTagTask"].IsNull())
    {
        if (!value["FrameTagTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiAnalysisResult.FrameTagTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frameTagTask.Deserialize(value["FrameTagTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frameTagTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassificationTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_classificationTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_coverTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_tagTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_frameTagTaskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FrameTagTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_frameTagTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AiAnalysisResult::GetType() const
{
    return m_type;
}

void AiAnalysisResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AiAnalysisResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AiAnalysisTaskClassificationResult AiAnalysisResult::GetClassificationTask() const
{
    return m_classificationTask;
}

void AiAnalysisResult::SetClassificationTask(const AiAnalysisTaskClassificationResult& _classificationTask)
{
    m_classificationTask = _classificationTask;
    m_classificationTaskHasBeenSet = true;
}

bool AiAnalysisResult::ClassificationTaskHasBeenSet() const
{
    return m_classificationTaskHasBeenSet;
}

AiAnalysisTaskCoverResult AiAnalysisResult::GetCoverTask() const
{
    return m_coverTask;
}

void AiAnalysisResult::SetCoverTask(const AiAnalysisTaskCoverResult& _coverTask)
{
    m_coverTask = _coverTask;
    m_coverTaskHasBeenSet = true;
}

bool AiAnalysisResult::CoverTaskHasBeenSet() const
{
    return m_coverTaskHasBeenSet;
}

AiAnalysisTaskTagResult AiAnalysisResult::GetTagTask() const
{
    return m_tagTask;
}

void AiAnalysisResult::SetTagTask(const AiAnalysisTaskTagResult& _tagTask)
{
    m_tagTask = _tagTask;
    m_tagTaskHasBeenSet = true;
}

bool AiAnalysisResult::TagTaskHasBeenSet() const
{
    return m_tagTaskHasBeenSet;
}

AiAnalysisTaskFrameTagResult AiAnalysisResult::GetFrameTagTask() const
{
    return m_frameTagTask;
}

void AiAnalysisResult::SetFrameTagTask(const AiAnalysisTaskFrameTagResult& _frameTagTask)
{
    m_frameTagTask = _frameTagTask;
    m_frameTagTaskHasBeenSet = true;
}

bool AiAnalysisResult::FrameTagTaskHasBeenSet() const
{
    return m_frameTagTaskHasBeenSet;
}

