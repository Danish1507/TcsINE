#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=n/7;
    int mod=n%7;
     if(s=="tue" && mod>5) ans++;
    else if(s=="wed" && mod>4) ans++;
    else if(s=="thu" && mod>3) ans++;
    else if(s=="fri" && mod>2) ans++;
    else if(s=="sat" && mod>1) ans++;
    else if(s=="sun" && mod>0) ans++;

    cout<<ans;

    return 0;
}
