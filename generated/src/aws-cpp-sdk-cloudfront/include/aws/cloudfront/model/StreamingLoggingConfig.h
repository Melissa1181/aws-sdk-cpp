﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A complex type that controls whether access logs are written for this
   * streaming distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/StreamingLoggingConfig">AWS
   * API Reference</a></p>
   */
  class StreamingLoggingConfig
  {
  public:
    AWS_CLOUDFRONT_API StreamingLoggingConfig();
    AWS_CLOUDFRONT_API StreamingLoggingConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API StreamingLoggingConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you don't want to enable logging when you create a streaming
     * distribution or if you want to disable logging for an existing streaming
     * distribution, specify <code>false</code> for <code>Enabled</code>, and specify
     * <code>empty Bucket</code> and <code>Prefix</code> elements. If you specify
     * <code>false</code> for <code>Enabled</code> but you specify values for
     * <code>Bucket</code> and <code>Prefix</code>, the values are automatically
     * deleted.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline StreamingLoggingConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>amzn-s3-demo-bucket.s3.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline StreamingLoggingConfig& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline StreamingLoggingConfig& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline StreamingLoggingConfig& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, <code>myprefix/</code>.
     * If you want to enable logging, but you don't want to specify a prefix, you still
     * must include an empty <code>Prefix</code> element in the <code>Logging</code>
     * element.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline StreamingLoggingConfig& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline StreamingLoggingConfig& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline StreamingLoggingConfig& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
