#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int arr[n], deep[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		deep[i] = arr[i] + deep[i-1];
	}
	int q; cin >> q;
	while(q--){
		int l, r; cin >> l >> r;
		cout << deep[r-1] - deep[l-2] << endl;
	}
}
