#include <stdio.h>
typedef unsigned int uint;
#define RGB(R,G,B)(((int)(R) << 12) +( (int)(G) << 8) + ((int)(B)<<4))

int main(){
  uint color = 0;
  char R = 10;
  char G = 5;
  char B = 3;
  color = RGB(R,G,B);
  printf("%x \n",color);

}
