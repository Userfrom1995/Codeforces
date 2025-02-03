#include <bits/stdc++.h>
using namespace std;

constexpr int N = 200000 + 1;

int a[N];

void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i < n; ++i) if (a[i] == a[i + 1]) {
		int last = 0;
		for (int j = 1; j <= n; ++j) if (j != i && j != i + 1) {
			if (last && abs(a[j] - last) < a[i] << 1) {
				cout << a[i] << ' ' << a[i + 1] << ' ' << last << ' ' << a[j] << '\n';
				return ;
			}
			last = a[j];
		}
		break;
	}
	cout << "-1\n";		
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
// Really nice approach better than mine. It was someone else's summation in contest. Mine was pretty much straightforward. But this is better optimized.