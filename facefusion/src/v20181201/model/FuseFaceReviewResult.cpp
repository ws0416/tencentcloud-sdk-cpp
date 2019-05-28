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

#include <tencentcloud/facefusion/v20181201/model/FuseFaceReviewResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20181201::Model;
using namespace rapidjson;
using namespace std;

FuseFaceReviewResult::FuseFaceReviewResult() :
    m_categoryHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_codeDescriptionHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_detailSetHasBeenSet(false)
{
}

CoreInternalOutcome FuseFaceReviewResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Error("response `FuseFaceReviewResult.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Error("response `FuseFaceReviewResult.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CodeDescription") && !value["CodeDescription"].IsNull())
    {
        if (!value["CodeDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `FuseFaceReviewResult.CodeDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeDescription = string(value["CodeDescription"].GetString());
        m_codeDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `FuseFaceReviewResult.Confidence` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Error("response `FuseFaceReviewResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("DetailSet") && !value["DetailSet"].IsNull())
    {
        if (!value["DetailSet"].IsArray())
            return CoreInternalOutcome(Error("response `FuseFaceReviewResult.DetailSet` is not array type"));

        const Value &tmpValue = value["DetailSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FuseFaceReviewDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailSet.push_back(item);
        }
        m_detailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FuseFaceReviewResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_categoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_codeDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CodeDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_codeDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_detailSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailSet.begin(); itr != m_detailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FuseFaceReviewResult::GetCategory() const
{
    return m_category;
}

void FuseFaceReviewResult::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool FuseFaceReviewResult::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string FuseFaceReviewResult::GetCode() const
{
    return m_code;
}

void FuseFaceReviewResult::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool FuseFaceReviewResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string FuseFaceReviewResult::GetCodeDescription() const
{
    return m_codeDescription;
}

void FuseFaceReviewResult::SetCodeDescription(const string& _codeDescription)
{
    m_codeDescription = _codeDescription;
    m_codeDescriptionHasBeenSet = true;
}

bool FuseFaceReviewResult::CodeDescriptionHasBeenSet() const
{
    return m_codeDescriptionHasBeenSet;
}

double FuseFaceReviewResult::GetConfidence() const
{
    return m_confidence;
}

void FuseFaceReviewResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool FuseFaceReviewResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string FuseFaceReviewResult::GetSuggestion() const
{
    return m_suggestion;
}

void FuseFaceReviewResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool FuseFaceReviewResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

vector<FuseFaceReviewDetail> FuseFaceReviewResult::GetDetailSet() const
{
    return m_detailSet;
}

void FuseFaceReviewResult::SetDetailSet(const vector<FuseFaceReviewDetail>& _detailSet)
{
    m_detailSet = _detailSet;
    m_detailSetHasBeenSet = true;
}

bool FuseFaceReviewResult::DetailSetHasBeenSet() const
{
    return m_detailSetHasBeenSet;
}

