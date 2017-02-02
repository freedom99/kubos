/*
 * Copyright (C) 2017 Kubos Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IPC_CONFIG_H
#define IPC_CONFIG_H

#ifdef YOTTA_CFG_IPC_READ_TIMEOUT
#define IPC_READ_TIMEOUT YOTTA_CFG_IPC_READ_TIMEOUT
#else
#define IPC_READ_TIMEOUT 50
#endif

#ifdef YOTTA_CFG_IPC_SEND_TIMEOUT
#define IPC_SEND_TIMEOUT YOTTA_CFG_IPC_SEND_TIMEOUT
#else
#define IPC_SEND_TIMEOUT 1000
#endif

#endif