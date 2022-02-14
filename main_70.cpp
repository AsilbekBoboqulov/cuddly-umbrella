#include <iostream>
using namespace std;
int main()
{
	unsigned long long a,b = 1;
	cin >> a;
	for (unsigned long long i = 1; i <= a; ++i){
        b *= i;
	}
    cout << b;
}
