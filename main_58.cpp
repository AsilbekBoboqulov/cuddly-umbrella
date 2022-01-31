#include<iostream>
using namespace std;
int main()
{
    int a,b=0;cin>>a;
    for (int i = 0; i <= a; i++){
        b += i*i;
    }
    cout << b;
}
