#!/bin/bash

# xmake
sudo add-apt-repository ppa:xmake-io/xmake -y
sudo apt update -y
sudo apt install xmake -y

# opencv
sudo apt install libopencv-dev clang libclang-dev