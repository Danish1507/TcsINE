#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
  int z=0 , one =0, two=n-1;
  while(two>=one){
   if(v[one]==0){
    swap(v[z],v[one]);
    one++;
    z++;
   }
   else if(v[one]==1) one++;
   else if(v[one]==2){
    swap(v[one],v[two]);
    // one++;
    two--;
   }
  }
  for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
  }
    return 0;
}
