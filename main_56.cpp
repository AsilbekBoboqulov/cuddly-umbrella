#include <iostream>
using namespace std;
int main() {
    int numbers[10];
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }
    for (int n = 0; n < 5; ++n) {
        cout << numbers[n] << "  ";
    }
    return 0;
}
