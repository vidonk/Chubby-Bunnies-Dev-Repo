#include "main.h"// test test test test test test test 

pros:: Motor intake (4, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees); //setting the motor (4 is the intake port)

bool buttonl1Pressed = false;
bool buttonl2Pressed = false;
int intakeState = 0;
void updateintake () {  // void because it is no output, you just need to switch states
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
    if (!buttonl2Pressed) {

        buttonl2Pressed = true;

        if(intakeState == 0){
            intakeState=1;
            intake.move_voltage(-12000);

        }else if (intakeState == 1) {
            intakeState = 0;
            intake.move_voltage(0);
        }
     }
    }
    else{

        buttonl2Pressed = false;

    }
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) {
    if (!buttonl1Pressed) {

        buttonl1Pressed = true;

        if(intakeState == 0){
            intakeState=2;
            intake.move_voltage(12000);

        }else if (intakeState) {
            intakeState = 0;
            intake.move_voltage(0);
        }
     }
    }
    else{

        buttonl1Pressed = false;
        
    }
/*
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1)){ //when i press the button i will switch the state of my intake, on and off
        //checks if the controller is pressed
        if (!buttonl1Pressed){

            buttonl1Pressed = true;

            if (intakeState == 0 || intakeState == 2) {
                intakeState = 1;
                intake.move_voltage(-12000);

            } else if (intakeState == 1) {
                intakeState == 0;
                intake.move_voltage(0);
            }
        }
    } else {
        buttonl2Pressed = false;
    }

    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)){ //when i press the button i will switch the state of my intake, on and off
    //checks if the controller is pressed
        if (!buttonl2Pressed){

            buttonl2Pressed = true;

            if (intakeState == 0 || intakeState == 1) {
                intakeState = 2;
                intake.move_voltage(12000);

            } else if (intakeState == 1) {
                intakeState == 0;
                intake.move_voltage(0);
            }
        }
    } else {
        buttonl2Pressed = false;
    }
    */
} 
     


