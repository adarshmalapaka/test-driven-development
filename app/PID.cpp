/**
 * @file PID.cpp
 * @author Adarsh Malapaka (adarshmalapaka98@gmail.com), Sanchit Kedia (sanchit@terpmail.umd.edu)
 * @brief Implementation of the methods of PID class.
 * @version 0.1
 * @date 2022-10-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../include/PID.hpp"

#include <cmath>

PID::PID() {
  m_K_p = 0.0;
  m_K_i = 0.0;
  m_K_d = 0.0;
  m_dt = 0.0;
}

double PID::set_Kp(double kp) {
  m_K_p = kp;
  return m_K_p;
}

double PID::set_Ki(double ki) {
  m_K_i = ki;
  return m_K_i;
}

double PID::set_Kd(double kd) {
  m_K_d = kd;
  return m_K_d;
}

double PID::set_dt(double dt) {
  m_dt = dt;
  return m_dt;
}

double PID::compute(double ref_vel, double vel) {
  double tot_error = 0;
  double prev_error = 0;
  if (ref_vel == vel) {
    return ref_vel;
  }
  while (std::abs(ref_vel - vel) > 0.01) {
    double curr_error = ref_vel - vel;
    tot_error += curr_error;
    double control_output = m_K_p * (curr_error) +
                            m_K_d * (curr_error - prev_error) / m_dt +
                            m_K_i * (tot_error)*m_dt;
    prev_error = curr_error;
    vel += control_output * m_dt;
  }

  return vel;  // Final implementation
}
