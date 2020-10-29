﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/UpdateSMBFileShareVisibilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSMBFileShareVisibilityRequest::UpdateSMBFileShareVisibilityRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_fileSharesVisible(false),
    m_fileSharesVisibleHasBeenSet(false)
{
}

Aws::String UpdateSMBFileShareVisibilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_fileSharesVisibleHasBeenSet)
  {
   payload.WithBool("FileSharesVisible", m_fileSharesVisible);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSMBFileShareVisibilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.UpdateSMBFileShareVisibility"));
  return headers;

}




