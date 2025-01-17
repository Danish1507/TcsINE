#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n){
        if(n%2) v.push_back(1);
        else v.push_back(0);
        n=n/2;
    }
    int x=v.size();
    reverse(v.begin(),v.end());
    for(int i=0; i<x; i++){
        if(v[i]==0) v[i]=1;
        else v[i] =0;
    }
    int ans=0;
    for(int i=0; i<x; i++){
        ans+=pow(2,x-1-i)*v[i];
    }
    cout<<ans;
    return 0;
}