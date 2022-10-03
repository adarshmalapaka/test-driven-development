/**
 * @file PID.cpp
 * @author Adarsh Malapaka (adarshmalapaka98@gmail.com)
 * @brief Implementation of the methods of PID class.
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/PID.hpp"

double PID::set_Kp(double kp) {
    m_K_p = 0;
    return m_K_p;
}

double PID::set_Ki(double ki) {
    m_K_i = 0;
    return m_K_i;
}

double PID::set_Kd(double kd) {
    m_K_d = 0;
    return m_K_d;
}

double PID::set_dt(double dt) {
    m_dt = 0;
    return m_dt;
}

double PID::compute(double ref_vel, double vel) {
    return 12.34;  // Stub implementation
}
