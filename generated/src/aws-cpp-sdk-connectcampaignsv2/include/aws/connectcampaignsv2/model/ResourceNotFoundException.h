﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The specified resource was not found.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API ResourceNotFoundException();
    AWS_CONNECTCAMPAIGNSV2_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetXAmzErrorType() const{ return m_xAmzErrorType; }
    inline bool XAmzErrorTypeHasBeenSet() const { return m_xAmzErrorTypeHasBeenSet; }
    inline void SetXAmzErrorType(const Aws::String& value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType = value; }
    inline void SetXAmzErrorType(Aws::String&& value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType = std::move(value); }
    inline void SetXAmzErrorType(const char* value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType.assign(value); }
    inline ResourceNotFoundException& WithXAmzErrorType(const Aws::String& value) { SetXAmzErrorType(value); return *this;}
    inline ResourceNotFoundException& WithXAmzErrorType(Aws::String&& value) { SetXAmzErrorType(std::move(value)); return *this;}
    inline ResourceNotFoundException& WithXAmzErrorType(const char* value) { SetXAmzErrorType(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_xAmzErrorType;
    bool m_xAmzErrorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
