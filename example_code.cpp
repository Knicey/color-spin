#include <iostream> 

int main()
{
  char sensor_color;
  char fms_color;
  float rotate;
  using namespace std;
  //This is the actual code that would be used, it's commented currently to test the rest of the function
  //sensor_color = camera_input
  //fms_color = player_input
  
  //These are just to test inputs (temporary)
  cout << "Input Current Color: ";
  cin >> sensor_color;
  cout << "Input Target Color: ";
  cin >> fms_color;
  
  //The first if-elseif statement can only check for 3 different conditions, that is why the last operation leads into an if-else
  if ( sensor_color == 'r' ) {
    if ( fms_color == 'y' ) {
    rotate = .125;
    }
    else if ( fms_color == 'c' ) {
        rotate = .25;
    else if ( fms_color == 'g' ) {   
	rotate = -.125;
    }
    }	
  }
  else if ( sensor_color == 'y' ) {
    if ( fms_color == 'r' ) {
      rotate = -.125;
    }
    else if ( fms_color == 'c' ) {
      rotate = .125;
      rotate = .25;
    }
    if ( sensor_color == 'c' ) {
      if ( fms_color == 'r' ) {
        rotate = .25;
      }
      else if ( fms_color == 'y' ) {
        rotate = -.125;
        rotate = .125;
      }
    }
    else {
      if ( fms_color == 'r' ) {
        rotate = .125;
      }
      else if ( fms_color == 'y' ) {
        rotate = .25;
        rotate = -.125;
      }
    }
  }
  cout << rotate;
}
