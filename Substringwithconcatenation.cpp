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

// Function to build the prefix table (partial match table)
vector<int> buildPrefixTable(const string &pattern) {
    int m = pattern.size();
    vector<int> prefix(m, 0);
    int j = 0;

    for (int i = 1; i < m; ++i) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = prefix[j - 1];
        }
        if (pattern[i] == pattern[j]) {
            j++;
        }
        prefix[i] = j;
    }

    return prefix;
}

// Modified KMP to return the starting index of the substring
int findSubstringIndex(const string &pattern, const string &text) {
    int m = pattern.size();
    int n = text.size();

    if (m == 0) return 0;  // An empty pattern is always a substring at index 0
    if (n == 0) return -1; // Non-empty pattern cannot be in an empty text

    // Build the prefix table
    vector<int> prefix = buildPrefixTable(pattern);
    int j = 0; // Pointer for the pattern

    for (int i = 0; i < n; ++i) {
        // Adjust the pattern pointer `j` for mismatches
        while (j > 0 && text[i] != pattern[j]) {
            j = prefix[j - 1];
        }

        // If there's a match, move the pattern pointer forward
        if (text[i] == pattern[j]) {
            j++;
        }

        // If we've matched the entire pattern
        if (j == m) {
            return i - m + 1; // Return the starting index
        }
    }

    return -1; // Return -1 if the pattern is not found
}

// Function to generate all permutations of the substrings and find their positions in the mainstream
vector<int> solve(const string &mainstream, vector<string> &arr) {
    vector<int> indices; // To store the valid indices

    // Sort the array to ensure we generate permutations in lexicographical order
    sort(arr.begin(), arr.end());

    do {
        // Concatenate all strings in the current permutation
        string concatenated = "";
        for (const string &str : arr) {
            concatenated += str;
        }

        // Call KMP to find the starting index of the concatenated string in the mainstream
        int index = findSubstringIndex(concatenated, mainstream);

        // If index is valid (not -1), store it
        if (index != -1) {
            indices.push_back(index);
        }
    } while (next_permutation(arr.begin(), arr.end()));

    return indices;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string mainstream ="barfoothefoobarman" ;
    // cout << "Enter the mainstream string: ";
    // cin >> mainstream;
    
    // int n;
    // cout << "Enter the number of substrings: ";
    // cin >> n;

    vector<string> arr={"foo","bar"};
    // cout << "Enter the substrings:\n";
    // for (int i = 0; i < n; ++i) {
    //     cin >> arr[i];
    // }

    // Solve the problem and get all valid starting indices
    vector<int> result = solve(mainstream, arr);

    // Output the results
    cout << "Starting indices of valid substrings:\n";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
