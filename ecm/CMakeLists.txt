#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(ecm_public_header
  include/tencentcloud/ecm/v20190719/EcmClient.h
  )

set(ecm_public_header_model
  include/tencentcloud/ecm/v20190719/model/RunEIPDirectServiceEnabled.h
  include/tencentcloud/ecm/v20190719/model/DescribeTaskResultResponse.h
  include/tencentcloud/ecm/v20190719/model/Ipv6Address.h
  include/tencentcloud/ecm/v20190719/model/DescribePeakBaseOverviewRequest.h
  include/tencentcloud/ecm/v20190719/model/SecurityGroupAssociationStatistics.h
  include/tencentcloud/ecm/v20190719/model/SecurityGroupLimitSet.h
  include/tencentcloud/ecm/v20190719/model/DisassociateAddressResponse.h
  include/tencentcloud/ecm/v20190719/model/CreateNetworkInterfaceRequest.h
  include/tencentcloud/ecm/v20190719/model/InstanceStatistic.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleSecurityGroupsRequest.h
  include/tencentcloud/ecm/v20190719/model/Internet.h
  include/tencentcloud/ecm/v20190719/model/DescribeModuleResponse.h
  include/tencentcloud/ecm/v20190719/model/DeleteSecurityGroupPoliciesRequest.h
  include/tencentcloud/ecm/v20190719/model/ImageTask.h
  include/tencentcloud/ecm/v20190719/model/Province.h
  include/tencentcloud/ecm/v20190719/model/ImportCustomImageResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleConfigResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleNameResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeNetworkInterfacesRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeSubnetsRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeImportImageOsResponse.h
  include/tencentcloud/ecm/v20190719/model/EipQuota.h
  include/tencentcloud/ecm/v20190719/model/DeleteSubnetResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyAddressesBandwidthResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeSubnetsResponse.h
  include/tencentcloud/ecm/v20190719/model/RunInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/ReleaseAddressesRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/NetworkInterface.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleSecurityGroupsResponse.h
  include/tencentcloud/ecm/v20190719/model/SrcImage.h
  include/tencentcloud/ecm/v20190719/model/InstanceTypeConfig.h
  include/tencentcloud/ecm/v20190719/model/DescribeNodeResponse.h
  include/tencentcloud/ecm/v20190719/model/RemovePrivateIpAddressesResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeDefaultSubnetResponse.h
  include/tencentcloud/ecm/v20190719/model/VpcInfo.h
  include/tencentcloud/ecm/v20190719/model/ReplaceSecurityGroupPolicyRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeCustomImageTaskResponse.h
  include/tencentcloud/ecm/v20190719/model/SecurityGroup.h
  include/tencentcloud/ecm/v20190719/model/DeleteSubnetRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeModuleRequest.h
  include/tencentcloud/ecm/v20190719/model/Position.h
  include/tencentcloud/ecm/v20190719/model/CreateModuleResponse.h
  include/tencentcloud/ecm/v20190719/model/RebootInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/AllocateAddressesRequest.h
  include/tencentcloud/ecm/v20190719/model/DeleteNetworkInterfaceRequest.h
  include/tencentcloud/ecm/v20190719/model/RemovePrivateIpAddressesRequest.h
  include/tencentcloud/ecm/v20190719/model/SecurityGroupPolicy.h
  include/tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeRequest.h
  include/tencentcloud/ecm/v20190719/model/InstanceFamilyTypeConfig.h
  include/tencentcloud/ecm/v20190719/model/ResetInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeImageRequest.h
  include/tencentcloud/ecm/v20190719/model/MigratePrivateIpAddressRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifySubnetAttributeResponse.h
  include/tencentcloud/ecm/v20190719/model/ZoneInfo.h
  include/tencentcloud/ecm/v20190719/model/DescribeNodeRequest.h
  include/tencentcloud/ecm/v20190719/model/CreateSubnetResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeSecurityGroupPoliciesResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleConfigRequest.h
  include/tencentcloud/ecm/v20190719/model/Area.h
  include/tencentcloud/ecm/v20190719/model/ModifySecurityGroupPoliciesRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeConfigRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstanceVncUrlRequest.h
  include/tencentcloud/ecm/v20190719/model/NetworkStorageRange.h
  include/tencentcloud/ecm/v20190719/model/StartInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/CreateVpcResponse.h
  include/tencentcloud/ecm/v20190719/model/AssistantCidr.h
  include/tencentcloud/ecm/v20190719/model/DescribeTaskStatusResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleIpDirectRequest.h
  include/tencentcloud/ecm/v20190719/model/CreateModuleRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeResponse.h
  include/tencentcloud/ecm/v20190719/model/ReleaseAddressesResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsResponse.h
  include/tencentcloud/ecm/v20190719/model/DisassociateAddressRequest.h
  include/tencentcloud/ecm/v20190719/model/TaskOutput.h
  include/tencentcloud/ecm/v20190719/model/ModuleCounter.h
  include/tencentcloud/ecm/v20190719/model/ReplaceSecurityGroupPolicyResponse.h
  include/tencentcloud/ecm/v20190719/model/ZoneInstanceCountISP.h
  include/tencentcloud/ecm/v20190719/model/TaskInput.h
  include/tencentcloud/ecm/v20190719/model/StartInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/Tag.h
  include/tencentcloud/ecm/v20190719/model/CreateSubnetRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeDefaultSubnetRequest.h
  include/tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthResponse.h
  include/tencentcloud/ecm/v20190719/model/DeleteSecurityGroupResponse.h
  include/tencentcloud/ecm/v20190719/model/DeleteVpcRequest.h
  include/tencentcloud/ecm/v20190719/model/CreateNetworkInterfaceResponse.h
  include/tencentcloud/ecm/v20190719/model/Node.h
  include/tencentcloud/ecm/v20190719/model/RunInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeAddressQuotaRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigResponse.h
  include/tencentcloud/ecm/v20190719/model/NodeInstanceNum.h
  include/tencentcloud/ecm/v20190719/model/DescribeSecurityGroupLimitsResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeAddressesResponse.h
  include/tencentcloud/ecm/v20190719/model/SecurityGroupPolicySet.h
  include/tencentcloud/ecm/v20190719/model/DescribeSecurityGroupsResponse.h
  include/tencentcloud/ecm/v20190719/model/ImportImageRequest.h
  include/tencentcloud/ecm/v20190719/model/DetachNetworkInterfaceResponse.h
  include/tencentcloud/ecm/v20190719/model/InstanceFamilyConfig.h
  include/tencentcloud/ecm/v20190719/model/DeleteModuleRequest.h
  include/tencentcloud/ecm/v20190719/model/CreateImageResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyVpcAttributeRequest.h
  include/tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthRequest.h
  include/tencentcloud/ecm/v20190719/model/OsVersion.h
  include/tencentcloud/ecm/v20190719/model/ServiceTemplateSpecification.h
  include/tencentcloud/ecm/v20190719/model/PeakBase.h
  include/tencentcloud/ecm/v20190719/model/ResetInstancesPasswordResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleNetworkRequest.h
  include/tencentcloud/ecm/v20190719/model/Image.h
  include/tencentcloud/ecm/v20190719/model/TagSpecification.h
  include/tencentcloud/ecm/v20190719/model/DetachNetworkInterfaceRequest.h
  include/tencentcloud/ecm/v20190719/model/AddressTemplateSpecification.h
  include/tencentcloud/ecm/v20190719/model/DescribeConfigResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleNetworkResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyDefaultSubnetResponse.h
  include/tencentcloud/ecm/v20190719/model/AssociateSecurityGroupsRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeModuleDetailResponse.h
  include/tencentcloud/ecm/v20190719/model/StopInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/Subnet.h
  include/tencentcloud/ecm/v20190719/model/ModifyVpcAttributeResponse.h
  include/tencentcloud/ecm/v20190719/model/DeleteVpcResponse.h
  include/tencentcloud/ecm/v20190719/model/ImageUrl.h
  include/tencentcloud/ecm/v20190719/model/ISP.h
  include/tencentcloud/ecm/v20190719/model/PrivateIpAddressSpecification.h
  include/tencentcloud/ecm/v20190719/model/ModifySecurityGroupAttributeResponse.h
  include/tencentcloud/ecm/v20190719/model/ISPCounter.h
  include/tencentcloud/ecm/v20190719/model/MigratePrivateIpAddressResponse.h
  include/tencentcloud/ecm/v20190719/model/CreateImageRequest.h
  include/tencentcloud/ecm/v20190719/model/Instance.h
  include/tencentcloud/ecm/v20190719/model/EnhancedService.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstanceVncUrlResponse.h
  include/tencentcloud/ecm/v20190719/model/DeleteModuleResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigRequest.h
  include/tencentcloud/ecm/v20190719/model/ImportCustomImageRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeModuleDetailRequest.h
  include/tencentcloud/ecm/v20190719/model/AssociateAddressRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifySecurityGroupAttributeRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifySecurityGroupPoliciesResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribePeakNetworkOverviewResponse.h
  include/tencentcloud/ecm/v20190719/model/AttachNetworkInterfaceResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeVpcsRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeBaseOverviewRequest.h
  include/tencentcloud/ecm/v20190719/model/AssociateSecurityGroupsResponse.h
  include/tencentcloud/ecm/v20190719/model/DiskInfo.h
  include/tencentcloud/ecm/v20190719/model/DescribeImportImageOsRequest.h
  include/tencentcloud/ecm/v20190719/model/NetworkInterfaceAttachment.h
  include/tencentcloud/ecm/v20190719/model/StopInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleIpDirectResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleNameRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifyDefaultSubnetRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeTaskResultRequest.h
  include/tencentcloud/ecm/v20190719/model/VirtualPrivateCloud.h
  include/tencentcloud/ecm/v20190719/model/AssociateAddressResponse.h
  include/tencentcloud/ecm/v20190719/model/Filter.h
  include/tencentcloud/ecm/v20190719/model/PublicIPAddressInfo.h
  include/tencentcloud/ecm/v20190719/model/TerminateInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeAddressesRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeSecurityGroupPoliciesRequest.h
  include/tencentcloud/ecm/v20190719/model/MigrateNetworkInterfaceRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeAddressQuotaResponse.h
  include/tencentcloud/ecm/v20190719/model/CreateSecurityGroupPoliciesResponse.h
  include/tencentcloud/ecm/v20190719/model/CreateSecurityGroupResponse.h
  include/tencentcloud/ecm/v20190719/model/ZoneInstanceInfo.h
  include/tencentcloud/ecm/v20190719/model/DescribeTaskStatusRequest.h
  include/tencentcloud/ecm/v20190719/model/DeleteSecurityGroupRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifyAddressAttributeRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleImageResponse.h
  include/tencentcloud/ecm/v20190719/model/ResetInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/PeakNetwork.h
  include/tencentcloud/ecm/v20190719/model/DescribeCustomImageTaskRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeSecurityGroupAssociationStatisticsResponse.h
  include/tencentcloud/ecm/v20190719/model/ImageOsList.h
  include/tencentcloud/ecm/v20190719/model/InstanceOperator.h
  include/tencentcloud/ecm/v20190719/model/ModifyAddressAttributeResponse.h
  include/tencentcloud/ecm/v20190719/model/ImportImageResponse.h
  include/tencentcloud/ecm/v20190719/model/CreateSecurityGroupRequest.h
  include/tencentcloud/ecm/v20190719/model/DescribeSecurityGroupLimitsRequest.h
  include/tencentcloud/ecm/v20190719/model/City.h
  include/tencentcloud/ecm/v20190719/model/PrivateIPAddressInfo.h
  include/tencentcloud/ecm/v20190719/model/TerminateInstancesRequest.h
  include/tencentcloud/ecm/v20190719/model/DeleteNetworkInterfaceResponse.h
  include/tencentcloud/ecm/v20190719/model/SimpleModule.h
  include/tencentcloud/ecm/v20190719/model/DescribePeakNetworkOverviewRequest.h
  include/tencentcloud/ecm/v20190719/model/AssignPrivateIpAddressesResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeSecurityGroupsRequest.h
  include/tencentcloud/ecm/v20190719/model/PeakNetworkRegionInfo.h
  include/tencentcloud/ecm/v20190719/model/RebootInstancesResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyAddressesBandwidthRequest.h
  include/tencentcloud/ecm/v20190719/model/DeleteSecurityGroupPoliciesResponse.h
  include/tencentcloud/ecm/v20190719/model/PeakFamilyInfo.h
  include/tencentcloud/ecm/v20190719/model/DescribePeakBaseOverviewResponse.h
  include/tencentcloud/ecm/v20190719/model/ModifyImageAttributeResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeImageResponse.h
  include/tencentcloud/ecm/v20190719/model/RegionInfo.h
  include/tencentcloud/ecm/v20190719/model/DeleteImageResponse.h
  include/tencentcloud/ecm/v20190719/model/Address.h
  include/tencentcloud/ecm/v20190719/model/DescribeNetworkInterfacesResponse.h
  include/tencentcloud/ecm/v20190719/model/AssignPrivateIpAddressesRequest.h
  include/tencentcloud/ecm/v20190719/model/ResetInstancesPasswordRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifyImageAttributeRequest.h
  include/tencentcloud/ecm/v20190719/model/OperatorAction.h
  include/tencentcloud/ecm/v20190719/model/CreateVpcRequest.h
  include/tencentcloud/ecm/v20190719/model/RunSecurityServiceEnabled.h
  include/tencentcloud/ecm/v20190719/model/DescribeSecurityGroupAssociationStatisticsRequest.h
  include/tencentcloud/ecm/v20190719/model/Country.h
  include/tencentcloud/ecm/v20190719/model/DisassociateSecurityGroupsRequest.h
  include/tencentcloud/ecm/v20190719/model/ModifySubnetAttributeRequest.h
  include/tencentcloud/ecm/v20190719/model/AllocateAddressesResponse.h
  include/tencentcloud/ecm/v20190719/model/AttachNetworkInterfaceRequest.h
  include/tencentcloud/ecm/v20190719/model/ModuleItem.h
  include/tencentcloud/ecm/v20190719/model/ModifyModuleImageRequest.h
  include/tencentcloud/ecm/v20190719/model/CreateSecurityGroupPoliciesRequest.h
  include/tencentcloud/ecm/v20190719/model/RunMonitorServiceEnabled.h
  include/tencentcloud/ecm/v20190719/model/MigrateNetworkInterfaceResponse.h
  include/tencentcloud/ecm/v20190719/model/DescribeVpcsResponse.h
  include/tencentcloud/ecm/v20190719/model/DeleteImageRequest.h
  include/tencentcloud/ecm/v20190719/model/Module.h
  include/tencentcloud/ecm/v20190719/model/DescribeBaseOverviewResponse.h
  include/tencentcloud/ecm/v20190719/model/DisassociateSecurityGroupsResponse.h
  )

