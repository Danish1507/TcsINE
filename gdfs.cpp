#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> adj;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        for(int j=0; j<x; j++){
            cin>>adj[i][j]
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<adj[i].size(); j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}