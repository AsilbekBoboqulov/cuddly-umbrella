#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int a;cin>>a;
    int arr[a];
    for(int j = 0; j<a; j++){
        cin>>arr[j];
    }
    int l = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+l);
    for(int i = 0; i<l; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
