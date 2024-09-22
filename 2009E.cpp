#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int tt; cin >> tt;
 
    while(tt--) {
        int n, k; cin >> n >> k;
 
        auto getSum = [&](int l, int r) -> int {
            return (r * (r + 1) / 2) - (l * (l - 1) / 2); 
        };
 
        int left = k, right = k + n - 1, answer = LLONG_MAX;
 
        while(left <= right) {
            int mid = (left + right) / 2;
            int sum1 = getSum(k, mid), sum2 = getSum(mid + 1, k + n - 1);
            answer = min(answer, abs(sum1 - sum2));
            if(sum1 > sum2) right = mid - 1;
            else left = mid + 1;
        }
 
        cout << answer << "\n";
    }
    return 0;
}


    