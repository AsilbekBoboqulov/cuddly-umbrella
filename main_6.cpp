#include <iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream infile("input.txt");
  ofstream outfile("output.txt");
  long long a,b;
  infile >> a >> b;
  outfile << a + b;
  return 0;
}
