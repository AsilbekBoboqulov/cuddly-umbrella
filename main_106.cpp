#include <bits/stdc++.h>
using namespace std;
void prnt(vector<int> vec){
	for(int i = 0; i < vec.size(); ++i){
		cout << vec[i] << ' ';
	}
	cout << '\n';
}
int subset(vector<int> vec, int n, int k){
	if(k > n){
		prnt(vec);
		return 0;
	}
	else{
		vec.push_back(k);
		subset(vec, n, k + 1);
		vec.pop_back();
		subset(vec, n, k + 1);
	}

}
int main(int argc, char const *argv[])
{
	vector<int> vec;
	//iota(vec.begin(), vec.end(), 0);
	subset(vec, 2, 0);
	return 0;
}
