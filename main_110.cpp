#include <bits/stdc++.h>
#include <unordered_map>
#include <list> 
#include <queue>
using namespace std;
using ll = long long;
#define int long long
#define all(x) (x).begin(),(x).end()
const int mod = 1e9+7;
const double PI = acos( -1. );
void prepareAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> &edge){
    for(int i = 0; i < edge.size(); i++){
        int u = edge[i].first;
        int v = edge[i].second;
        
        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}
void printAdj(unordered_map<int, set<int>> &adjList){
    for(auto i:adjList){
        cout << i.first << "-> ";
        for(auto j:i.second){
            cout << ", ";
        }
        cout << '\n';
    }
}
void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited,
    vector<int> &ans, int node){
    queue<int> q; q.push(node);
    visited[node] = 1;
    
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);
        
        for(auto i:adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
vector<int> BFS(int vertex, vector<pair<int,int>> edges){
    unordered_map<int, set<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;
    prepareAdjList(adjList, edges);
    //printAdj(adjList);
    
    for(int i = 0; i < vertex; i++){
        if(visited[i]){
            bfs(adjList, visited, ans, i);
        }
    }
    return ans;
}
void in(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void solve(){
    //in();
    //BFS();
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; t = 1;
    //cin >> t;
    //while(t--) solve();
    cout << "salom hammaga";
}
/*
        ██╗  ██╗███╗   ██╗██╗   ██╗ █████╗ ███████╗        
        ██║ ██╔╝████╗  ██║╚██╗ ██╔╝██╔══██╗╚══███╔╝        
        █████╔╝ ██╔██╗ ██║ ╚████╔╝ ███████║  ███╔╝         
        ██╔═██╗ ██║╚██╗██║  ╚██╔╝  ██╔══██║ ███╔╝          
███████╗██║  ██╗██║ ╚████║   ██║   ██║  ██║███████╗███████╗
╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚══════╝
*/
