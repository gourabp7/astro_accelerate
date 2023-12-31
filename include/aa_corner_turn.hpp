#ifndef ASTRO_ACCELERATE_CORNER_TURN_HPP
#define ASTRO_ACCELERATE_CORNER_TURN_HPP

#include <stdio.h>
#include <time.h>
#include <vector_types.h>

#include "aa_params.hpp"
#include "aa_device_corner_turn_kernel.hpp"

#include <cuda.h>
#include <cuda_runtime.h>

namespace astroaccelerate {

  /**
   * Functions that perform the corner turn.
   * Users should not need to interact with these functions directly.
   */

  void corner_turn(unsigned short *const d_input, float *const d_output, const int nchans, const int nsamp);
  int corner_turn(float *const d_input, float *const d_output, const int primary_size, const int secondary_size);
  
  void corner_turn_SM(float *const d_input, float *const d_output, const size_t primary_size, const size_t secondary_size);
  void corner_turn_SM(unsigned short *const d_input, float *const d_output, const size_t primary_size, const size_t secondary_size);

  void corner_turn_SM_inplace(float *const d_input, float *const d_temporary, const size_t primary_size, const size_t secondary_size);
  void  corner_turn_SM_inplace(unsigned short *const d_input, unsigned short *const d_temporary, const size_t primary_size, const size_t secondary_size);
} // namespace astroaccelerate
  
#endif // ASTRO_ACCELERATE_CORNER_TURN_HPP
