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

#include <tencentcloud/ocr/v20181119/model/QuestionBlockObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

QuestionBlockObj::QuestionBlockObj() :
    m_questionArrHasBeenSet(false)
{
}

CoreInternalOutcome QuestionBlockObj::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("QuestionArr") && !value["QuestionArr"].IsNull())
    {
        if (!value["QuestionArr"].IsArray())
            return CoreInternalOutcome(Error("response `QuestionBlockObj.QuestionArr` is not array type"));

        const Value &tmpValue = value["QuestionArr"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuestionObj item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_questionArr.push_back(item);
        }
        m_questionArrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuestionBlockObj::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_questionArrHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QuestionArr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_questionArr.begin(); itr != m_questionArr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<QuestionObj> QuestionBlockObj::GetQuestionArr() const
{
    return m_questionArr;
}

void QuestionBlockObj::SetQuestionArr(const vector<QuestionObj>& _questionArr)
{
    m_questionArr = _questionArr;
    m_questionArrHasBeenSet = true;
}

bool QuestionBlockObj::QuestionArrHasBeenSet() const
{
    return m_questionArrHasBeenSet;
}

