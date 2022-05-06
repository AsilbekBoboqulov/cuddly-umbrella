#include <iostream>
using namespace std;
int main()
{
    unsigned long long n, k = 0; cin >> n;
    while(n>0){
        k = k * 10 + n % 10;
        n = n / 10;
    }
    cout << k;
}
