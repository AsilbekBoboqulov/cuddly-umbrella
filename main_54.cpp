#include <iostream>
using namespace std;
int main()
{
    int a = 123456789;
    cout << &a <<"\n";
    cout << *&a <<"\n";
    cout << &*&a <<"\n";
}
