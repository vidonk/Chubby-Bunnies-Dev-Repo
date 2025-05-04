#include "main.h"// test test test test
#include "pros/abstract_motor.hpp" // test test test test 

bool buttonr2pressed = false;

pros::Motor slapper(10, pros::v5::MotorGears::red, pros::v5::MotorUnits::degrees);

pros::Motor motor (1,pros::v5::MotorGears::red, pros::v5::MotorUnits::degrees);

int slapperState =0;

void updateslapper () {
if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
    if (!buttonr2pressed) {

        buttonr2pressed = true;

        if(slapperState == 0 || slapperState == 2){
            slapperState=1;
            slapper.move_voltage(-6000);

        }else if (slapperState == 1) {
            slapperState = 0;
            slapper.move_voltage(0);
        }
     }
}
else{

    buttonr2pressed = false;
    }
}
