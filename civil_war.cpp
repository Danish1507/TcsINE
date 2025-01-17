#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
int teamA=0,teamB=0;
int i=0, j=n-1;
bool turnA=true;
while(i<=j){
    int cur_sum=0;
    int mx_sum=INT_MIN;
    int mx_idx=0;
    if(turnA){
        for(int k=i; k<=j; k++){
            cur_sum+=v[k];
            if(mx_sum<cur_sum){
                mx_sum=cur_sum;
                mx_idx=k;
            }
        }
        teamA+=mx_sum;
        i=mx_idx+1;
        turnA=false;
        cout<<"A "<<teamA<<endl;
    }
    else{
        for(int k=j; k>=i; k--){
            cur_sum+=v[k];
            if(cur_sum>mx_sum){
                mx_sum=cur_sum;
                mx_idx=k;
            }
        }
        teamB+=mx_sum;
        j=mx_idx-1;
        turnA = true;
        cout<<"B "<<teamB<<endl;
    }
}
cout<<abs(teamA-teamB);
    return 0;
}
