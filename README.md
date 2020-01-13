###### 3DOF-RoboticArm-SPG30E


![Image description](https://github.com/hologram94/3DOF-RoboticArm-SPG30E/blob/master/Assembly%20v17.png)


### Description
This project was designed for a Robotics Class in order to further understand the operation of a robotic arm including DH Parameters, Forward Kinematics and Inverse Kinematics. The robot is a 3 Degree of Freedom robot using SPG30E motor.
There are 3 SPG30E Motor and 1 SG90 Servo.

### STL Files
The stl files are ready to print and assembled. Print settings can be found at https://www.thingiverse.com/thing:4065790

### Prerequisite (software)
1. Install the Arduino PID library included in the repository

### Prerequisite (hardware)
1. Arduino Mega (1 unit)
2. Motor driver (2 unit if one motor driver have 2 channel)
3. 12V DC power supply (12V 2A is sufficient)
4. Jumper wires
5. Printed parts
6. 3 Pin Male adapter
7. M3 screws (6 for each motor)
8. SG90 Servo motor
9. Any gripper design from thingiverse. (we used this https://www.thingiverse.com/thing:2302957)

### Single Motor PID Coding
1. Please refer the coding for the connection of the SPG30E,motor driver and arduino.
2. Adjust the PPR accordingly to your type of SPG30E-xxxk
	for example, on cytron webpage, the ppr is 600 for 90degree, so a full 360 is 2400.
