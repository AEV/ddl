/**
 * @file
 *
 * @copyright
 * @verbatim
   Copyright @ 2017 Audi Electronics Venture GmbH. All rights reserved.

       This Source Code Form is subject to the terms of the Mozilla
       Public License, v. 2.0. If a copy of the MPL was not distributed
       with this file, You can obtain one at https://mozilla.org/MPL/2.0/.

   If it is not possible or desirable to put the notice in a particular file, then
   You may include the notice in a location (such as a LICENSE file in a
   relevant directory) where a recipient would be likely to look for such a notice.

   You may add additional accurate notices of copyright ownership.
   @endverbatim
*/
#include "trigger.h"


using namespace mapping::rt;

TriggerBase::~TriggerBase() {}

TargetSet& TriggerBase::getTargetList()
{
    return _targets;
}

a_util::result::Result TriggerBase::addTarget(Target* target)
{
    _targets.insert(target);
    return a_util::result::SUCCESS;
}

a_util::result::Result TriggerBase::removeTarget(Target* target)
{
    _targets.erase(target);
    return a_util::result::SUCCESS;
}
