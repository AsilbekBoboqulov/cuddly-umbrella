#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	int arr[n][n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
		int l = sizeof(arr[i])/sizeof(arr[i][0]);
		sort(arr[i], arr[i]+l);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
