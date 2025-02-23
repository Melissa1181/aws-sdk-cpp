﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ListDistributionsByAnycastIpListId2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDistributionsByAnycastIpListId2020_05_31Request::ListDistributionsByAnycastIpListId2020_05_31Request() : 
    m_markerHasBeenSet(false),
    m_maxItemsHasBeenSet(false),
    m_anycastIpListIdHasBeenSet(false)
{
}

Aws::String ListDistributionsByAnycastIpListId2020_05_31Request::SerializePayload() const
{
  return {};
}

void ListDistributionsByAnycastIpListId2020_05_31Request::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("Marker", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("MaxItems", ss.str());
      ss.str("");
    }

}

