#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int arr[n][n], deep[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
			deep[i][j] = arr[i][j]+deep[i-1][j]+deep[i][j-1]-deep[i-1][j-1];
		}
	}
	int q; cin >> q;
	while(q--){
		int x1,x2,y1,y2;
		cin >> x1 >> x2 >> y1 >> y2;
		cout << deep[y1-1][y2-1] - deep[x1-2][y2-1] - deep[x1-1][y2-1] + deep[x1-2][x2-2] <<endl;
	}
}
