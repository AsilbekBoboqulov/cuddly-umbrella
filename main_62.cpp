#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b=0;cin>>a;
    for (int i = 1; i <= a; i++){
        b += (2*i-1);
    }
    cout << b;
}
