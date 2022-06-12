#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v(5);
	v[0] = 10;
	v[1] = 22;
	v[2] = 5;
	v.push_back(78);
	cin >> v[4];
	cout << v.front() << endl << v.back() << endl << v.at(4);	
}
