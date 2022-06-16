#include <iostream>
using namespace std;
int rev(int n){
    int s = 0;
    while(n>0){
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
int sum(int n){
    int k = 0;
    while(n>0){
        k+=n%10;
        n/=10;
    }
    return k;
}
int mtp(int n){
    int k = 1;
    while(n>0){
        k*=n%10;
        n/=10;
    }
    return k;
}
int main()
{
    int n; cin >> n;
    cout << mtp(sum(rev(n)));
}
