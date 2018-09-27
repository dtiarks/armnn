﻿//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include "backends/Workload.hpp"
#include "backends/WorkloadData.hpp"

namespace armnn
{

class RefActivationUint8Workload : public Uint8Workload<ActivationQueueDescriptor>
{
public:
    using Uint8Workload<ActivationQueueDescriptor>::Uint8Workload;
    virtual void Execute() const override;
};

} //namespace armnn