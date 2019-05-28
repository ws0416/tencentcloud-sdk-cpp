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

#include <tencentcloud/tbm/v20180129/model/CommentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbm::V20180129::Model;
using namespace rapidjson;
using namespace std;

CommentInfo::CommentInfo() :
    m_commentHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome CommentInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Error("response `CommentInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Error("response `CommentInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommentInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_date.c_str(), allocator).Move(), allocator);
    }

}


string CommentInfo::GetComment() const
{
    return m_comment;
}

void CommentInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CommentInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CommentInfo::GetDate() const
{
    return m_date;
}

void CommentInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool CommentInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

