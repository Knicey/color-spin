#include <iostream> 

int main()
{
  char color;
  char color2;
  float rotate;
  
  //This is the actual code that would be used, it's commented currently to test the rest of the function
  //color = camera_input
  //color2 = player_input
  
  //These are just to test inputs (temporary)
  cin >> color;
  cin >> color2;
  
  //The first if-elseif statement can only check for 3 different conditions, that is why the last operation leads into an if-else
  if ( color == r ) {
    if ( color2 == y ) {
    rotate = .125
    }
    else if ( color2 == c ) {
        rotate = .25 )
        rotate = -.125
    }	
  }
  else if ( color == y ) {
    if ( color2 == r ) {
      rotate = -.125
    }
    else if ( color2 == c ) {
      rotate = .125
      rotate = .25
    }
    if ( color == c ) {
      if ( color2 == r ) {
        rotate = .25
      }
      else if ( color2 == y ) {
        rotate = -.125
        rotate = .125
      }
    }
    else {
      if ( color2 == r ) {
        rotate = .125
      }
      else if ( color2 == y ) {
        rotate = .25
        rotate = -.125
      }
    }
  }
  cout << rotate;
}
