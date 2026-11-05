#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1]; // Using vector of vectors to represent adjacency list.
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v); // Adding edge to the adjacency list.
        adj[v].push_back(u); // Since the graph is undirected, add edge in both directions.
        //agr mera graph directed hota to sirf adj[u].push_back(v); hi likhna parta.
    }
}
