#ifndef FOONCTION_H_
#define FOONCTION_H_

#include <complex>

void AddSignal(std::complex<float>* dst, const std::complex<float>* signal,
               const std::complex<float>* gain, std::size_t len, bool is_vg) noexcept;

#endif  // FOONCTION_H_