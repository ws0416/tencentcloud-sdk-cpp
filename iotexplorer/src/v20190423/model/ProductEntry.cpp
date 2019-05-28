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

#include <tencentcloud/iotexplorer/v20190423/model/ProductEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace rapidjson;
using namespace std;

ProductEntry::ProductEntry() :
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_dataProtocolHasBeenSet(false),
    m_productDescHasBeenSet(false),
    m_devStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_moduleIdHasBeenSet(false)
{
}

CoreInternalOutcome ProductEntry::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("EncryptionType") && !value["EncryptionType"].IsNull())
    {
        if (!value["EncryptionType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.EncryptionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionType = string(value["EncryptionType"].GetString());
        m_encryptionTypeHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("DataProtocol") && !value["DataProtocol"].IsNull())
    {
        if (!value["DataProtocol"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.DataProtocol` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataProtocol = value["DataProtocol"].GetInt64();
        m_dataProtocolHasBeenSet = true;
    }

    if (value.HasMember("ProductDesc") && !value["ProductDesc"].IsNull())
    {
        if (!value["ProductDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.ProductDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDesc = string(value["ProductDesc"].GetString());
        m_productDescHasBeenSet = true;
    }

    if (value.HasMember("DevStatus") && !value["DevStatus"].IsNull())
    {
        if (!value["DevStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.DevStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devStatus = string(value["DevStatus"].GetString());
        m_devStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.ProductType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productType = value["ProductType"].GetInt64();
        m_productTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ModuleId") && !value["ModuleId"].IsNull())
    {
        if (!value["ModuleId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProductEntry.ModuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_moduleId = value["ModuleId"].GetInt64();
        m_moduleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductEntry::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_encryptionTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EncryptionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_encryptionType.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataProtocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataProtocol, allocator);
    }

    if (m_productDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_devStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DevStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_devStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productType, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_moduleId, allocator);
    }

}


string ProductEntry::GetProductId() const
{
    return m_productId;
}

void ProductEntry::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ProductEntry::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ProductEntry::GetProductName() const
{
    return m_productName;
}

void ProductEntry::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ProductEntry::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

int64_t ProductEntry::GetCategoryId() const
{
    return m_categoryId;
}

void ProductEntry::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ProductEntry::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string ProductEntry::GetEncryptionType() const
{
    return m_encryptionType;
}

void ProductEntry::SetEncryptionType(const string& _encryptionType)
{
    m_encryptionType = _encryptionType;
    m_encryptionTypeHasBeenSet = true;
}

bool ProductEntry::EncryptionTypeHasBeenSet() const
{
    return m_encryptionTypeHasBeenSet;
}

string ProductEntry::GetNetType() const
{
    return m_netType;
}

void ProductEntry::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool ProductEntry::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

int64_t ProductEntry::GetDataProtocol() const
{
    return m_dataProtocol;
}

void ProductEntry::SetDataProtocol(const int64_t& _dataProtocol)
{
    m_dataProtocol = _dataProtocol;
    m_dataProtocolHasBeenSet = true;
}

bool ProductEntry::DataProtocolHasBeenSet() const
{
    return m_dataProtocolHasBeenSet;
}

string ProductEntry::GetProductDesc() const
{
    return m_productDesc;
}

void ProductEntry::SetProductDesc(const string& _productDesc)
{
    m_productDesc = _productDesc;
    m_productDescHasBeenSet = true;
}

bool ProductEntry::ProductDescHasBeenSet() const
{
    return m_productDescHasBeenSet;
}

string ProductEntry::GetDevStatus() const
{
    return m_devStatus;
}

void ProductEntry::SetDevStatus(const string& _devStatus)
{
    m_devStatus = _devStatus;
    m_devStatusHasBeenSet = true;
}

bool ProductEntry::DevStatusHasBeenSet() const
{
    return m_devStatusHasBeenSet;
}

uint64_t ProductEntry::GetCreateTime() const
{
    return m_createTime;
}

void ProductEntry::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProductEntry::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ProductEntry::GetUpdateTime() const
{
    return m_updateTime;
}

void ProductEntry::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ProductEntry::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ProductEntry::GetRegion() const
{
    return m_region;
}

void ProductEntry::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ProductEntry::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t ProductEntry::GetProductType() const
{
    return m_productType;
}

void ProductEntry::SetProductType(const int64_t& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool ProductEntry::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string ProductEntry::GetProjectId() const
{
    return m_projectId;
}

void ProductEntry::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProductEntry::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ProductEntry::GetModuleId() const
{
    return m_moduleId;
}

void ProductEntry::SetModuleId(const int64_t& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool ProductEntry::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

