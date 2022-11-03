#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int ll
#define all(x) (x).begin(),(x).end()
const int mod = 1e9+7;
const double PI = acos( -1. );
void in(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void solve(){
    //in();
    vector<int> vec(5);
    iota(all(vec), 1);
    for(auto x:vec) cout << x << ' '; cout << '\n';
    vec.erase(vec.begin() + 2); // 2 or n th element
    // vector.erase( vector.begin() + 3, vector.begin() + 5 );
    for(auto x:vec) cout << x << ' ';
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; t = 1;
    //cin >> t;
    while(t--) solve();
}
/*
        ██╗  ██╗███╗   ██╗██╗   ██╗ █████╗ ███████╗        
        ██║ ██╔╝████╗  ██║╚██╗ ██╔╝██╔══██╗╚══███╔╝        
        █████╔╝ ██╔██╗ ██║ ╚████╔╝ ███████║  ███╔╝         
        ██╔═██╗ ██║╚██╗██║  ╚██╔╝  ██╔══██║ ███╔╝          
███████╗██║  ██╗██║ ╚████║   ██║   ██║  ██║███████╗███████╗
╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚══════╝
*/
