#include "main.h"// test test test test
#include "pros/abstract_motor.hpp" // test test test test 

bool buttonR2pressed = false;

pros::Motor slapper(6, pros::v5::MotorGears::red, pros::v5::MotorUnits::degrees);

int slapperState = 0;

void updateslapper () {
if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
    if (!buttonR2pressed) {

        buttonR2pressed = true;

        if(slapperState == 0){
            slapperState = 1;
            slapper.move_voltage(10000);

        }else if (slapperState == 1) {
            slapperState = 0;
            slapper.move_voltage(0);
        }
     }
}
else{

    buttonR2pressed = false;
    }
} 
