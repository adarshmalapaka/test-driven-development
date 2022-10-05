[![Build Status](https://app.travis-ci.com/adarshmalapaka/test-driven-development.svg?branch=main)](https://app.travis-ci.com/adarshmalapaka/test-driven-development) [![Coverage Status](https://coveralls.io/repos/github/adarshmalapaka/test-driven-development/badge.svg?branch=main)](https://coveralls.io/github/adarshmalapaka/test-driven-development?branch=main)

# Test-Driven Development - Group 3

## Overview
Implementation of a PID controller for an imaginary company, Acme Robotics using pair programming wherein a group of 4 members were split into teams of two each consisting of a driver and a navigator. These roles were then reversed in the second phase of the exercise to implement and review the other group's code design.

## Team 1 Members:
- Driver: Adarsh Malapaka (UID: 118119625) 
- Navigator: Sanchit Kedia (UID: 119159620)

## Part2: Team 2 Members
- Driver: Rishabh Singh (UID: 117511208)
- Navigator: Vishaal Kanna (UID: 117764314)

# Compilation
```
cd test-driven-development
mkdir build && cd build
cmake .. 
make
```

## Build for Code Coverage
```
cd build
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make 
make code_coverage
```

## Run

1. Once inside the `/build` directory as done above, run: `./app/pid`
2. To run Google Test: `./test/pid-test`

## cpplint

Change to the `/app` directory, and run:
```
cpplint main.cpp > ../results/cpplint_main.txt
cpplint PID.cpp > ../results/cpplint_pid.txt
cpplint ../test/test.cpp > ../results/cpplint_test.txt
```

## cppcheck

Change to the `root` directory, and run:
```
cppcheck --enable=all --std=c++11 --suppress=missingIncludeSystem . --suppress=unmatchedSuppression $( find . -name *.cpp | grep -vE -e "^./build/" ) --force --output-file=../results/cppcheck.txt
```
## notes and todo statements
- User handling for gain values and test cases required
- The gain values in the test cases were high and did not allow the error to converge
- Test cases compute 2 and compute 3 seems redundant