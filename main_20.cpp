#include <iostream>
using namespace std;
int main(){
    bool a = false, b = true;
    bool q = (a and b), w = (a or b), e = (a xor b);
    cout << a << b << !a << !b << q << w << e << endl;
    return 0;
}
