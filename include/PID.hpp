/**
 * @file PID.hpp
 * @author Adarsh Malapaka (adarshmalapaka98@gmail.com)
 * @brief Class definition for the PID controller.
 * @version 0.1
 * @date 2022-10-02
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef PID_HPP_
#define PID_HPP_

/**
 * @brief Defines the PID controller class. 
 * 
 */
class PID {
 public:
    /**
    * @brief Sets the Kp gain
    * 
    * @param kp Proportional Gain
    */
    void set_Kp(double kp);

    /**
     * @brief Sets the Ki gain
     * 
     * @param ki Integral Gain
     */
    void set_Ki(double ki);

    /**
     * @brief Sets the Kd gain
     * 
     * @param kd Derivative Gain 
     */
    void set_Kd(double kd);

    /**
     * @brief Computes PID control action on the error.
     * 
     * @param ref_vel Reference Velocity (m/s)
     * @param vel Current Velocity (m/s)
     * @return double Control action (m/s) 
     */
    double compute(double ref_vel, double vel);

 private:
    double m_K_p;
    double m_K_i;
    double m_K_d;
    double m_dt;    // small time change
};

#endif  // PID_HPP_
