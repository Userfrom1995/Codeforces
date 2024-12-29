#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        bool ok = false;
        for(int i=0; i+1<n; i++){
            long long mn = min(a[i], a[i+1]);
            long long mx = max(a[i], a[i+1]);
            if(2LL * mn > mx){
                ok = true; 
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}