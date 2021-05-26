/****************************************************************************
 * Copyright (c) 2018-2021 by the Cabana authors                            *
 * All rights reserved.                                                     *
 *                                                                          *
 * This file is part of the Cabana library. Cabana is distributed under a   *
 * BSD 3-clause license. For the licensing terms see the LICENSE file in    *
 * the top-level directory.                                                 *
 *                                                                          *
 * SPDX-License-Identifier: BSD-3-Clause                                    *
 ****************************************************************************/

#ifndef CAJITA_UNIFORMDIMPARTITIONER_HPP
#define CAJITA_UNIFORMDIMPARTITIONER_HPP

#include <Cajita_Partitioner.hpp>

#include <array>

#include <mpi.h>

namespace Cajita
{
//---------------------------------------------------------------------------//
/*!
  \copydoc DimBlockPartitioner

  Backwards compatibility wrapper for 3D dimension partitioner.
*/
class UniformDimPartitioner : public DimBlockPartitioner<3>
{
};

//---------------------------------------------------------------------------//

} // end namespace Cajita

#endif // end CAJITA_UNIFORMDIMPARTITIONER_HPP
