#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
   int ans=1;
   while(n){
    ans*= n%10;
    n=n/10;
   }
   cout<<ans;
    return 0;
}
