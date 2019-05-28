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

#include <tencentcloud/live/v20180801/model/CreateLiveCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

CreateLiveCertRequest::CreateLiveCertRequest() :
    m_certTypeHasBeenSet(false),
    m_httpsCrtHasBeenSet(false),
    m_httpsKeyHasBeenSet(false),
    m_certNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateLiveCertRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certType, allocator);
    }

    if (m_httpsCrtHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HttpsCrt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_httpsCrt.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HttpsKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_httpsKey.c_str(), allocator).Move(), allocator);
    }

    if (m_certNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateLiveCertRequest::GetCertType() const
{
    return m_certType;
}

void CreateLiveCertRequest::SetCertType(const uint64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool CreateLiveCertRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string CreateLiveCertRequest::GetHttpsCrt() const
{
    return m_httpsCrt;
}

void CreateLiveCertRequest::SetHttpsCrt(const string& _httpsCrt)
{
    m_httpsCrt = _httpsCrt;
    m_httpsCrtHasBeenSet = true;
}

bool CreateLiveCertRequest::HttpsCrtHasBeenSet() const
{
    return m_httpsCrtHasBeenSet;
}

string CreateLiveCertRequest::GetHttpsKey() const
{
    return m_httpsKey;
}

void CreateLiveCertRequest::SetHttpsKey(const string& _httpsKey)
{
    m_httpsKey = _httpsKey;
    m_httpsKeyHasBeenSet = true;
}

bool CreateLiveCertRequest::HttpsKeyHasBeenSet() const
{
    return m_httpsKeyHasBeenSet;
}

string CreateLiveCertRequest::GetCertName() const
{
    return m_certName;
}

void CreateLiveCertRequest::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool CreateLiveCertRequest::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string CreateLiveCertRequest::GetDescription() const
{
    return m_description;
}

void CreateLiveCertRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLiveCertRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


