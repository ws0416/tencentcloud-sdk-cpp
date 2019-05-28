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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SETCCNREGIONBANDWIDTHLIMITSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SETCCNREGIONBANDWIDTHLIMITSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRegionBandwidthLimit.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SetCcnRegionBandwidthLimits请求参数结构体
                */
                class SetCcnRegionBandwidthLimitsRequest : public AbstractModel
                {
                public:
                    SetCcnRegionBandwidthLimitsRequest();
                    ~SetCcnRegionBandwidthLimitsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CCN实例ID。形如：ccn-f49l6u0z。
                     * @return CcnId CCN实例ID。形如：ccn-f49l6u0z。
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置CCN实例ID。形如：ccn-f49l6u0z。
                     * @param CcnId CCN实例ID。形如：ccn-f49l6u0z。
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取云联网（CCN）各地域出带宽上限。
                     * @return CcnRegionBandwidthLimits 云联网（CCN）各地域出带宽上限。
                     */
                    std::vector<CcnRegionBandwidthLimit> GetCcnRegionBandwidthLimits() const;

                    /**
                     * 设置云联网（CCN）各地域出带宽上限。
                     * @param CcnRegionBandwidthLimits 云联网（CCN）各地域出带宽上限。
                     */
                    void SetCcnRegionBandwidthLimits(const std::vector<CcnRegionBandwidthLimit>& _ccnRegionBandwidthLimits);

                    /**
                     * 判断参数 CcnRegionBandwidthLimits 是否已赋值
                     * @return CcnRegionBandwidthLimits 是否已赋值
                     */
                    bool CcnRegionBandwidthLimitsHasBeenSet() const;

                private:

                    /**
                     * CCN实例ID。形如：ccn-f49l6u0z。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云联网（CCN）各地域出带宽上限。
                     */
                    std::vector<CcnRegionBandwidthLimit> m_ccnRegionBandwidthLimits;
                    bool m_ccnRegionBandwidthLimitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SETCCNREGIONBANDWIDTHLIMITSREQUEST_H_
