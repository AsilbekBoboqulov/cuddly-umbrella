//Bismillahir Rohmaniym Rohiym
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define sz(x) (x).size()
#define all(x) (x).begin(),(x).end()
const int mod = 1e9+7;
const double PI = acos( -1. );
void in(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void solve(){
    //in();
    int n, k; cin >> n >> k;
    vector<int> vec(n);
    for(auto &x:vec) cin >> x;
    double ans, c = 0;
    for(int i = 0; i < k; i++) c += vec[i];
    ans = c;
    for(int i = 1; i <= sz(vec)-k; i++){
        c = c - vec[i-1]+vec[i+k-1];
        ans = max(ans, c);
    }
    printf("%f", ans / k);
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
