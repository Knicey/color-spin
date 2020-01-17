#include "iostream"

#include "ros/ros.h"

bool add([]::[]::Request &req,
	[]::[]::Response &res)

{
  if (sensor_color == 'r') {
	  if (fms_color == 'y') {
		  rotate = .125;
		}
	  else if (fms_color == 'c') {
		  rotate = .25;
		}
	  else if (fms_color == 'g') {
	  	  rotate = -.125;	
	  	}
	  }
 
  else if (sensor_color == 'y') {
	  if (fms_color == 'r') {
		  rotate = -.125;
		}
	  else if (fms_color == 'c') {
		  rotate = .125;
		}
	  else if (fms_color == 'g') {
	  	  rotate = .25;
	  	}
	  }

  else if (sensor_color == 'c') {
	  if (fms_color == 'r') {
		  rotate = .25;
		}
	  else if (fms_color == 'y') {
		  rotate = -.125;
		}
	  else if (fms_color == 'g') {
	  	  rotate = -.125;
	  	}
   	  }

  else if (sensor_color == 'g') {
	  if (fms_color == 'r') {
		  rotate = .125;
		}
	  else if (fms_color == 'y') {
		  rotate = .25;
		}
	  else if (fms_color == 'c') {
	  	  rotate = -.125;	
	return true;

}

int main(char color1, char color2)
{
	ros::init(argc, argv, "color_spin");
	
	ros::NodeHandle nh;

	
	ros::ServiceServer service = n.advertiseService("color_spin_rotation", add)
	
	ROS_INFO(
	ros::spin();

	return 0;

}

