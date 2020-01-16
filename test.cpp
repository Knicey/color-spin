#include <iostream> 

int main()
{
  char color1;
  char color2;
  float rotate;
  using namespace std;
  //This is the actual code that would be used, it's commented currently to test the rest of the function
  //color = camera_input
  //color2 = player_input
  
  //These are just to test inputs (temporary)
  cin >> color1;
  cin >> color2;
  
  //The first if-elseif statement can only check for 3 different conditions, that is why the last operation leads into an if-else
  if (color1 == 'r') {
	  if (color2 == 'y') {
		  rotate = .125;
		}
	  if (color2 == 'c') {
		  rotate = .25;
		}
	  if (color2 == 'g') {
	  	  rotate = -.125;	
	  	}
	  }
 
  if (color1 == 'y') {
	  if (color2 == 'r') {
		  rotate = -.125;
		}
	  if (color2 == 'c') {
		  rotate = .125;
		}
	  if (color2 == 'g') {
	  	  rotate = .25;
	  	}
	  }

   if (color1 == 'c') {
	  if (color2 == 'r') {
		  rotate = .25;
		}
	  if (color2 == 'y') {
		  rotate = -.125;
		}
	  if (color2 == 'g') {
	  	  rotate = -.125;
	  	}
   	  }

  if (color1 == 'g') {
	  if (color2 == 'r') {
		  rotate = .125;
		}
	  if (color2 == 'y') {
		  rotate = .25;
		}
	  if (color2 == 'c') {
	  	  rotate = -.125;	
	  	}
	  }

  cout << rotate;
}  
