#include <iostream>
using namespace std;

unsigned long long  p(unsigned long long a,unsigned long long b){
    unsigned long long  c = 1;
    for(unsigned long long  i = 0; i < b; i++)
    {
        c = c * a;
    }
    return c;
}
int main()
{
    cout << p(2, 63);
}
