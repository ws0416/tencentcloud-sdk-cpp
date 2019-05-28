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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERENEWDISKSRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERENEWDISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/PrepayPrice.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewDisks返回参数结构体
                */
                class InquiryPriceRenewDisksResponse : public AbstractModel
                {
                public:
                    InquiryPriceRenewDisksResponse();
                    ~InquiryPriceRenewDisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取描述了续费云盘的价格。
                     * @return DiskPrice 描述了续费云盘的价格。
                     */
                    PrepayPrice GetDiskPrice() const;

                    /**
                     * 判断参数 DiskPrice 是否已赋值
                     * @return DiskPrice 是否已赋值
                     */
                    bool DiskPriceHasBeenSet() const;

                private:

                    /**
                     * 描述了续费云盘的价格。
                     */
                    PrepayPrice m_diskPrice;
                    bool m_diskPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERENEWDISKSRESPONSE_H_
