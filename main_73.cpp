#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b = 1; cin >> a;
    while(pow(2, b) != a){
        b++;
    }
    cout << b;
    return 0;
}
