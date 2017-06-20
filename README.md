# Unscented Kalman Filter Project
Self-Driving Car Engineer Nanodegree Program

In this project, an Unscented Kalman Filter is implemented to estimate the state of a moving object of interest with noisy lidar and radar measurements.
Unscented Kalman Filter is better over Extended Kalman Filtering given the fact UKF avoids Jacobian and models non-linearity well in both process model and measurement model.

Achieved accuracies in the estimated results with synthetic data("obj_pose-laser-radar-synthetic-input.txt") provided are:
RMSE
0.0743582
0.0859997
0.36399
0.251805


the main program can be built and ran by doing the following from the project top directory.

1. mkdir build
2. cd build
3. cmake ..
4. make
5. ./UnscentedKF

## Other Important Dependencies

* cmake >= v3.5
* make >= v4.1
* gcc/g++ >= v5.4

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./UnscentedKF path/to/input.txt path/to/output.txt`. You can find
   some sample inputs in 'data/'.
    - eg. `./UnscentedKF ../data/obj_pose-laser-radar-synthetic-input.txt`

