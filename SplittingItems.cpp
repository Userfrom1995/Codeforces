#include <bits/stdc++.h>
#include <numeric>
using namespace std;

// Shortcuts for common data types
using ll = long long;
using vll = vector<long long>;

// Constants
const ll LINF = 1e18;

// Shortcuts for common functions
#define all(x) x.begin(), x.end()

bool areAllElementsEqual(std::vector<long long>& vec) {
    if (vec.empty()) return true; // An empty vector can be considered to have all equal elements

    auto last = std::unique(vec.begin(), vec.end());
    return last == vec.begin() + 1;
}

void solve() 
{
	ll n, k;
	cin >> n >> k;
 
	ll arr[n];
	for(ll i = 0; i < n; i++) cin >> arr[i];
 
	sort(arr, arr + n);
	reverse(arr, arr + n);
 
	ll ans = 0;
	for(ll i = 1; i < n; i += 2) {
		if(arr[i] < arr[i - 1]) {
			ll diff = arr[i - 1] - arr[i];
			if(diff <= k) k -= diff;
			else {
				ans += (diff - k);
				k = 0;
			}
		}
	}
 
	if(n % 2 != 0) ans += arr[n - 1];
 
	cout << ans << "\n";
 
}
 
int main()
{
	
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}

