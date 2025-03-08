#include <bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
vector<pair<int,int>> v(n);
for(int i=0; i<n; i++){
cin>>v[i].first>>v[i].second;
}
vector<pair<int,int>> ans;
set<pair<int,int>> st;
for(int i=0; i<n; i++){
 int x=v[i].first;
 int y=v[i].second;
 if(st.find({y,x})!=st.end()){
    ans.push_back({min(x,y),max(x,y)});
}
else{
  st.insert({x,y});
}
}
for(auto x:ans){
   cout<<x.first<<","<<x.second<<endl;
}
return 0;
}