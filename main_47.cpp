#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    for (long long i = 1; i <= 9; i++){
        cout << (pow(2,i))*(pow(2, i+1)-1)<< "\n";
    }
}
