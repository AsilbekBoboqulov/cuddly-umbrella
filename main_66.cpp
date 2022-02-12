#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a = 7.1, b = 8.9;
	cout << "top " << floor(a) << " " << floor(b) << endl;
	cout << "bot " << ceil(a) << " " << ceil(b) << endl;
	cout << "int " << trunc(a) << " " << trunc(b) << endl;
	cout << "rou " << round(a) << " " << round(b);
}
