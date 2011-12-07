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

#ifndef _NVMCMD_H_
#define _NVMCMD_H_

#include "cmd.h"


/**
* This class is the base class to NVM cmd set.
*
* @note This class may throw exceptions.
*/
class NVMCmd : public Cmd
{
public:
    /**
     * @param fd Pass the opened file descriptor for the device under test
     * @param objBeingCreated Pass the type of object this child class is
     */
    NVMCmd(int fd, Trackable::ObjType objBeingCreated);
    virtual ~NVMCmd();


protected:
    /**
     * Initialize this object.
     * @param opcode Pass the opcode defining this cmd, per NVME spec.
     * @param dataDir Pass the direction of data for this cmd
     */
    void Init(uint8_t opcode, DataDir dataDir);


private:
    NVMCmd();
};


#endif
