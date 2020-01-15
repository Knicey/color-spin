#include <iostream> 

int main()
{
  char color;
  char color2;
  float rotate;
  
  //color = camera_input
  //color2 = player_input
  cin >> color;
  cin >> color2;
  
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
