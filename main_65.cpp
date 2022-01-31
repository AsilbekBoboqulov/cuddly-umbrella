#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[] = {4,8,6,2,3,9,5,0,1,7};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a, a + n);

    for (int const &i: a) {
        std::cout << i << ' ';
    }
}
