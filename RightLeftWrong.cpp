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

void solve() {
    // Write your main logic here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vll s1(n);
        string s;
        ll sum=0;
       
        for(ll i = 0; i < n; i++) {
            cin >> s1[i];
            sum += s1[i];
        
        }
        cin >> s;
        ll result = 0;
        ll p1 = 0;
        ll p2 = n-1;
        while(p1<=p2){

            if(s[p1]=='L'&& s[p2]=='R'){

                
                
                result +=sum;
                sum = sum - s1[p1]-s1[p2];
                p1++;
                p2--;
                
                continue;

            }
            if(s[p1]!='L'){
               
               sum= sum - s1[p1];
               p1++;
                


            }
            if(s[p2]!='R'){
                sum = sum-s1[p2];
                p2--;
                
            }
           

      }

            cout<<result<<"\n";



        
        

            
    }
    return 0;

}