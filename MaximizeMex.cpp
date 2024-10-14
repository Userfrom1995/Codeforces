#include<iostream>
#include<map>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t; 
    while(t--) {
        ll n, m;
        cin >> n >> m; 

        map<int, int> dp;

        
        for (int i = 0, k; i < n; i++) {
            cin >> k;
            ++dp[k]; 
        }

       
        for (int i = 0; i <= n; i++) {
            if (dp[i] == 0) {
                
                cout << i << endl;
                break;
            }

            
            dp[i + m] += dp[i] - 1;
        }
    }
    //Finally understood the solution but was not able to do in contest.
    return 0;
}
