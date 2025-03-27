# conan

mkdir build
cd build
conan install .. --output-folder=. --build=missing
cmake ..
cmake --build . -j4
ctest
