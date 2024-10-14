#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    unordered_map<int, int> freq;
    for (int card : cards) {
        freq[card]++;
    }

    vector<int> unique_numbers;
    for (auto& p : freq) {
        unique_numbers.push_back(p.first);
    }
    sort(unique_numbers.begin(), unique_numbers.end());

    vector<int> frequency_values;
    for (int i = 0; i < unique_numbers.size(); i++) {
        if (i > 0 && unique_numbers[i] != unique_numbers[i - 1] + 1) {
            continue;
        }
        frequency_values.push_back(freq[unique_numbers[i]]);
    }

    int max_sum = 0;
    int current_sum = 0;

    for (int i = 0; i < min(k, (int)frequency_values.size()); i++) {
        current_sum += frequency_values[i];
    }
    max_sum = current_sum;

    for (int i = k; i < frequency_values.size(); i++) {
        current_sum += frequency_values[i] - frequency_values[i - k];
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << "\n";
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
