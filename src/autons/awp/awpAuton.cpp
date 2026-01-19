#include "main.h"

void awp_auton() {
    /* ---- FIRST SEQUENCE, THREE BALLS */
    chassis.pid_odom_set({{0.0_in, 30.0_in}, fwd, 110}); // go to the three blocks in the middle
    chassis.pid_wait_until(20.0_in); // wait until close to the blocks 
    intake.move(127); // intake the balls
    matchload.set(true); // deploy pneumatics
    chassis.pid_wait(); // wait
    pros::delay(200); // give time for intake to grab balls
    matchload.set(false);
        /* ---- SECOND SEQUENCE, NE MATCHLOAD, THREE BALLS ---- */
    chassis.pid_odom_set({{{-15.252_in, 22.239_in, 250_deg}, fwd, 110},
                          {{-30.794_in, 16.556_in, 199_deg}, fwd, 110},
                          {{-36.537_in, 1.169_in, 200.3_deg}, fwd, 110}},
                         true);
    chassis.pid_wait_until({-27.91_in, 24.612_in}); // wait until reaching matchload position
    matchload.set(true); // activate matchload
    pros::delay(1000); // give time for matchload to deploy
    chassis.pid_wait();
    /* ---- THIRD SEQUENCE, N LONGOAL, SCORE 6 BALLS ---- */
    chassis.pid_odom_set({{-26.541_in, 29.167_in}, rev, 110},
                        true);
    chassis.pid_wait();
    lever.move(127);
    /* ---- FORTH SEQUENCE, NW BALLS, PICKUP 3 BALLS ---- */
    chassis.pid_odom_set({{{29.997_in, 4.682_in}, fwd, 110},
                          {{34.4_in, 7.381_in}, fwd, 110},
                          {{42.808_in, 12.342_in}, fwd, 110}},
                         true);
    chassis.pid_wait_until({34.4_in, 7.381_in}); // wait until reaching the first NW ball
    matchload.set(true);
    intake.move(127); // intake the balls
    chassis.pid_wait();
    pros::delay(200); // give time for intake to grab balls*/

}