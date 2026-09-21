#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern ez::Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');

inline pros::Motor intake(6, pros::MotorGears::blue);
inline pros::Motor cascade1(4, pros::MotorGears::blue);
inline pros::Motor cascade2(-5, pros::MotorGears::blue);

inline pros::Rotation cascadeSensor(7);

inline pros::ADIDigitalOut clawRotate({13,'C'});
inline pros::ADIDigitalOut clawGrab ({13,'A'});
inline pros::ADIDigitalOut clawPivot({13,'B'});