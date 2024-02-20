# GCOV/GCOVR demo

## Build and run gcovr

    mkdir build
    cmake -Bbuild -S. -DCMAKE_BUILD_TYPE=PROFILE
    cd build
    make gcovr