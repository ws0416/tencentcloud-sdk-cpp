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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEHOSTEDDEVICEOUTBANDINFORESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEHOSTEDDEVICEOUTBANDINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/HostedDeviceOutBandInfo.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeHostedDeviceOutBandInfo返回参数结构体
                */
                class DescribeHostedDeviceOutBandInfoResponse : public AbstractModel
                {
                public:
                    DescribeHostedDeviceOutBandInfoResponse();
                    ~DescribeHostedDeviceOutBandInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取托管设备带外信息
                     * @return HostedDeviceOutBandInfoSet 托管设备带外信息
                     */
                    std::vector<HostedDeviceOutBandInfo> GetHostedDeviceOutBandInfoSet() const;

                    /**
                     * 判断参数 HostedDeviceOutBandInfoSet 是否已赋值
                     * @return HostedDeviceOutBandInfoSet 是否已赋值
                     */
                    bool HostedDeviceOutBandInfoSetHasBeenSet() const;

                private:

                    /**
                     * 托管设备带外信息
                     */
                    std::vector<HostedDeviceOutBandInfo> m_hostedDeviceOutBandInfoSet;
                    bool m_hostedDeviceOutBandInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEHOSTEDDEVICEOUTBANDINFORESPONSE_H_
