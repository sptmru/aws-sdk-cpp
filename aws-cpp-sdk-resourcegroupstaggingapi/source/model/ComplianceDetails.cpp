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

#include <aws/resourcegroupstaggingapi/model/ComplianceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

ComplianceDetails::ComplianceDetails() : 
    m_noncompliantKeysHasBeenSet(false),
    m_keysWithNoncompliantValuesHasBeenSet(false),
    m_complianceStatus(false),
    m_complianceStatusHasBeenSet(false)
{
}

ComplianceDetails::ComplianceDetails(JsonView jsonValue) : 
    m_noncompliantKeysHasBeenSet(false),
    m_keysWithNoncompliantValuesHasBeenSet(false),
    m_complianceStatus(false),
    m_complianceStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceDetails& ComplianceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NoncompliantKeys"))
  {
    Array<JsonView> noncompliantKeysJsonList = jsonValue.GetArray("NoncompliantKeys");
    for(unsigned noncompliantKeysIndex = 0; noncompliantKeysIndex < noncompliantKeysJsonList.GetLength(); ++noncompliantKeysIndex)
    {
      m_noncompliantKeys.push_back(noncompliantKeysJsonList[noncompliantKeysIndex].AsString());
    }
    m_noncompliantKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeysWithNoncompliantValues"))
  {
    Array<JsonView> keysWithNoncompliantValuesJsonList = jsonValue.GetArray("KeysWithNoncompliantValues");
    for(unsigned keysWithNoncompliantValuesIndex = 0; keysWithNoncompliantValuesIndex < keysWithNoncompliantValuesJsonList.GetLength(); ++keysWithNoncompliantValuesIndex)
    {
      m_keysWithNoncompliantValues.push_back(keysWithNoncompliantValuesJsonList[keysWithNoncompliantValuesIndex].AsString());
    }
    m_keysWithNoncompliantValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceStatus"))
  {
    m_complianceStatus = jsonValue.GetBool("ComplianceStatus");

    m_complianceStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_noncompliantKeysHasBeenSet)
  {
   Array<JsonValue> noncompliantKeysJsonList(m_noncompliantKeys.size());
   for(unsigned noncompliantKeysIndex = 0; noncompliantKeysIndex < noncompliantKeysJsonList.GetLength(); ++noncompliantKeysIndex)
   {
     noncompliantKeysJsonList[noncompliantKeysIndex].AsString(m_noncompliantKeys[noncompliantKeysIndex]);
   }
   payload.WithArray("NoncompliantKeys", std::move(noncompliantKeysJsonList));

  }

  if(m_keysWithNoncompliantValuesHasBeenSet)
  {
   Array<JsonValue> keysWithNoncompliantValuesJsonList(m_keysWithNoncompliantValues.size());
   for(unsigned keysWithNoncompliantValuesIndex = 0; keysWithNoncompliantValuesIndex < keysWithNoncompliantValuesJsonList.GetLength(); ++keysWithNoncompliantValuesIndex)
   {
     keysWithNoncompliantValuesJsonList[keysWithNoncompliantValuesIndex].AsString(m_keysWithNoncompliantValues[keysWithNoncompliantValuesIndex]);
   }
   payload.WithArray("KeysWithNoncompliantValues", std::move(keysWithNoncompliantValuesJsonList));

  }

  if(m_complianceStatusHasBeenSet)
  {
   payload.WithBool("ComplianceStatus", m_complianceStatus);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws