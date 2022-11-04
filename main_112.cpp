#include <bits/stdc++.h>
using namespace std;
int BinSearch(vector<int> &vec, int l, int r, int q){
    while(l<=r){
        int mid = l + (r - l)/2;
        if(vec[mid]==q) return mid;
        if(vec[mid]<q) l = mid+1;
        if(vec[mid]>q) r = mid-1;
    }
    return -1;
}
int main()
{
    int n, q; cin >> n >> q;
    vector<int> vec(n);
    iota(vec.begin(), vec.end(), 0);
    cout << BinSearch(vec, 0, n-1, q);
}
