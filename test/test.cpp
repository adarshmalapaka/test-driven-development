/**
 * @file test.cpp
 * @author Adarsh Malapaka (adarshmalapaka98@gmail.com)
 * @brief Code for unit testing purposes
 * @version 0.1
 * @date 2022-10-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <gtest/gtest.h>

#include "../include/PID.hpp"

TEST(PID, checkGains) {
  PID pid;
  EXPECT_DOUBLE_EQ(pid.set_Kp(10), 10);
  EXPECT_DOUBLE_EQ(pid.set_Ki(1), 1);
  EXPECT_DOUBLE_EQ(pid.set_Kd(5), 5);
  EXPECT_DOUBLE_EQ(pid.set_dt(0.01), 0.01);
}

TEST(PID, compute1) {
  PID pid;
  pid.set_Kp(10);
  pid.set_Ki(10);
  pid.set_Kd(10);
  pid.set_dt(0.01);
  EXPECT_NEAR(pid.compute(15, 0), 15, 0.01);
}

TEST(PID, compute2) {
  PID pid;
  pid.set_Kp(5);
  pid.set_Ki(5);
  pid.set_Kd(5);
  pid.set_dt(0.05);
  EXPECT_NEAR(pid.compute(0, 0), 0, 0.01);
}

TEST(PID, compute3) {
  PID pid;
  pid.set_Kp(1);
  pid.set_Ki(1);
  pid.set_Kd(1);
  pid.set_dt(0.02);
  EXPECT_NEAR(pid.compute(43, 43), 43, 0.01);
}
