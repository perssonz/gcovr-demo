#include "foonction.h"


void AddSignal(std::complex<float>* dst, const std::complex<float>* signal,
               const std::complex<float>* gain, std::size_t len, bool is_vg) noexcept {
    if (is_vg) {
        for (std::size_t i = 0; i < len; i++) {
            dst[i] = dst[i] + gain[i]*signal[i];
        }
    } else {
        for (std::size_t i = 0; i < len; i++) {
            dst[i] = dst[i] + gain[0]*signal[i];
        }
    }
}