#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define f(i,s,n) for (int i = s; i < n; i++)
#define fv() for(auto q:v){cout<<q<<' ';}
#define c cin
int main()
{
	ll n; cin >> n;
	vi v(n);
	
	f(i,0,n){c>>v[i];}
	fv();

	return 0;
}
