
# Test cases for OpenCV in C++

Steps to build with cmake
=========================
* create a build folder
* go to build folder
* cmake ..
* make
* cd ..
* ./build/DisplayImage


Build command
=============
g++ main.cpp -o output `pkg-config --cflags --libs opencv4` -std=c++17
