﻿//
// Copyright © 2017 Arm Ltd. All rights reserved.
// See LICENSE file in the project root for full license information.
//

#pragma once

#include "backends/Workload.hpp"
#include "backends/WorkloadData.hpp"

namespace armnn
{

class RefResizeBilinearFloat32Workload : public Float32Workload<ResizeBilinearQueueDescriptor>
{
public:
    using Float32Workload<ResizeBilinearQueueDescriptor>::Float32Workload;
    virtual void Execute() const override;
};

} //namespace armnn
