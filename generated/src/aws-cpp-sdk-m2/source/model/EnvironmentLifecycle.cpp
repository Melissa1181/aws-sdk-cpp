﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/EnvironmentLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MainframeModernization
  {
    namespace Model
    {
      namespace EnvironmentLifecycleMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int UnHealthy_HASH = HashingUtils::HashString("UnHealthy");


        EnvironmentLifecycle GetEnvironmentLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return EnvironmentLifecycle::Creating;
          }
          else if (hashCode == Available_HASH)
          {
            return EnvironmentLifecycle::Available;
          }
          else if (hashCode == Updating_HASH)
          {
            return EnvironmentLifecycle::Updating;
          }
          else if (hashCode == Deleting_HASH)
          {
            return EnvironmentLifecycle::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return EnvironmentLifecycle::Failed;
          }
          else if (hashCode == UnHealthy_HASH)
          {
            return EnvironmentLifecycle::UnHealthy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentLifecycle>(hashCode);
          }

          return EnvironmentLifecycle::NOT_SET;
        }

        Aws::String GetNameForEnvironmentLifecycle(EnvironmentLifecycle enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentLifecycle::NOT_SET:
            return {};
          case EnvironmentLifecycle::Creating:
            return "Creating";
          case EnvironmentLifecycle::Available:
            return "Available";
          case EnvironmentLifecycle::Updating:
            return "Updating";
          case EnvironmentLifecycle::Deleting:
            return "Deleting";
          case EnvironmentLifecycle::Failed:
            return "Failed";
          case EnvironmentLifecycle::UnHealthy:
            return "UnHealthy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentLifecycleMapper
    } // namespace Model
  } // namespace MainframeModernization
} // namespace Aws
