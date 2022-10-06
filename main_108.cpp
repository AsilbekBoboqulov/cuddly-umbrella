#include <bits/stdc++.h>
using namespace std;
long long gcd(long long n, long long m){
    if(!(n * m)) return n + m;
    if(n > m) return gcd(n % m, m);
    else return gcd(m % n, n);
}
int main()
{
    long long n, m; cin >> n >> m;
    cout << gcd(n, m);
}
