#!/usr/bin/env bash

# Prepare autograder environment

# Install Python dependencies declared in requirements.txt
apt-get install -y python python3-pip
pip3 install -r /autograder/source/requirements.txt

# Move python uploaded grader files into the same directory as run_autograder
cp /autograder/source/grade_util.py /autograder
cp /autograder/source/bootstrap.py /autograder
cp /autograder/source/config.yml /autograder

# Install google test framework for c++
apt-get install libgtest-dev -y

# Install cmake for building with gtest
apt-get install cmake -y

# Build gtest libraries for this installation

cd /usr/src/gtest
cmake CMakeLists.txt
make

# Install the library just built
cp ./lib/libgtest*.a /usr/lib
