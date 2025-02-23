﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetSegmentEstimateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSegmentEstimateResult::GetSegmentEstimateResult() : 
    m_status(EstimateStatus::NOT_SET),
    m_statusCode(0)
{
}

GetSegmentEstimateResult::GetSegmentEstimateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetSegmentEstimateResult()
{
  *this = result;
}

GetSegmentEstimateResult& GetSegmentEstimateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("EstimateId"))
  {
    m_estimateId = jsonValue.GetString("EstimateId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EstimateStatusMapper::GetEstimateStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Estimate"))
  {
    m_estimate = jsonValue.GetString("Estimate");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_statusCode = static_cast<int>(result.GetResponseCode());

  return *this;
}
