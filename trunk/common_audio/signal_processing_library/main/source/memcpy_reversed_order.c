/*
 *  Copyright (c) 2011 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */


/*
 * This file contains the function WebRtcSpl_MemCpyReversedOrder().
 * The description header can be found in signal_processing_library.h
 *
 */

#include "signal_processing_library.h"

void WebRtcSpl_MemCpyReversedOrder(WebRtc_Word16* dest, WebRtc_Word16* source, int length)
{
    int j;
    WebRtc_Word16* destPtr = dest;
    WebRtc_Word16* sourcePtr = source;

    for (j = 0; j < length; j++)
    {
        *destPtr-- = *sourcePtr++;
    }
}
