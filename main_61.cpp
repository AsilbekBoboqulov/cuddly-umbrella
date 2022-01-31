#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b=0;cin>>a;
    for (int i = 0; i <= a; i++){
        b += i*(i+1)*(i+2);
    }
    cout << b;
}
