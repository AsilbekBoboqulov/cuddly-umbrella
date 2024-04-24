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
string bin(int i, int n){
    string s = ""; i *= 2;
    while(i >>= 1)
        s += (i & 1 ? '1' : '0');
    while(sz(s) < n) s += '0';
    reverse(all(s));
    return s;
}
void solve(int q){
    cout << ((1<<q)+4*(1<<(q/5)))/5<<' ';
    int n = q; int cnt = 0;
    vector<int> vec(n);
    iota(all(vec), 1); //reverse(all(vec));
//    for(auto x:vec) cout << x << ' ';
    for(int i = 0; i < (1 << n); i++){
        string s = bin(i, n); int sum = 0;
        for(int j = 0; j < sz(s); j++)
            if(s[j]-'0') sum += vec[j];
        if(sum % 5 < 1){
            cnt ++;
            //for(int j = 0; j < sz(s); j++)
            //if(s[j]-'0') cout << vec[j] << ' ';
            //cout << '\n';
        }
    }
    cout <<cnt<< ' ' << "->" <<q<< '\n';
}
signed main(){
    //in();
    cin.tie(0)->sync_with_stdio(0);
    int t; t = 23;
    //cin >> t;
    while(t--) solve(t);
}
/*
        ██╗  ██╗███╗   ██╗██╗   ██╗ █████╗ ███████╗
        ██║ ██╔╝████╗  ██║╚██╗ ██╔╝██╔══██╗╚══███╔╝
        █████╔╝ ██╔██╗ ██║ ╚████╔╝ ███████║  ███╔╝
        ██╔═██╗ ██║╚██╗██║  ╚██╔╝  ██╔══██║ ███╔╝
███████╗██║  ██╗██║ ╚████║   ██║   ██║  ██║███████╗███████╗
╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚══════╝
*/
