#include <iostream> 

int main()
{
  char sensor_color;
  char fms_color;
  float rotate;
  using namespace std;
  sensor_color = camera_input
  fms_color = player_input
 
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
	  	}
	  }
}  
