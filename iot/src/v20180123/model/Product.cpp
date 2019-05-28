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

#include <tencentcloud/iot/v20180123/model/Product.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace rapidjson;
using namespace std;

Product::Product() :
    m_productIdHasBeenSet(false),
    m_productKeyHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_standardHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dataTemplateHasBeenSet(false),
    m_dataProtocolHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_commProtocolHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_associatedProductsHasBeenSet(false)
{
}

CoreInternalOutcome Product::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductKey") && !value["ProductKey"].IsNull())
    {
        if (!value["ProductKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.ProductKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productKey = string(value["ProductKey"].GetString());
        m_productKeyHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Product.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Standard") && !value["Standard"].IsNull())
    {
        if (!value["Standard"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Product.Standard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_standard = value["Standard"].GetUint64();
        m_standardHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Product.AuthType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetUint64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Product.Deleted` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetUint64();
        m_deletedHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DataTemplate") && !value["DataTemplate"].IsNull())
    {
        if (!value["DataTemplate"].IsArray())
            return CoreInternalOutcome(Error("response `Product.DataTemplate` is not array type"));

        const Value &tmpValue = value["DataTemplate"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataTemplate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataTemplate.push_back(item);
        }
        m_dataTemplateHasBeenSet = true;
    }

    if (value.HasMember("DataProtocol") && !value["DataProtocol"].IsNull())
    {
        if (!value["DataProtocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.DataProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataProtocol = string(value["DataProtocol"].GetString());
        m_dataProtocolHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("CommProtocol") && !value["CommProtocol"].IsNull())
    {
        if (!value["CommProtocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.CommProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commProtocol = string(value["CommProtocol"].GetString());
        m_commProtocolHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Product.Qps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetUint64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("AssociatedProducts") && !value["AssociatedProducts"].IsNull())
    {
        if (!value["AssociatedProducts"].IsArray())
            return CoreInternalOutcome(Error("response `Product.AssociatedProducts` is not array type"));

        const Value &tmpValue = value["AssociatedProducts"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_associatedProducts.push_back((*itr).GetString());
        }
        m_associatedProductsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Product::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productKey.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_standardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Standard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standard, allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_deletedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

    if (m_messageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTemplateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataTemplate.begin(); itr != m_dataTemplate.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataProtocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dataProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_commProtocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_commProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_qpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_associatedProductsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssociatedProducts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_associatedProducts.begin(); itr != m_associatedProducts.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Product::GetProductId() const
{
    return m_productId;
}

void Product::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool Product::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string Product::GetProductKey() const
{
    return m_productKey;
}

void Product::SetProductKey(const string& _productKey)
{
    m_productKey = _productKey;
    m_productKeyHasBeenSet = true;
}

bool Product::ProductKeyHasBeenSet() const
{
    return m_productKeyHasBeenSet;
}

uint64_t Product::GetAppId() const
{
    return m_appId;
}

void Product::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Product::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Product::GetName() const
{
    return m_name;
}

void Product::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Product::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Product::GetDescription() const
{
    return m_description;
}

void Product::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Product::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Product::GetDomain() const
{
    return m_domain;
}

void Product::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool Product::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t Product::GetStandard() const
{
    return m_standard;
}

void Product::SetStandard(const uint64_t& _standard)
{
    m_standard = _standard;
    m_standardHasBeenSet = true;
}

bool Product::StandardHasBeenSet() const
{
    return m_standardHasBeenSet;
}

uint64_t Product::GetAuthType() const
{
    return m_authType;
}

void Product::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool Product::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

uint64_t Product::GetDeleted() const
{
    return m_deleted;
}

void Product::SetDeleted(const uint64_t& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool Product::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

string Product::GetMessage() const
{
    return m_message;
}

void Product::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Product::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string Product::GetCreateTime() const
{
    return m_createTime;
}

void Product::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Product::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Product::GetUpdateTime() const
{
    return m_updateTime;
}

void Product::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Product::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<DataTemplate> Product::GetDataTemplate() const
{
    return m_dataTemplate;
}

void Product::SetDataTemplate(const vector<DataTemplate>& _dataTemplate)
{
    m_dataTemplate = _dataTemplate;
    m_dataTemplateHasBeenSet = true;
}

bool Product::DataTemplateHasBeenSet() const
{
    return m_dataTemplateHasBeenSet;
}

string Product::GetDataProtocol() const
{
    return m_dataProtocol;
}

void Product::SetDataProtocol(const string& _dataProtocol)
{
    m_dataProtocol = _dataProtocol;
    m_dataProtocolHasBeenSet = true;
}

bool Product::DataProtocolHasBeenSet() const
{
    return m_dataProtocolHasBeenSet;
}

string Product::GetUsername() const
{
    return m_username;
}

void Product::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool Product::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string Product::GetPassword() const
{
    return m_password;
}

void Product::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool Product::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string Product::GetCommProtocol() const
{
    return m_commProtocol;
}

void Product::SetCommProtocol(const string& _commProtocol)
{
    m_commProtocol = _commProtocol;
    m_commProtocolHasBeenSet = true;
}

bool Product::CommProtocolHasBeenSet() const
{
    return m_commProtocolHasBeenSet;
}

uint64_t Product::GetQps() const
{
    return m_qps;
}

void Product::SetQps(const uint64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool Product::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

string Product::GetRegion() const
{
    return m_region;
}

void Product::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Product::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Product::GetDeviceType() const
{
    return m_deviceType;
}

void Product::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool Product::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

vector<string> Product::GetAssociatedProducts() const
{
    return m_associatedProducts;
}

void Product::SetAssociatedProducts(const vector<string>& _associatedProducts)
{
    m_associatedProducts = _associatedProducts;
    m_associatedProductsHasBeenSet = true;
}

bool Product::AssociatedProductsHasBeenSet() const
{
    return m_associatedProductsHasBeenSet;
}

