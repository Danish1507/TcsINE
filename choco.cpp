#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
int i=0;
    while(i<n){
        if(v[i]==0){
            int j=i+1;
            while(v[j]==0 && j<n) j++;
            if(j==n) break;
            swap(v[i],v[j]);
           }
           i++;
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}