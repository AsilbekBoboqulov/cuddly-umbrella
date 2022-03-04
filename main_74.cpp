#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {6,5,3,8,2,0,9,2};
    int l = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+l);
    for(int i = 0; i<l; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
