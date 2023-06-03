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
int X = 0, O = 0;
bool check(vector<vector<char>> vec){
    if(vec[0][0]==vec[0][1]&&vec[0][1]==vec[0][2]&&vec[0][0]!='.') return 1;
    if(vec[1][0]==vec[1][1]&&vec[1][1]==vec[1][2]&&vec[1][0]!='.') return 1;
    if(vec[2][0]==vec[2][1]&&vec[2][1]==vec[2][2]&&vec[2][0]!='.') return 1;
    if(vec[0][0]==vec[1][0]&&vec[1][0]==vec[2][0]&&vec[0][0]!='.') return 1;
    if(vec[0][1]==vec[1][1]&&vec[1][1]==vec[2][1]&&vec[0][1]!='.') return 1;
    if(vec[0][2]==vec[1][2]&&vec[1][2]==vec[2][2]&&vec[0][2]!='.') return 1;
    if(vec[0][0]==vec[1][1]&&vec[1][1]==vec[2][2]&&vec[0][0]!='.') return 1;
    if(vec[0][2]==vec[1][1]&&vec[1][1]==vec[2][0]&&vec[0][2]!='.') return 1;
    return 0;
}
/*
pair<int, int> get(vector<vector<char>> vec, pair<int, int> cnt, char frst, char secd){
    vector<vector<char>> arr = vec;
    if(check(arr)){ if(frst == 'X') cnt.sc ++; else cnt.ff ++; return cnt; }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == '.'){
                arr[i][j] = frst;
                pair<int, int> ans = get(arr, cnt, secd, frst);
                cnt.ff += ans.ff; cnt.sc += ans.sc;
                arr[i][j] = '.';
            }
        }
    }
    return cnt;
}
*/
void comb(vector<vector<char>> vec, char frst, char secd){
    bool tr = 1;
    vector<vector<char>> arr = vec;
    if(check(arr)){
        if(frst == 'X') O++;
        else X++;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            //cout << arr[i][j] << ' ';
            if(arr[i][j] == '.') tr = 0;
        }
        //cout << '\n';
    }
    if(tr || check(arr)) return;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == '.'){
                arr[i][j] = frst;
                comb(arr, secd, frst);
                arr[i][j] = '.';
            }
        }
    }
}
/*
OO.
X.X
OXX
*/
void solve(){
    vector<vector<char>> vec; int x = 0, o = 0;
    for(int i = 0; i < 3; i++){
        vector<char> arr(3); for(auto &x:arr) cin >> x;
        for(int j = 0; j < 3; j++){
            if(arr[j] == 'X') x++;
            if(arr[j] == 'O') o++;
        }
        vec.push_back(arr);
    }
    char frst = (x == o ? 'X' : 'O'), secd = 'X'; if(frst == 'X') secd = 'O';
    //cout << frst << ' ' << secd;
    //pair<int, int> pr = get(vec, {0, 0}, frst, secd);
    //cout << check(vec);
    comb(vec, frst, secd);
    cout << X << ' ' << O << '\n'; X = 0; O = 0;
    //cout << pr.ff << ' ' << pr.sc;
}
signed main(){
    //in();
    cin.tie(0)->sync_with_stdio(0);
    int t; t = 1;
    cin >> t;
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
