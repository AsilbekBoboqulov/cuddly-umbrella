#include <iostream>
using namespace std;
int main(){
    long long a, b, c, d;
    a = 1<<31;
    b = 1LL<<31;
    c = 1<<32;
    d = 1LL<<32;
    cout << a << endl << b << endl << c << endl << d;
    return 0;
}
