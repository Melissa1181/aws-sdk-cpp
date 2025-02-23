﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The GlueOAuth2 credentials of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlueOAuth2Credentials">AWS
   * API Reference</a></p>
   */
  class GlueOAuth2Credentials
  {
  public:
    AWS_DATAZONE_API GlueOAuth2Credentials();
    AWS_DATAZONE_API GlueOAuth2Credentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlueOAuth2Credentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access token of a connection.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline GlueOAuth2Credentials& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline GlueOAuth2Credentials& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline GlueOAuth2Credentials& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The jwt token of the connection.</p>
     */
    inline const Aws::String& GetJwtToken() const{ return m_jwtToken; }
    inline bool JwtTokenHasBeenSet() const { return m_jwtTokenHasBeenSet; }
    inline void SetJwtToken(const Aws::String& value) { m_jwtTokenHasBeenSet = true; m_jwtToken = value; }
    inline void SetJwtToken(Aws::String&& value) { m_jwtTokenHasBeenSet = true; m_jwtToken = std::move(value); }
    inline void SetJwtToken(const char* value) { m_jwtTokenHasBeenSet = true; m_jwtToken.assign(value); }
    inline GlueOAuth2Credentials& WithJwtToken(const Aws::String& value) { SetJwtToken(value); return *this;}
    inline GlueOAuth2Credentials& WithJwtToken(Aws::String&& value) { SetJwtToken(std::move(value)); return *this;}
    inline GlueOAuth2Credentials& WithJwtToken(const char* value) { SetJwtToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The refresh token of the connection.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }
    inline GlueOAuth2Credentials& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}
    inline GlueOAuth2Credentials& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}
    inline GlueOAuth2Credentials& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user managed client application client secret of the connection. </p>
     */
    inline const Aws::String& GetUserManagedClientApplicationClientSecret() const{ return m_userManagedClientApplicationClientSecret; }
    inline bool UserManagedClientApplicationClientSecretHasBeenSet() const { return m_userManagedClientApplicationClientSecretHasBeenSet; }
    inline void SetUserManagedClientApplicationClientSecret(const Aws::String& value) { m_userManagedClientApplicationClientSecretHasBeenSet = true; m_userManagedClientApplicationClientSecret = value; }
    inline void SetUserManagedClientApplicationClientSecret(Aws::String&& value) { m_userManagedClientApplicationClientSecretHasBeenSet = true; m_userManagedClientApplicationClientSecret = std::move(value); }
    inline void SetUserManagedClientApplicationClientSecret(const char* value) { m_userManagedClientApplicationClientSecretHasBeenSet = true; m_userManagedClientApplicationClientSecret.assign(value); }
    inline GlueOAuth2Credentials& WithUserManagedClientApplicationClientSecret(const Aws::String& value) { SetUserManagedClientApplicationClientSecret(value); return *this;}
    inline GlueOAuth2Credentials& WithUserManagedClientApplicationClientSecret(Aws::String&& value) { SetUserManagedClientApplicationClientSecret(std::move(value)); return *this;}
    inline GlueOAuth2Credentials& WithUserManagedClientApplicationClientSecret(const char* value) { SetUserManagedClientApplicationClientSecret(value); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_jwtToken;
    bool m_jwtTokenHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    Aws::String m_userManagedClientApplicationClientSecret;
    bool m_userManagedClientApplicationClientSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
