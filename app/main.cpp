/**
 * @file main.cpp
 * @author Adarsh Malapaka (adarshmalapaka98@gmail.com), Sanchit Kedia (sanchit@terpmail.umd.edu)
 * @brief
 * @version 0.1
 * @date 2022-10-02
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>

#include "PID.hpp"

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief Function to take input from user and compute the final velocity.
 *
 * @return int 0
 */
int main() {
  double kp, ki, kd, dt, ref_vel, vel = 0;

  PID pid;
  cout << "Enter value of Kp: ";
  cin >> kp;
  pid.set_Kp(kp);

  cout << "Enter the value of Ki: ";
  cin >> ki;
  pid.set_Ki(ki);

  cout << "Enter the value of Kd: ";
  cin >> kd;
  pid.set_Kd(kd);

  cout << "\nEnter the value of dt: ";
  cin >> dt;
  pid.set_dt(dt);

  // Assuming the robot starts from 0 m/s velocity
  cout << "\nEnter the desired velocity: ";
  cin >> ref_vel;
  cout << "The final controlled velocity: " << pid.compute(ref_vel, vel)
       << endl;
}
