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

#ifndef _CREATEIOQCONTOGPOLL_r10b_H_
#define _CREATEIOQCONTOGPOLL_r10b_H_

#include "test.h"
#include "../Queues/asq.h"
#include "../Queues/acq.h"

#define IOCQ_CONTIG_POLL_GROUP_ID      "IOCQContigPoll"
#define IOSQ_CONTIG_POLL_GROUP_ID      "IOSQContigPoll"


/** \verbatim
 * -----------------------------------------------------------------------------
 * ----------------Mandatory rules for children to follow-----------------------
 * -----------------------------------------------------------------------------
 * 1) See notes in the header file of the Test base class
 * \endverbatim
 */
class CreateIOQContigPoll_r10b : public Test
{
public:
    CreateIOQContigPoll_r10b(int fd, string grpName, string testName);
    virtual ~CreateIOQContigPoll_r10b();

    /**
     * IMPORTANT: Read Test::Clone() header comment.
     */
    virtual CreateIOQContigPoll_r10b *Clone() const
        { return new CreateIOQContigPoll_r10b(*this); }
    CreateIOQContigPoll_r10b &operator=(const CreateIOQContigPoll_r10b &other);
    CreateIOQContigPoll_r10b(const CreateIOQContigPoll_r10b &other);


protected:
    virtual bool RunCoreTest();


private:
    ///////////////////////////////////////////////////////////////////////////
    // Adding a member variable? Then edit the copy constructor and operator=().
    ///////////////////////////////////////////////////////////////////////////
    void CreateIOCQContigPoll(SharedASQPtr asq, SharedACQPtr acq);
    void CreateIOSQContigPoll(SharedASQPtr asq, SharedACQPtr acq);
};


#endif
