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
        ll l,r, L, R;
        cin >> l>>r>>L>>R;
        if(r<L){
            cout<<"1"<<"\n";
        }
        else if(l>R){
            cout<<"1"<<"\n";
        }
        else{
            ll overlap_start = std::max(l, L);
         ll overlap_end = std::min(r, R);

    // Check if there's an overlap
         if (overlap_start <= overlap_end) {
        // Number of common elements is the difference between overlap_end and overlap_start + 1
        ll common_elements = overlap_end - overlap_start + 1;
        if(l == L && r == R){
            cout<<common_elements-1<<"\n";
        }
       else  if(l != L && r != R){
            cout<<common_elements+1<<"\n";
        }
        else{
            cout<<common_elements<<"\n";
        }
        
    }
        }
       

       
    }
    return 0;
}