#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        long long n,a,b;
        cin>>n>>a>>b;
        long mx = min(n,b);
        long long i=1;
        long long ans=0;
        while((b-i+1)>a && i<=mx){
            long long x=b-i+1;
            ans+=x;
            i++;
        }
        ans+= (n-i+1)*a;
        cout<<ans;
      cout<<endl;
      t--;
    }
    return 0;
}