#ifndef ASTRO_ACCELERATE_AA_DEVICE_HARMONIC_SUMMING_HPP
#define ASTRO_ACCELERATE_AA_DEVICE_HARMONIC_SUMMING_HPP

namespace astroaccelerate {

extern int periodicity_simple_harmonic_summing(
  float *d_input,
  float *d_output_SNR,
  ushort *d_output_harmonics,
  float *d_MSD,
  int nTimesamples,
  int nDMs,
  int nHarmonics
);

extern int periodicity_greedy_harmonic_summing(
  float *d_input,
  float *d_output_SNR,
  ushort *d_output_harmonics,
  float *d_MSD,
  int nTimesamples,
  int nDMs,
  int nHarmonics,
  int enable_scalloping_loss_removal
);

extern int periodicity_two_dimensional_greedy_harmonic_summing(
  float *d_input,
  float *d_ouput_max,
  float *d_output_SNR,
  ushort *d_output_harmonics,
  float *d_mean,
  float *d_stdev,
  size_t N_f,
  size_t N_fdot,
  size_t max_f_idx,
  size_t max_fdot_idx,
  size_t nHarmonics
);

extern int periodicity_presto_plus_harmonic_summing(
  float *d_input,
  float *d_output_SNR,
  ushort *d_output_harmonics,
  float *d_MSD,
  int nTimesamples,
  int nDMs,
  int nHarmonics,
  int enable_scalloping_loss_removal
);

extern int periodicity_presto_harmonic_summing(
  float *d_input,
  float *d_output_SNR,
  ushort *d_output_harmonics,
  float *d_MSD,
  int nTimesamples,
  int nDMs,
  int nHarmonics,
  int enable_scalloping_loss_removal
);

} // namespace astroaccelerate
  
#endif // ASTRO_ACCELERATE_AA_DEVICE_HARMONIC_SUMMING_HPP
