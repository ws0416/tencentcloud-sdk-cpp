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

#include <tencentcloud/faceid/v20180301/model/ImageRecognitionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

ImageRecognitionRequest::ImageRecognitionRequest() :
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_optionalHasBeenSet(false)
{
}

string ImageRecognitionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_optionalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Optional";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_optional.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImageRecognitionRequest::GetIdCard() const
{
    return m_idCard;
}

void ImageRecognitionRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool ImageRecognitionRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string ImageRecognitionRequest::GetName() const
{
    return m_name;
}

void ImageRecognitionRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageRecognitionRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImageRecognitionRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void ImageRecognitionRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool ImageRecognitionRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string ImageRecognitionRequest::GetOptional() const
{
    return m_optional;
}

void ImageRecognitionRequest::SetOptional(const string& _optional)
{
    m_optional = _optional;
    m_optionalHasBeenSet = true;
}

bool ImageRecognitionRequest::OptionalHasBeenSet() const
{
    return m_optionalHasBeenSet;
}


