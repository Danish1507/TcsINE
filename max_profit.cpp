// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t){
//         long long n,a,b;
//         cin>>n>>a>>b;
//         long mx = min(n,b);
//         long long i=1;
//         long long ans=0;
//         while((b-i+1)>a && i<=mx){
//             long long x=b-i+1;
//             ans+=x;
//             i++;
//         }
//         ans+= (n-i+1)*a;
//         cout<<ans;
//       cout<<endl;
//       t--;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        // Maximum buns that can be sold at modified prices
        long long k_max = min(n, b);

        // Determine k where the price difference condition holds
        long long k = max(0LL, b - a + 1);
        k = min(k, k_max); // Ensure k does not exceed the maximum

        // Calculate profit from buns sold at modified prices (sum of AP)
        long long modified_sum = k * (b + (b - k + 1)) / 2;

        // Calculate profit from remaining buns
        long long remaining_buns = n - k;
        long long regular_sum = remaining_buns * a;

        // Total profit
        long long total_profit = modified_sum + regular_sum;

        cout << total_profit << endl;
    }
    return 0;
}
