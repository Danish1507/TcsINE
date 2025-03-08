#include <bits/stdc++.h>

using namespace std;

int main(){
int n;
vector<int> v(n);
for(int i=0; i<n; i++){
cin>>v[i];
}
int mx=v[0];
int mn=v[0];
int ans = v[0];
for(int i=1; i<n; i++){
if(v[i]<0){
  swap(mn,mx);
}
mn=min(v[i],mn*v[i]);
mx=max(v[i],mx*v[i]);
ans=max(ans,mx);
}
cout<<ans;

return 0;
}