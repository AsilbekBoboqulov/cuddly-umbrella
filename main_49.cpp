#include <iostream>
using namespace std;
int main()
{
    int a[] = {9,8,7,6,5,4,3,2,1};
    for (int b = 0; b <= (*(&a + 1) - a); b++)
    {
        cout << a[b] << "\n";
    }
}
