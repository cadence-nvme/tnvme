/*
 * Copyright (c) 2011, Intel Corporation.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef _DUTDEFS_H_
#define _DUTDEFS_H_

/**
 * When the namespace reports unlimited transfer size, this define artificially
 * caps it to allow reasonable coverage vs runtime target.
 */
#define MAX_DATA_TX_SIZE        (256 * 1024)

#define MAX_IOQ_ID              0xFFFF


#endif
