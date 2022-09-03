#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin >> s; 
	vector<string> vec;
	for(int i = 0; i < s.size(); ++i){
		string q; 
		q = s.substr(i, s.size());
		vec.push_back(q);
	}
	sort(vec.begin(), vec.end());
	for(auto x : vec) cout << x << '\n';
}