set(ecm_src
  src/v20190719/EcmClient.cpp
  src/v20190719/model/RunEIPDirectServiceEnabled.cpp
  src/v20190719/model/DescribeTaskResultResponse.cpp
  src/v20190719/model/Ipv6Address.cpp
  src/v20190719/model/DescribePeakBaseOverviewRequest.cpp
  src/v20190719/model/SecurityGroupAssociationStatistics.cpp
  src/v20190719/model/SecurityGroupLimitSet.cpp
  src/v20190719/model/DisassociateAddressResponse.cpp
  src/v20190719/model/CreateNetworkInterfaceRequest.cpp
  src/v20190719/model/InstanceStatistic.cpp
  src/v20190719/model/DescribeInstancesDeniedActionsRequest.cpp
  src/v20190719/model/ModifyModuleSecurityGroupsRequest.cpp
  src/v20190719/model/Internet.cpp
  src/v20190719/model/DescribeModuleResponse.cpp
  src/v20190719/model/DeleteSecurityGroupPoliciesRequest.cpp
  src/v20190719/model/ImageTask.cpp
  src/v20190719/model/Province.cpp
  src/v20190719/model/ImportCustomImageResponse.cpp
  src/v20190719/model/ModifyModuleConfigResponse.cpp
  src/v20190719/model/ModifyModuleNameResponse.cpp
  src/v20190719/model/DescribeNetworkInterfacesRequest.cpp
  src/v20190719/model/DescribeSubnetsRequest.cpp
  src/v20190719/model/DescribeImportImageOsResponse.cpp
  src/v20190719/model/EipQuota.cpp
  src/v20190719/model/DeleteSubnetResponse.cpp
  src/v20190719/model/ModifyAddressesBandwidthResponse.cpp
  src/v20190719/model/DescribeSubnetsResponse.cpp
  src/v20190719/model/RunInstancesRequest.cpp
  src/v20190719/model/ReleaseAddressesRequest.cpp
  src/v20190719/model/DescribeInstancesResponse.cpp
  src/v20190719/model/NetworkInterface.cpp
  src/v20190719/model/ModifyModuleSecurityGroupsResponse.cpp
  src/v20190719/model/SrcImage.cpp
  src/v20190719/model/InstanceTypeConfig.cpp
  src/v20190719/model/DescribeNodeResponse.cpp
  src/v20190719/model/RemovePrivateIpAddressesResponse.cpp
  src/v20190719/model/DescribeDefaultSubnetResponse.cpp
  src/v20190719/model/VpcInfo.cpp
  src/v20190719/model/ReplaceSecurityGroupPolicyRequest.cpp
  src/v20190719/model/DescribeCustomImageTaskResponse.cpp
  src/v20190719/model/SecurityGroup.cpp
  src/v20190719/model/DeleteSubnetRequest.cpp
  src/v20190719/model/DescribeModuleRequest.cpp
  src/v20190719/model/Position.cpp
  src/v20190719/model/CreateModuleResponse.cpp
  src/v20190719/model/RebootInstancesRequest.cpp
  src/v20190719/model/AllocateAddressesRequest.cpp
  src/v20190719/model/DeleteNetworkInterfaceRequest.cpp
  src/v20190719/model/RemovePrivateIpAddressesRequest.cpp
  src/v20190719/model/SecurityGroupPolicy.cpp
  src/v20190719/model/ModifyInstancesAttributeRequest.cpp
  src/v20190719/model/InstanceFamilyTypeConfig.cpp
  src/v20190719/model/ResetInstancesResponse.cpp
  src/v20190719/model/DescribeImageRequest.cpp
  src/v20190719/model/MigratePrivateIpAddressRequest.cpp
  src/v20190719/model/ModifySubnetAttributeResponse.cpp
  src/v20190719/model/ZoneInfo.cpp
  src/v20190719/model/DescribeNodeRequest.cpp
  src/v20190719/model/CreateSubnetResponse.cpp
  src/v20190719/model/DescribeSecurityGroupPoliciesResponse.cpp
  src/v20190719/model/ModifyModuleConfigRequest.cpp
  src/v20190719/model/Area.cpp
  src/v20190719/model/ModifySecurityGroupPoliciesRequest.cpp
  src/v20190719/model/DescribeConfigRequest.cpp
  src/v20190719/model/DescribeInstanceVncUrlRequest.cpp
  src/v20190719/model/NetworkStorageRange.cpp
  src/v20190719/model/StartInstancesResponse.cpp
  src/v20190719/model/CreateVpcResponse.cpp
  src/v20190719/model/AssistantCidr.cpp
  src/v20190719/model/DescribeTaskStatusResponse.cpp
  src/v20190719/model/ModifyModuleIpDirectRequest.cpp
  src/v20190719/model/CreateModuleRequest.cpp
  src/v20190719/model/ModifyInstancesAttributeResponse.cpp
  src/v20190719/model/ReleaseAddressesResponse.cpp
  src/v20190719/model/DescribeInstancesDeniedActionsResponse.cpp
  src/v20190719/model/DisassociateAddressRequest.cpp
  src/v20190719/model/TaskOutput.cpp
  src/v20190719/model/ModuleCounter.cpp
  src/v20190719/model/ReplaceSecurityGroupPolicyResponse.cpp
  src/v20190719/model/ZoneInstanceCountISP.cpp
  src/v20190719/model/TaskInput.cpp
  src/v20190719/model/StartInstancesRequest.cpp
  src/v20190719/model/Tag.cpp
  src/v20190719/model/CreateSubnetRequest.cpp
  src/v20190719/model/DescribeDefaultSubnetRequest.cpp
  src/v20190719/model/ResetInstancesMaxBandwidthResponse.cpp
  src/v20190719/model/DeleteSecurityGroupResponse.cpp
  src/v20190719/model/DeleteVpcRequest.cpp
  src/v20190719/model/CreateNetworkInterfaceResponse.cpp
  src/v20190719/model/Node.cpp
  src/v20190719/model/RunInstancesResponse.cpp
  src/v20190719/model/DescribeAddressQuotaRequest.cpp
  src/v20190719/model/DescribeInstanceTypeConfigResponse.cpp
  src/v20190719/model/NodeInstanceNum.cpp
  src/v20190719/model/DescribeSecurityGroupLimitsResponse.cpp
  src/v20190719/model/DescribeAddressesResponse.cpp
  src/v20190719/model/SecurityGroupPolicySet.cpp
  src/v20190719/model/DescribeSecurityGroupsResponse.cpp
  src/v20190719/model/ImportImageRequest.cpp
  src/v20190719/model/DetachNetworkInterfaceResponse.cpp
  src/v20190719/model/InstanceFamilyConfig.cpp
  src/v20190719/model/DeleteModuleRequest.cpp
  src/v20190719/model/CreateImageResponse.cpp
  src/v20190719/model/ModifyVpcAttributeRequest.cpp
  src/v20190719/model/ResetInstancesMaxBandwidthRequest.cpp
  src/v20190719/model/OsVersion.cpp
  src/v20190719/model/ServiceTemplateSpecification.cpp
  src/v20190719/model/PeakBase.cpp
  src/v20190719/model/ResetInstancesPasswordResponse.cpp
  src/v20190719/model/ModifyModuleNetworkRequest.cpp
  src/v20190719/model/Image.cpp
  src/v20190719/model/TagSpecification.cpp
  src/v20190719/model/DetachNetworkInterfaceRequest.cpp
  src/v20190719/model/AddressTemplateSpecification.cpp
  src/v20190719/model/DescribeConfigResponse.cpp
  src/v20190719/model/ModifyModuleNetworkResponse.cpp
  src/v20190719/model/ModifyDefaultSubnetResponse.cpp
  src/v20190719/model/AssociateSecurityGroupsRequest.cpp
  src/v20190719/model/DescribeModuleDetailResponse.cpp
  src/v20190719/model/StopInstancesRequest.cpp
  src/v20190719/model/Subnet.cpp
  src/v20190719/model/ModifyVpcAttributeResponse.cpp
  src/v20190719/model/DeleteVpcResponse.cpp
  src/v20190719/model/ImageUrl.cpp
  src/v20190719/model/ISP.cpp
  src/v20190719/model/PrivateIpAddressSpecification.cpp
  src/v20190719/model/ModifySecurityGroupAttributeResponse.cpp
  src/v20190719/model/ISPCounter.cpp
  src/v20190719/model/MigratePrivateIpAddressResponse.cpp
  src/v20190719/model/CreateImageRequest.cpp
  src/v20190719/model/Instance.cpp
  src/v20190719/model/EnhancedService.cpp
  src/v20190719/model/DescribeInstanceVncUrlResponse.cpp
  src/v20190719/model/DeleteModuleResponse.cpp
  src/v20190719/model/DescribeInstanceTypeConfigRequest.cpp
  src/v20190719/model/ImportCustomImageRequest.cpp
  src/v20190719/model/DescribeModuleDetailRequest.cpp
  src/v20190719/model/AssociateAddressRequest.cpp
  src/v20190719/model/ModifySecurityGroupAttributeRequest.cpp
  src/v20190719/model/ModifySecurityGroupPoliciesResponse.cpp
  src/v20190719/model/DescribePeakNetworkOverviewResponse.cpp
  src/v20190719/model/AttachNetworkInterfaceResponse.cpp
  src/v20190719/model/DescribeVpcsRequest.cpp
  src/v20190719/model/DescribeBaseOverviewRequest.cpp
  src/v20190719/model/AssociateSecurityGroupsResponse.cpp
  src/v20190719/model/DiskInfo.cpp
  src/v20190719/model/DescribeImportImageOsRequest.cpp
  src/v20190719/model/NetworkInterfaceAttachment.cpp
  src/v20190719/model/StopInstancesResponse.cpp
  src/v20190719/model/ModifyModuleIpDirectResponse.cpp
  src/v20190719/model/ModifyModuleNameRequest.cpp
  src/v20190719/model/ModifyDefaultSubnetRequest.cpp
  src/v20190719/model/DescribeInstancesRequest.cpp
  src/v20190719/model/DescribeTaskResultRequest.cpp
  src/v20190719/model/VirtualPrivateCloud.cpp
  src/v20190719/model/AssociateAddressResponse.cpp
  src/v20190719/model/Filter.cpp
  src/v20190719/model/PublicIPAddressInfo.cpp
  src/v20190719/model/TerminateInstancesResponse.cpp
  src/v20190719/model/DescribeAddressesRequest.cpp
  src/v20190719/model/DescribeSecurityGroupPoliciesRequest.cpp
  src/v20190719/model/MigrateNetworkInterfaceRequest.cpp
  src/v20190719/model/DescribeAddressQuotaResponse.cpp
  src/v20190719/model/CreateSecurityGroupPoliciesResponse.cpp
  src/v20190719/model/CreateSecurityGroupResponse.cpp
  src/v20190719/model/ZoneInstanceInfo.cpp
  src/v20190719/model/DescribeTaskStatusRequest.cpp
  src/v20190719/model/DeleteSecurityGroupRequest.cpp
  src/v20190719/model/ModifyAddressAttributeRequest.cpp
  src/v20190719/model/ModifyModuleImageResponse.cpp
  src/v20190719/model/ResetInstancesRequest.cpp
  src/v20190719/model/PeakNetwork.cpp
  src/v20190719/model/DescribeCustomImageTaskRequest.cpp
  src/v20190719/model/DescribeSecurityGroupAssociationStatisticsResponse.cpp
  src/v20190719/model/ImageOsList.cpp
  src/v20190719/model/InstanceOperator.cpp
  src/v20190719/model/ModifyAddressAttributeResponse.cpp
  src/v20190719/model/ImportImageResponse.cpp
  src/v20190719/model/CreateSecurityGroupRequest.cpp
  src/v20190719/model/DescribeSecurityGroupLimitsRequest.cpp
  src/v20190719/model/City.cpp
  src/v20190719/model/PrivateIPAddressInfo.cpp
  src/v20190719/model/TerminateInstancesRequest.cpp
  src/v20190719/model/DeleteNetworkInterfaceResponse.cpp
  src/v20190719/model/SimpleModule.cpp
  src/v20190719/model/DescribePeakNetworkOverviewRequest.cpp
  src/v20190719/model/AssignPrivateIpAddressesResponse.cpp
  src/v20190719/model/DescribeSecurityGroupsRequest.cpp
  src/v20190719/model/PeakNetworkRegionInfo.cpp
  src/v20190719/model/RebootInstancesResponse.cpp
  src/v20190719/model/ModifyAddressesBandwidthRequest.cpp
  src/v20190719/model/DeleteSecurityGroupPoliciesResponse.cpp
  src/v20190719/model/PeakFamilyInfo.cpp
  src/v20190719/model/DescribePeakBaseOverviewResponse.cpp
  src/v20190719/model/ModifyImageAttributeResponse.cpp
  src/v20190719/model/DescribeImageResponse.cpp
  src/v20190719/model/RegionInfo.cpp
  src/v20190719/model/DeleteImageResponse.cpp
  src/v20190719/model/Address.cpp
  src/v20190719/model/DescribeNetworkInterfacesResponse.cpp
  src/v20190719/model/AssignPrivateIpAddressesRequest.cpp
  src/v20190719/model/ResetInstancesPasswordRequest.cpp
  src/v20190719/model/ModifyImageAttributeRequest.cpp
  src/v20190719/model/OperatorAction.cpp
  src/v20190719/model/CreateVpcRequest.cpp
  src/v20190719/model/RunSecurityServiceEnabled.cpp
  src/v20190719/model/DescribeSecurityGroupAssociationStatisticsRequest.cpp
  src/v20190719/model/Country.cpp
  src/v20190719/model/DisassociateSecurityGroupsRequest.cpp
  src/v20190719/model/ModifySubnetAttributeRequest.cpp
  src/v20190719/model/AllocateAddressesResponse.cpp
  src/v20190719/model/AttachNetworkInterfaceRequest.cpp
  src/v20190719/model/ModuleItem.cpp
  src/v20190719/model/ModifyModuleImageRequest.cpp
  src/v20190719/model/CreateSecurityGroupPoliciesRequest.cpp
  src/v20190719/model/RunMonitorServiceEnabled.cpp
  src/v20190719/model/MigrateNetworkInterfaceResponse.cpp
  src/v20190719/model/DescribeVpcsResponse.cpp
  src/v20190719/model/DeleteImageRequest.cpp
  src/v20190719/model/Module.cpp
  src/v20190719/model/DescribeBaseOverviewResponse.cpp
  src/v20190719/model/DisassociateSecurityGroupsResponse.cpp
  )

set(ecm_include
    include/tencentcloud/ecm
  )

add_library(ecm ${LIB_TYPE}
  ${ecm_public_header}
  ${ecm_public_header_model}
  ${ecm_src})

set_target_properties(ecm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ecm
  )

target_include_directories(ecm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ecm
  core)

#install(FILES ${ecm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ecm/v20190719)
#install(FILES ${ecm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ecm/v20190719/model)
install(DIRECTORY ${ecm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ecm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
