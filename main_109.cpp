#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++)
        cout << arr[i] << ' ';
    cout << '\n';
    for(int i = 0; i < 5; i++)
        cout << *(arr + i) << ' ';
    cout << '\n';
    for(int i = 0; i < 5; i++)
        cout << i[arr] << ' ';
}
