#include <bits/stdc++.h>
using namespace std;

// Shortcuts for common data types
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

// Shortcuts for common functions
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())

// Looping shortcuts
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) FOR(i, 0, n)

// Debugging shortcuts (optional, can be removed)
#define DEBUG(x) cerr << #x << " = " << (x) << endl


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll size;
        cin >> size;
        string s;
       ll arr[size];
       ll var[size];
        for(ll i = 0; i < size; i++) {
            cin >> arr[i];
            arr[i]--;
        }
        cin >> s;
        ll result = 0;
        for(ll i =0; i < size; i++) {
            ll initial = arr[i];
            ll count = 0; 
            ll j =i;  
            // do{
            //  if(s[i]=='0'){
            //         count ++;
            //     }
            //     i = arr[i];

            // }
            //  if(s[i]=='0'){
            //         count ++;
            //     }
            //     i = arr[i];

            while(true){
                if(s[j]=='0'){
                    count ++;
                }
                j = arr[j];
                if(arr[j] == initial){
                    var[arr[i]] = count;
                    break;
            };
            }

            std::cout<<count <<" ";
        }


            
            
            std::cout<<"\n";
        
    }


    
    return 0;
}