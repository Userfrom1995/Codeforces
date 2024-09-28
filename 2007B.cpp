#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(0);

int T;
cin >> T;

while (T--) {
    int  

 n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  


    }

    int v = *max_element(arr.begin(), arr.end());

    for (int i = 0; i < m; i++) {
        char c;
        int l, r;
        cin >> c >> l >> r;

        if (l <= v && v <= r) {
            v += (c == '+' ? 1 : -1);
        }

        cout << v << (i != m - 1 ? " " : "\n");
    }
}

return 0;

}