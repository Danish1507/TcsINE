#include <bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0; i<n; i++){
  cin>>v[i];
 }
int s=-1;
int s2=-1;
for(int i=0; i<n; i++){
  if(v[i]> s){
     s2=s;
     s=v[i];
  }
    else if(v[i]>s2 && v[i]<s){
    s2=v[i];
  }
}
cout<<s2;
return 0;
}