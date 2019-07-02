# Modified_DarwinOP2_Webots_Simulation
* ROS-integrated Biped Robot(Darwin-OP2) Simulator
* Original Darwin-OP2 robot model is modified to be capable of simulating DepthCamera simulation along with whole state transmission to ROS environment
* Modification details:
  1. Intel D435 depth sensor is mounted at its head (used Intel-provided mechanical parameters + sensor locations)
  2. Odroid XU4 is mounted at its back.
  3. DarwinOP2State msg is newly defined to have following information:
    - 8 fsr sensors
    - Motor encoder readings
    - Force/torque sensors of all joints
  4. RGB & Depth sensor images

# How to use it
- Use the world file along with our controlle "ros_darwinop2"

# License
* GNUv3

# Maintainer
* HRVL(Human-centered Robotics and Vision lab) @ Daejeon University
* Prof. Jeong-Ki Yoo

# Acknowledgement
This work was supported by the National Research Foundation of Korea(NRF) grant funded by the Korea government(MSIT) (No. 2016R1C1B2012348).
