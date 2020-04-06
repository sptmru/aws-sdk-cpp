﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListHumanLoopsRequest::ListHumanLoopsRequest() : 
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_flowDefinitionArnHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListHumanLoopsRequest::SerializePayload() const
{
  return {};
}

void ListHumanLoopsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_creationTimeAfterHasBeenSet)
    {
      ss << m_creationTimeAfter.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("CreationTimeAfter", ss.str());
      ss.str("");
    }

    if(m_creationTimeBeforeHasBeenSet)
    {
      ss << m_creationTimeBefore.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("CreationTimeBefore", ss.str());
      ss.str("");
    }

    if(m_flowDefinitionArnHasBeenSet)
    {
      ss << m_flowDefinitionArn;
      uri.AddQueryStringParameter("FlowDefinitionArn", ss.str());
      ss.str("");
    }

    if(m_sortOrderHasBeenSet)
    {
      ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
      uri.AddQueryStringParameter("SortOrder", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

}


