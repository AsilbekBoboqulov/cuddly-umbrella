#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int main()
{
    long long n,m=0,p=0,k=0;cin>>n;
    for(int i = 2; i < int(sqrt(n)); i++){
        if(n%i==0) m++;
        if(m==0){
            while(n>0){k=k*10+n%10;n=n/10;}
            for(int j = 2; j < int(sqrt(k)); j++)
                if(k%i==0) p++;
                if(p==0){ cout<<"Yes"; break; }
                else{ cout << "No"; break;}
            }
            else{ cout << "No"; break;}
    }
}
