#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        int n,m;
        cin>>n>>m;
        vector<string> cpt;
        for(int i=0; i<n; i++){
            string st="";
            for(int j=0; j<m; j++){
                char ch;
                cin>>ch;
                st+=ch;
            }
            cpt.push_back(st);
        }
      string str = "vika";
      int k=0;
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(cpt[j][i]==str[k]){
                k++;
                break;
            }   
        }
        if (k == 4) break; 
      }
      if(k==4) cout<<"YES";
      else cout<<"NO";
      t--;
      cout<<endl;
    }
    return 0;
}