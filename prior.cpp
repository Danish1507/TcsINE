#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 int mx=INT_MIN;
 vector<int> ans;
 for(int i=0; i<n; i++){
    if(v[i]>mx){
        ans.push_back(v[i]);
        mx=v[i];
    }
 }
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
    return 0;
}
