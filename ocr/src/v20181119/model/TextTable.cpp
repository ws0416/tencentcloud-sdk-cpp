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

#include <tencentcloud/ocr/v20181119/model/TextTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

TextTable::TextTable() :
    m_colTlHasBeenSet(false),
    m_rowTlHasBeenSet(false),
    m_colBrHasBeenSet(false),
    m_rowBrHasBeenSet(false),
    m_textHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_polygonHasBeenSet(false),
    m_advancedInfoHasBeenSet(false)
{
}

CoreInternalOutcome TextTable::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ColTl") && !value["ColTl"].IsNull())
    {
        if (!value["ColTl"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextTable.ColTl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_colTl = value["ColTl"].GetInt64();
        m_colTlHasBeenSet = true;
    }

    if (value.HasMember("RowTl") && !value["RowTl"].IsNull())
    {
        if (!value["RowTl"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextTable.RowTl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowTl = value["RowTl"].GetInt64();
        m_rowTlHasBeenSet = true;
    }

    if (value.HasMember("ColBr") && !value["ColBr"].IsNull())
    {
        if (!value["ColBr"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextTable.ColBr` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_colBr = value["ColBr"].GetInt64();
        m_colBrHasBeenSet = true;
    }

    if (value.HasMember("RowBr") && !value["RowBr"].IsNull())
    {
        if (!value["RowBr"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextTable.RowBr` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowBr = value["RowBr"].GetInt64();
        m_rowBrHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextTable.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextTable.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TextTable.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsArray())
            return CoreInternalOutcome(Error("response `TextTable.Polygon` is not array type"));

        const Value &tmpValue = value["Polygon"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_polygon.push_back(item);
        }
        m_polygonHasBeenSet = true;
    }

    if (value.HasMember("AdvancedInfo") && !value["AdvancedInfo"].IsNull())
    {
        if (!value["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `TextTable.AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(value["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextTable::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_colTlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ColTl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_colTl, allocator);
    }

    if (m_rowTlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowTl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowTl, allocator);
    }

    if (m_colBrHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ColBr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_colBr, allocator);
    }

    if (m_rowBrHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowBr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowBr, allocator);
    }

    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_polygonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_polygon.begin(); itr != m_polygon.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_advancedInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
    }

}


int64_t TextTable::GetColTl() const
{
    return m_colTl;
}

void TextTable::SetColTl(const int64_t& _colTl)
{
    m_colTl = _colTl;
    m_colTlHasBeenSet = true;
}

bool TextTable::ColTlHasBeenSet() const
{
    return m_colTlHasBeenSet;
}

int64_t TextTable::GetRowTl() const
{
    return m_rowTl;
}

void TextTable::SetRowTl(const int64_t& _rowTl)
{
    m_rowTl = _rowTl;
    m_rowTlHasBeenSet = true;
}

bool TextTable::RowTlHasBeenSet() const
{
    return m_rowTlHasBeenSet;
}

int64_t TextTable::GetColBr() const
{
    return m_colBr;
}

void TextTable::SetColBr(const int64_t& _colBr)
{
    m_colBr = _colBr;
    m_colBrHasBeenSet = true;
}

bool TextTable::ColBrHasBeenSet() const
{
    return m_colBrHasBeenSet;
}

int64_t TextTable::GetRowBr() const
{
    return m_rowBr;
}

void TextTable::SetRowBr(const int64_t& _rowBr)
{
    m_rowBr = _rowBr;
    m_rowBrHasBeenSet = true;
}

bool TextTable::RowBrHasBeenSet() const
{
    return m_rowBrHasBeenSet;
}

string TextTable::GetText() const
{
    return m_text;
}

void TextTable::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextTable::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string TextTable::GetType() const
{
    return m_type;
}

void TextTable::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TextTable::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t TextTable::GetConfidence() const
{
    return m_confidence;
}

void TextTable::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool TextTable::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<Coord> TextTable::GetPolygon() const
{
    return m_polygon;
}

void TextTable::SetPolygon(const vector<Coord>& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool TextTable::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

string TextTable::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

void TextTable::SetAdvancedInfo(const string& _advancedInfo)
{
    m_advancedInfo = _advancedInfo;
    m_advancedInfoHasBeenSet = true;
}

bool TextTable::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

