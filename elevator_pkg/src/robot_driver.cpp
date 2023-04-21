#include <elevator_pkg/RobotDriver.h>
#include <elevator_pkg/ElevatorCoordinator.h>
#include "ros/ros.h"

int main(int argc, char** argv){
    ros::init(argc, argv, "robot_driver");

    ros::NodeHandle n;
    RobotDriver robotDriver;
    ElevatorCoordinator ec(n);
    bool isSuccessful = robotDriver.drive("/outside_elevator_2nd");
    if (isSuccesful) {
      ec.callElevator(2, 1);
    }
    /*
        Could put Landmarks here, or run it separately
        Definitely put ElevatorCoordinator in here
        RobotDriver

        robotDriver.drive(outside_elevator); <-- Using the Landmark you made, and using tfBuffer.lookupTransform between /base_link and /outside_elevator
        call elevator
        That should automatically keep the elevator open
        

    */

  return 0;
}
