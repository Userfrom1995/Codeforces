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
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, n) FOR(i, 0, n)

// Debugging shortcuts (optional, can be removed)
#define DEBUG(x) cerr << #x << " = " << (x) << endl

void solve() {
    ll n;
    cin >> n;
   char r1[n+1];
    char r2[n+1];
    r1[n]='#';
    r2[n]='#';
    f(i, 0, n) {
        cin >> r1[i];
    }
    f(i, 0, n) {
        cin >> r2[i];
    }
    ll unique=0;

    f(i,0,n){
        if(r1[i]=='#' && r2[i]=='#'){
           
        }
        else if(r1[i]=='#' && r2[i]=='.'){
           if(r2[i+1]=='#'){
               cout<<"None"<<endl;
               return;
           }
           else{
               r2[i+1]='#';
           }
        
        }
        else if(r1[i]=='.' && r2[i]=='#'){
            if(r1[i+1]=='#'){
               cout<<"None"<<endl;
               return;
           }
           else{
               r1[i+1]='#';
           }
        }

        else {
            if(r1[i+1]=='#' && r2[i+1]=='#'){
                
            }
            // else if(r1[i+1]=='#' && r2[i+1]=='.'){
            //     cout<<"None"<<endl;
            //     return;


            // }
            // else if(r1[i+1]=='.' && r2[i+1]=='#'){
            //     cout<<"None"<<endl;
            //     return;
            // }
            else if(r1[i+1]=='.' && r2[i+1]=='.'){
                r1[i+1]='#';
                r2[i+1]='#';
                unique +=1;
            }
            
            }
        }

        if(unique==0){
            cout<<"Unique"<<endl;
        }
        else{
            cout<<"Multiple"<<endl;
        }
        
    }



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}