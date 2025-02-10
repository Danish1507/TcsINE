#include<bits/stdc++.h>

using namespace std;
class Solution{
public:
int solve(int n){
    if(n<=1) return n;

    return n*solve(n-1);
 }
};
 

int main(){
    int n;
    cin>>n;
    Solution obj;
    cout<<obj.solve(n);

    return 0;
}