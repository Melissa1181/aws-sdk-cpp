﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/BucketCountByEffectivePermission.h>
#include <aws/macie2/model/BucketCountByEncryptionType.h>
#include <aws/macie2/model/BucketCountPolicyAllowsUnencryptedObjectUploads.h>
#include <aws/macie2/model/BucketCountBySharedAccessType.h>
#include <aws/macie2/model/BucketStatisticsBySensitivity.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/ObjectLevelStatistics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class GetBucketStatisticsResult
  {
  public:
    AWS_MACIE2_API GetBucketStatisticsResult();
    AWS_MACIE2_API GetBucketStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetBucketStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The total number of buckets.</p>
     */
    inline long long GetBucketCount() const{ return m_bucketCount; }
    inline void SetBucketCount(long long value) { m_bucketCount = value; }
    inline GetBucketStatisticsResult& WithBucketCount(long long value) { SetBucketCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that are publicly accessible due to a combination
     * of permissions settings for each bucket.</p>
     */
    inline const BucketCountByEffectivePermission& GetBucketCountByEffectivePermission() const{ return m_bucketCountByEffectivePermission; }
    inline void SetBucketCountByEffectivePermission(const BucketCountByEffectivePermission& value) { m_bucketCountByEffectivePermission = value; }
    inline void SetBucketCountByEffectivePermission(BucketCountByEffectivePermission&& value) { m_bucketCountByEffectivePermission = std::move(value); }
    inline GetBucketStatisticsResult& WithBucketCountByEffectivePermission(const BucketCountByEffectivePermission& value) { SetBucketCountByEffectivePermission(value); return *this;}
    inline GetBucketStatisticsResult& WithBucketCountByEffectivePermission(BucketCountByEffectivePermission&& value) { SetBucketCountByEffectivePermission(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets whose settings do or don't specify default
     * server-side encryption behavior for objects that are added to the buckets.</p>
     */
    inline const BucketCountByEncryptionType& GetBucketCountByEncryptionType() const{ return m_bucketCountByEncryptionType; }
    inline void SetBucketCountByEncryptionType(const BucketCountByEncryptionType& value) { m_bucketCountByEncryptionType = value; }
    inline void SetBucketCountByEncryptionType(BucketCountByEncryptionType&& value) { m_bucketCountByEncryptionType = std::move(value); }
    inline GetBucketStatisticsResult& WithBucketCountByEncryptionType(const BucketCountByEncryptionType& value) { SetBucketCountByEncryptionType(value); return *this;}
    inline GetBucketStatisticsResult& WithBucketCountByEncryptionType(BucketCountByEncryptionType&& value) { SetBucketCountByEncryptionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets whose bucket policies do or don't require
     * server-side encryption of objects when objects are added to the buckets.</p>
     */
    inline const BucketCountPolicyAllowsUnencryptedObjectUploads& GetBucketCountByObjectEncryptionRequirement() const{ return m_bucketCountByObjectEncryptionRequirement; }
    inline void SetBucketCountByObjectEncryptionRequirement(const BucketCountPolicyAllowsUnencryptedObjectUploads& value) { m_bucketCountByObjectEncryptionRequirement = value; }
    inline void SetBucketCountByObjectEncryptionRequirement(BucketCountPolicyAllowsUnencryptedObjectUploads&& value) { m_bucketCountByObjectEncryptionRequirement = std::move(value); }
    inline GetBucketStatisticsResult& WithBucketCountByObjectEncryptionRequirement(const BucketCountPolicyAllowsUnencryptedObjectUploads& value) { SetBucketCountByObjectEncryptionRequirement(value); return *this;}
    inline GetBucketStatisticsResult& WithBucketCountByObjectEncryptionRequirement(BucketCountPolicyAllowsUnencryptedObjectUploads&& value) { SetBucketCountByObjectEncryptionRequirement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that are or aren't shared with other Amazon Web
     * Services accounts, Amazon CloudFront origin access identities (OAIs), or
     * CloudFront origin access controls (OACs).</p>
     */
    inline const BucketCountBySharedAccessType& GetBucketCountBySharedAccessType() const{ return m_bucketCountBySharedAccessType; }
    inline void SetBucketCountBySharedAccessType(const BucketCountBySharedAccessType& value) { m_bucketCountBySharedAccessType = value; }
    inline void SetBucketCountBySharedAccessType(BucketCountBySharedAccessType&& value) { m_bucketCountBySharedAccessType = std::move(value); }
    inline GetBucketStatisticsResult& WithBucketCountBySharedAccessType(const BucketCountBySharedAccessType& value) { SetBucketCountBySharedAccessType(value); return *this;}
    inline GetBucketStatisticsResult& WithBucketCountBySharedAccessType(BucketCountBySharedAccessType&& value) { SetBucketCountBySharedAccessType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregated sensitive data discovery statistics for the buckets. If
     * automated sensitive data discovery is currently disabled for your account, the
     * value for most statistics is 0.</p>
     */
    inline const BucketStatisticsBySensitivity& GetBucketStatisticsBySensitivity() const{ return m_bucketStatisticsBySensitivity; }
    inline void SetBucketStatisticsBySensitivity(const BucketStatisticsBySensitivity& value) { m_bucketStatisticsBySensitivity = value; }
    inline void SetBucketStatisticsBySensitivity(BucketStatisticsBySensitivity&& value) { m_bucketStatisticsBySensitivity = std::move(value); }
    inline GetBucketStatisticsResult& WithBucketStatisticsBySensitivity(const BucketStatisticsBySensitivity& value) { SetBucketStatisticsBySensitivity(value); return *this;}
    inline GetBucketStatisticsResult& WithBucketStatisticsBySensitivity(BucketStatisticsBySensitivity&& value) { SetBucketStatisticsBySensitivity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie can analyze in the buckets.
     * These objects use a supported storage class and have a file name extension for a
     * supported file or storage format.</p>
     */
    inline long long GetClassifiableObjectCount() const{ return m_classifiableObjectCount; }
    inline void SetClassifiableObjectCount(long long value) { m_classifiableObjectCount = value; }
    inline GetBucketStatisticsResult& WithClassifiableObjectCount(long long value) { SetClassifiableObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of all the objects that Amazon Macie can
     * analyze in the buckets. These objects use a supported storage class and have a
     * file name extension for a supported file or storage format.</p> <p>If versioning
     * is enabled for any of the buckets, this value is based on the size of the latest
     * version of each applicable object in the buckets. This value doesn't reflect the
     * storage size of all versions of all applicable objects in the buckets.</p>
     */
    inline long long GetClassifiableSizeInBytes() const{ return m_classifiableSizeInBytes; }
    inline void SetClassifiableSizeInBytes(long long value) { m_classifiableSizeInBytes = value; }
    inline GetBucketStatisticsResult& WithClassifiableSizeInBytes(long long value) { SetClassifiableSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved bucket or object metadata from Amazon S3 for the
     * buckets.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdated = std::move(value); }
    inline GetBucketStatisticsResult& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline GetBucketStatisticsResult& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects in the buckets.</p>
     */
    inline long long GetObjectCount() const{ return m_objectCount; }
    inline void SetObjectCount(long long value) { m_objectCount = value; }
    inline GetBucketStatisticsResult& WithObjectCount(long long value) { SetObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the buckets.</p> <p>If versioning is
     * enabled for any of the buckets, this value is based on the size of the latest
     * version of each object in the buckets. This value doesn't reflect the storage
     * size of all versions of the objects in the buckets.</p>
     */
    inline long long GetSizeInBytes() const{ return m_sizeInBytes; }
    inline void SetSizeInBytes(long long value) { m_sizeInBytes = value; }
    inline GetBucketStatisticsResult& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the objects that are compressed (.gz,
     * .gzip, .zip) files in the buckets.</p> <p>If versioning is enabled for any of
     * the buckets, this value is based on the size of the latest version of each
     * applicable object in the buckets. This value doesn't reflect the storage size of
     * all versions of the applicable objects in the buckets.</p>
     */
    inline long long GetSizeInBytesCompressed() const{ return m_sizeInBytesCompressed; }
    inline void SetSizeInBytesCompressed(long long value) { m_sizeInBytesCompressed = value; }
    inline GetBucketStatisticsResult& WithSizeInBytesCompressed(long long value) { SetSizeInBytesCompressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the buckets.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline const ObjectLevelStatistics& GetUnclassifiableObjectCount() const{ return m_unclassifiableObjectCount; }
    inline void SetUnclassifiableObjectCount(const ObjectLevelStatistics& value) { m_unclassifiableObjectCount = value; }
    inline void SetUnclassifiableObjectCount(ObjectLevelStatistics&& value) { m_unclassifiableObjectCount = std::move(value); }
    inline GetBucketStatisticsResult& WithUnclassifiableObjectCount(const ObjectLevelStatistics& value) { SetUnclassifiableObjectCount(value); return *this;}
    inline GetBucketStatisticsResult& WithUnclassifiableObjectCount(ObjectLevelStatistics&& value) { SetUnclassifiableObjectCount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the buckets. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline const ObjectLevelStatistics& GetUnclassifiableObjectSizeInBytes() const{ return m_unclassifiableObjectSizeInBytes; }
    inline void SetUnclassifiableObjectSizeInBytes(const ObjectLevelStatistics& value) { m_unclassifiableObjectSizeInBytes = value; }
    inline void SetUnclassifiableObjectSizeInBytes(ObjectLevelStatistics&& value) { m_unclassifiableObjectSizeInBytes = std::move(value); }
    inline GetBucketStatisticsResult& WithUnclassifiableObjectSizeInBytes(const ObjectLevelStatistics& value) { SetUnclassifiableObjectSizeInBytes(value); return *this;}
    inline GetBucketStatisticsResult& WithUnclassifiableObjectSizeInBytes(ObjectLevelStatistics&& value) { SetUnclassifiableObjectSizeInBytes(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBucketStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBucketStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBucketStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    long long m_bucketCount;

    BucketCountByEffectivePermission m_bucketCountByEffectivePermission;

    BucketCountByEncryptionType m_bucketCountByEncryptionType;

    BucketCountPolicyAllowsUnencryptedObjectUploads m_bucketCountByObjectEncryptionRequirement;

    BucketCountBySharedAccessType m_bucketCountBySharedAccessType;

    BucketStatisticsBySensitivity m_bucketStatisticsBySensitivity;

    long long m_classifiableObjectCount;

    long long m_classifiableSizeInBytes;

    Aws::Utils::DateTime m_lastUpdated;

    long long m_objectCount;

    long long m_sizeInBytes;

    long long m_sizeInBytesCompressed;

    ObjectLevelStatistics m_unclassifiableObjectCount;

    ObjectLevelStatistics m_unclassifiableObjectSizeInBytes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
