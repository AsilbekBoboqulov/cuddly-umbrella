///Bismillahir Rohmaniym Rohiym
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define sc second
#define int long long
#define sz(x) long((x).size())
#define all(x) (x).begin(), (x).end()
const int mod = 1e9+7;
const double PI = acos( -1. );
void in(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void solve(){
    int n, m, q; cin >> n >> m >> q;
    vector<vector<int>> vec, pref;
    for(int i = 0; i < n + 1; i++){ vector<int> arr(m + 1, -1); pref.push_back(arr); vec.push_back(arr); }
    for(int i = 1; i < n + 1; i++) for(int j = 1; j < m + 1; j++) cin >> vec[i][j];
    for(int i = 0; i < n + 1; i++) pref[i][0] = 0;
    for(int i = 0; i < m + 1; i++) pref[0][i] = 0;
    for(int q = 0; q < n + m + 2; q++){
        for(int i = 1; i < n + 1; i++){
            for(int j = 1; j < m + 1; j++){
                if(pref[i-1][j] != -1 && pref[i][j-1] != -1) pref[i][j] = vec[i][j] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
            }
        }
    }
    //for(auto x:pref){ for(auto y:x) cout << y << ' '; cout << '\n'; }
    while(q--){
        int x, y, i, j; cin >> x >> y >> i >> j;
        cout << pref[i+1][j+1] - pref[x][j+1] - pref[i+1][y] + pref[x][y] << '\n';
    }
}
/*
4 5 2
1 5 6 11 8
1 7 11 9 4
4 6 1 3 2
7 5 4 2 3
0 0 3 4
2 3 3 4

100
10
*/
signed main(){
    in();
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
