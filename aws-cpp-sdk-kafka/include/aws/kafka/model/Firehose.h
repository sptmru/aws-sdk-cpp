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

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  class AWS_KAFKA_API Firehose
  {
  public:
    Firehose();
    Firehose(Aws::Utils::Json::JsonView jsonValue);
    Firehose& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDeliveryStream() const{ return m_deliveryStream; }

    
    inline bool DeliveryStreamHasBeenSet() const { return m_deliveryStreamHasBeenSet; }

    
    inline void SetDeliveryStream(const Aws::String& value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream = value; }

    
    inline void SetDeliveryStream(Aws::String&& value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream = std::move(value); }

    
    inline void SetDeliveryStream(const char* value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream.assign(value); }

    
    inline Firehose& WithDeliveryStream(const Aws::String& value) { SetDeliveryStream(value); return *this;}

    
    inline Firehose& WithDeliveryStream(Aws::String&& value) { SetDeliveryStream(std::move(value)); return *this;}

    
    inline Firehose& WithDeliveryStream(const char* value) { SetDeliveryStream(value); return *this;}


    
    inline bool GetEnabled() const{ return m_enabled; }

    
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    
    inline Firehose& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_deliveryStream;
    bool m_deliveryStreamHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws