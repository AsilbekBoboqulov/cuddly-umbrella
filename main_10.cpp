#include <iostream>
using namespace std;
int main() {
    int n, a = 0, b;
    cin >> n;
    while(n != 0) {
        b = n%10;
        a = a*10 + b;
        n /= 10;
    }
    cout << a;
    return 0;
}
