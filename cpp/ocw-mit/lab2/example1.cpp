//example from MIT6_096IAP11_lec04.pdf

#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char fragment1[] = "I'm a s";
  char fragment2[] = "tring!";
  char fragment3[20];
  char finalString[20] = "";

  strcpy (fragment3, fragment1);
  strcat(finalString, fragment3);
  strcat(finalString, fragment2);

  cout << finalString;

  return 0;
}
