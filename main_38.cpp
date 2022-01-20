#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
#define PI 3.14159265
int main ()
{
  int a;
  cin >> a;
  cout << sin(a*PI/180) << endl;
  cout << cos(a*PI/180) << endl;
  cout << tan(a*PI/180) << endl;
  return 0;
}
