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
ll median(vll a)
{
	sort(a.begin(),a.end());
	if(a.size()%2==0)
	{
		return (a[a.size()/2]+a[a.size()/2-1])/2;
	}
	else
	{
		return (a[a.size()/2]);
	}
}

void solve() {
	vll a = {100,2,3,46,5,6,70,87,9,10};
	cout<<median(a)<<"\n";
	vll b = {1,2,36,34,50,60,37,80,98};
	cout<<median(b)<<"\n";
	vll c ;
	c.insert(c.end(),a.begin(),a.end());
	c.insert(c.end(),b.begin(),b.end());
	cout<<median(c)<<"\n";
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
		solve();
	
	return 0;
}