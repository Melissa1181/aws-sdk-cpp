﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/NFSFileShareDefaults.h>
#include <aws/storagegateway/model/EncryptionType.h>
#include <aws/storagegateway/model/ObjectACL.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/CacheAttributes.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>CreateNFSFileShareInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateNFSFileShareInput">AWS
   * API Reference</a></p>
   */
  class CreateNFSFileShareRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API CreateNFSFileShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNFSFileShare"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique string value that you supply that is used by S3 File Gateway to
     * ensure idempotent file share creation.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateNFSFileShareRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateNFSFileShareRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>File share default values. Optional.</p>
     */
    inline const NFSFileShareDefaults& GetNFSFileShareDefaults() const{ return m_nFSFileShareDefaults; }
    inline bool NFSFileShareDefaultsHasBeenSet() const { return m_nFSFileShareDefaultsHasBeenSet; }
    inline void SetNFSFileShareDefaults(const NFSFileShareDefaults& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }
    inline void SetNFSFileShareDefaults(NFSFileShareDefaults&& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = std::move(value); }
    inline CreateNFSFileShareRequest& WithNFSFileShareDefaults(const NFSFileShareDefaults& value) { SetNFSFileShareDefaults(value); return *this;}
    inline CreateNFSFileShareRequest& WithNFSFileShareDefaults(NFSFileShareDefaults&& value) { SetNFSFileShareDefaults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 File Gateway on which you want to
     * create a file share.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline CreateNFSFileShareRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline CreateNFSFileShareRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the type of server-side encryption that the file share
     * will use for the data that it stores in Amazon S3.</p>  <p>We recommend
     * using <code>EncryptionType</code> instead of <code>KMSEncrypted</code> to set
     * the file share encryption method. You do not need to provide values for both
     * parameters.</p> <p>If values for both parameters exist in the same request, then
     * the specified encryption methods must not conflict. For example, if
     * <code>EncryptionType</code> is <code>SseS3</code>, then
     * <code>KMSEncrypted</code> must be <code>false</code>. If
     * <code>EncryptionType</code> is <code>SseKms</code> or <code>DsseKms</code>, then
     * <code>KMSEncrypted</code> must be <code>true</code>.</p> 
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }
    inline CreateNFSFileShareRequest& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}
    inline CreateNFSFileShareRequest& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The Amazon Resource Name (ARN) of a symmetric customer master key
     * (CMK) used for Amazon S3 server-side encryption. Storage Gateway does not
     * support asymmetric CMKs. This value must be set if <code>KMSEncrypted</code> is
     * <code>true</code>, or if <code>EncryptionType</code> is <code>SseKms</code> or
     * <code>DsseKms</code>.</p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }
    inline CreateNFSFileShareRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}
    inline CreateNFSFileShareRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that an S3 File
     * Gateway assumes when it accesses the underlying storage.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline CreateNFSFileShareRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline CreateNFSFileShareRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom ARN for the backend storage used for storing data for file shares.
     * It includes a resource ARN with an optional prefix concatenation. The prefix
     * must end with a forward slash (/).</p>  <p>You can specify LocationARN as
     * a bucket ARN, access point ARN or access point alias, as shown in the following
     * examples.</p> <p>Bucket ARN:</p> <p>
     * <code>arn:aws:s3:::amzn-s3-demo-bucket/prefix/</code> </p> <p>Access point
     * ARN:</p> <p>
     * <code>arn:aws:s3:region:account-id:accesspoint/access-point-name/prefix/</code>
     * </p> <p>If you specify an access point, the bucket policy must be configured to
     * delegate access control to the access point. For information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html#access-points-delegating-control">Delegating
     * access control to access points</a> in the <i>Amazon S3 User Guide</i>.</p>
     * <p>Access point alias:</p> <p>
     * <code>test-ap-ab123cdef4gehijklmn5opqrstuvuse1a-s3alias</code> </p> 
     */
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }
    inline CreateNFSFileShareRequest& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}
    inline CreateNFSFileShareRequest& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline const Aws::String& GetDefaultStorageClass() const{ return m_defaultStorageClass; }
    inline bool DefaultStorageClassHasBeenSet() const { return m_defaultStorageClassHasBeenSet; }
    inline void SetDefaultStorageClass(const Aws::String& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = value; }
    inline void SetDefaultStorageClass(Aws::String&& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = std::move(value); }
    inline void SetDefaultStorageClass(const char* value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass.assign(value); }
    inline CreateNFSFileShareRequest& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}
    inline CreateNFSFileShareRequest& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a S3 File Gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline const ObjectACL& GetObjectACL() const{ return m_objectACL; }
    inline bool ObjectACLHasBeenSet() const { return m_objectACLHasBeenSet; }
    inline void SetObjectACL(const ObjectACL& value) { m_objectACLHasBeenSet = true; m_objectACL = value; }
    inline void SetObjectACL(ObjectACL&& value) { m_objectACLHasBeenSet = true; m_objectACL = std::move(value); }
    inline CreateNFSFileShareRequest& WithObjectACL(const ObjectACL& value) { SetObjectACL(value); return *this;}
    inline CreateNFSFileShareRequest& WithObjectACL(ObjectACL&& value) { SetObjectACL(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of clients that are allowed to access the S3 File Gateway. The list
     * must contain either valid IP addresses or valid CIDR blocks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientList() const{ return m_clientList; }
    inline bool ClientListHasBeenSet() const { return m_clientListHasBeenSet; }
    inline void SetClientList(const Aws::Vector<Aws::String>& value) { m_clientListHasBeenSet = true; m_clientList = value; }
    inline void SetClientList(Aws::Vector<Aws::String>&& value) { m_clientListHasBeenSet = true; m_clientList = std::move(value); }
    inline CreateNFSFileShareRequest& WithClientList(const Aws::Vector<Aws::String>& value) { SetClientList(value); return *this;}
    inline CreateNFSFileShareRequest& WithClientList(Aws::Vector<Aws::String>&& value) { SetClientList(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& AddClientList(const Aws::String& value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }
    inline CreateNFSFileShareRequest& AddClientList(Aws::String&& value) { m_clientListHasBeenSet = true; m_clientList.push_back(std::move(value)); return *this; }
    inline CreateNFSFileShareRequest& AddClientList(const char* value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that maps a user to anonymous user.</p> <p>Valid values are the
     * following:</p> <ul> <li> <p> <code>RootSquash</code>: Only root is mapped to
     * anonymous user.</p> </li> <li> <p> <code>NoSquash</code>: No one is mapped to
     * anonymous user.</p> </li> <li> <p> <code>AllSquash</code>: Everyone is mapped to
     * anonymous user.</p> </li> </ul>
     */
    inline const Aws::String& GetSquash() const{ return m_squash; }
    inline bool SquashHasBeenSet() const { return m_squashHasBeenSet; }
    inline void SetSquash(const Aws::String& value) { m_squashHasBeenSet = true; m_squash = value; }
    inline void SetSquash(Aws::String&& value) { m_squashHasBeenSet = true; m_squash = std::move(value); }
    inline void SetSquash(const char* value) { m_squashHasBeenSet = true; m_squash.assign(value); }
    inline CreateNFSFileShareRequest& WithSquash(const Aws::String& value) { SetSquash(value); return *this;}
    inline CreateNFSFileShareRequest& WithSquash(Aws::String&& value) { SetSquash(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithSquash(const char* value) { SetSquash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }
    inline CreateNFSFileShareRequest& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetGuessMIMETypeEnabled() const{ return m_guessMIMETypeEnabled; }
    inline bool GuessMIMETypeEnabledHasBeenSet() const { return m_guessMIMETypeEnabledHasBeenSet; }
    inline void SetGuessMIMETypeEnabled(bool value) { m_guessMIMETypeEnabledHasBeenSet = true; m_guessMIMETypeEnabled = value; }
    inline CreateNFSFileShareRequest& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to
     * <code>true</code>, the requester pays the costs; otherwise, the S3 bucket owner
     * pays. However, the S3 bucket owner always pays the cost of storing data.</p>
     *  <p> <code>RequesterPays</code> is a configuration for the S3 bucket that
     * backs the file share, so make sure that the configuration on the file share is
     * the same as the S3 bucket configuration.</p>  <p>Valid Values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline bool GetRequesterPays() const{ return m_requesterPays; }
    inline bool RequesterPaysHasBeenSet() const { return m_requesterPaysHasBeenSet; }
    inline void SetRequesterPays(bool value) { m_requesterPaysHasBeenSet = true; m_requesterPays = value; }
    inline CreateNFSFileShareRequest& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateNFSFileShareRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateNFSFileShareRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateNFSFileShareRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> <p>A valid NFS file share name can only contain the following
     * characters: <code>a</code>-<code>z</code>, <code>A</code>-<code>Z</code>,
     * <code>0</code>-<code>9</code>, <code>-</code>, <code>.</code>, and
     * <code>_</code>.</p> 
     */
    inline const Aws::String& GetFileShareName() const{ return m_fileShareName; }
    inline bool FileShareNameHasBeenSet() const { return m_fileShareNameHasBeenSet; }
    inline void SetFileShareName(const Aws::String& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = value; }
    inline void SetFileShareName(Aws::String&& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = std::move(value); }
    inline void SetFileShareName(const char* value) { m_fileShareNameHasBeenSet = true; m_fileShareName.assign(value); }
    inline CreateNFSFileShareRequest& WithFileShareName(const Aws::String& value) { SetFileShareName(value); return *this;}
    inline CreateNFSFileShareRequest& WithFileShareName(Aws::String&& value) { SetFileShareName(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithFileShareName(const char* value) { SetFileShareName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies refresh cache information for the file share.</p>
     */
    inline const CacheAttributes& GetCacheAttributes() const{ return m_cacheAttributes; }
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }
    inline void SetCacheAttributes(const CacheAttributes& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = value; }
    inline void SetCacheAttributes(CacheAttributes&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::move(value); }
    inline CreateNFSFileShareRequest& WithCacheAttributes(const CacheAttributes& value) { SetCacheAttributes(value); return *this;}
    inline CreateNFSFileShareRequest& WithCacheAttributes(CacheAttributes&& value) { SetCacheAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p> <p>This setting
     * is not meant to specify an exact time at which the notification will be sent. In
     * some cases, the gateway might require more than the specified delay time to
     * generate and send notifications.</p>  <p>The following example sets
     * <code>NotificationPolicy</code> on with <code>SettlingTimeInSeconds</code> set
     * to 60.</p> <p> <code>{\"Upload\": {\"SettlingTimeInSeconds\": 60}}</code> </p>
     * <p>The following example sets <code>NotificationPolicy</code> off.</p> <p>
     * <code>{}</code> </p>
     */
    inline const Aws::String& GetNotificationPolicy() const{ return m_notificationPolicy; }
    inline bool NotificationPolicyHasBeenSet() const { return m_notificationPolicyHasBeenSet; }
    inline void SetNotificationPolicy(const Aws::String& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = value; }
    inline void SetNotificationPolicy(Aws::String&& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = std::move(value); }
    inline void SetNotificationPolicy(const char* value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy.assign(value); }
    inline CreateNFSFileShareRequest& WithNotificationPolicy(const Aws::String& value) { SetNotificationPolicy(value); return *this;}
    inline CreateNFSFileShareRequest& WithNotificationPolicy(Aws::String&& value) { SetNotificationPolicy(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithNotificationPolicy(const char* value) { SetNotificationPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DNS name for the VPC endpoint that the NFS file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for NFS file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetVPCEndpointDNSName() const{ return m_vPCEndpointDNSName; }
    inline bool VPCEndpointDNSNameHasBeenSet() const { return m_vPCEndpointDNSNameHasBeenSet; }
    inline void SetVPCEndpointDNSName(const Aws::String& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = value; }
    inline void SetVPCEndpointDNSName(Aws::String&& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = std::move(value); }
    inline void SetVPCEndpointDNSName(const char* value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName.assign(value); }
    inline CreateNFSFileShareRequest& WithVPCEndpointDNSName(const Aws::String& value) { SetVPCEndpointDNSName(value); return *this;}
    inline CreateNFSFileShareRequest& WithVPCEndpointDNSName(Aws::String&& value) { SetVPCEndpointDNSName(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithVPCEndpointDNSName(const char* value) { SetVPCEndpointDNSName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Region of the S3 bucket where the NFS file share stores
     * files.</p>  <p>This parameter is required for NFS file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetBucketRegion() const{ return m_bucketRegion; }
    inline bool BucketRegionHasBeenSet() const { return m_bucketRegionHasBeenSet; }
    inline void SetBucketRegion(const Aws::String& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = value; }
    inline void SetBucketRegion(Aws::String&& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = std::move(value); }
    inline void SetBucketRegion(const char* value) { m_bucketRegionHasBeenSet = true; m_bucketRegion.assign(value); }
    inline CreateNFSFileShareRequest& WithBucketRegion(const Aws::String& value) { SetBucketRegion(value); return *this;}
    inline CreateNFSFileShareRequest& WithBucketRegion(Aws::String&& value) { SetBucketRegion(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithBucketRegion(const char* value) { SetBucketRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline const Aws::String& GetAuditDestinationARN() const{ return m_auditDestinationARN; }
    inline bool AuditDestinationARNHasBeenSet() const { return m_auditDestinationARNHasBeenSet; }
    inline void SetAuditDestinationARN(const Aws::String& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = value; }
    inline void SetAuditDestinationARN(Aws::String&& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = std::move(value); }
    inline void SetAuditDestinationARN(const char* value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN.assign(value); }
    inline CreateNFSFileShareRequest& WithAuditDestinationARN(const Aws::String& value) { SetAuditDestinationARN(value); return *this;}
    inline CreateNFSFileShareRequest& WithAuditDestinationARN(Aws::String&& value) { SetAuditDestinationARN(std::move(value)); return *this;}
    inline CreateNFSFileShareRequest& WithAuditDestinationARN(const char* value) { SetAuditDestinationARN(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    NFSFileShareDefaults m_nFSFileShareDefaults;
    bool m_nFSFileShareDefaultsHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_locationARN;
    bool m_locationARNHasBeenSet = false;

    Aws::String m_defaultStorageClass;
    bool m_defaultStorageClassHasBeenSet = false;

    ObjectACL m_objectACL;
    bool m_objectACLHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientList;
    bool m_clientListHasBeenSet = false;

    Aws::String m_squash;
    bool m_squashHasBeenSet = false;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;

    bool m_guessMIMETypeEnabled;
    bool m_guessMIMETypeEnabledHasBeenSet = false;

    bool m_requesterPays;
    bool m_requesterPaysHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_fileShareName;
    bool m_fileShareNameHasBeenSet = false;

    CacheAttributes m_cacheAttributes;
    bool m_cacheAttributesHasBeenSet = false;

    Aws::String m_notificationPolicy;
    bool m_notificationPolicyHasBeenSet = false;

    Aws::String m_vPCEndpointDNSName;
    bool m_vPCEndpointDNSNameHasBeenSet = false;

    Aws::String m_bucketRegion;
    bool m_bucketRegionHasBeenSet = false;

    Aws::String m_auditDestinationARN;
    bool m_auditDestinationARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
