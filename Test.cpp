// Cocoly has a string t of length m, consisting of lowercase English letters, and he would like to split it into parts. He calls a pair of strings (x,y) beautiful if and only if there exists a sequence of strings a1,a2,…,ak

// , such that:

//     t=a1+a2+…+ak

// , where +
// denotes string concatenation.
// For each 1≤i≤k
// , at least one of the following holds: ai=x, or ai=y

//     . 

// Cocoly has another string s
// of length n, consisting of lowercase English letters. Now, for each 1≤i<n, Cocoly wants you to determine whether the pair of strings (s1s2…si,si+1si+2…sn)

// is beautiful.

// Note: since the input and output are large, you may need to optimize them for this problem.

// For example, in C++, it is enough to use the following lines at the start of the main() function:

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr); std::cout.tie(nullptr);
// }

// Input

// Each test contains multiple test cases. The first line contains an integer T
// (1≤T≤105

// ) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains two integers n
// and m (2≤n≤m≤5⋅106) — the lengths of s and the length of t

// .

// The second line of each test case contains a single string s
// of length n

// , consisting only of lowercase English letters.

// The third line of each test case contains a single string t
// of length m

// , consisting only of lowercase English letters.

// It is guaranteed that the sum of m
// over all test cases does not exceed 107

// .
// Output

// For each test case, output a single binary string r
// of length n−1: for each 1≤i<n, if the i-th pair is beautiful, ri=1; otherwise, ri=0

// . Do not output spaces.
// Example
// Input
// Copy

// 7
// 3 5
// aba
// ababa
// 4 10
// czzz
// czzzzzczzz
// 5 14
// dream
// dredreamamamam
// 5 18
// tcccc
// tcctccccctccctcccc
// 7 11
// abababc
// abababababc
// 7 26
// aaaaaaa
// aaaaaaaaaaaaaaaaaaaaaaaaaa
// 19 29
// bbbbbbbbbbbbbbbbbbb
// bbbbbbbbbbbbbbbbbbbbbbbbbbbbb

// Output
// Copy

// 11
// 011
// 0010
// 0000
// 010100
// 111111
// 110010001100010011

// Note

// In the first test case, s=aba
// , t=ababa

// .

//     For i=1

// : Cocoly can split t=a+ba+ba, so the string pair (a,ba)
// is beautiful.
// For i=2
// : Cocoly can split t=ab+ab+a, so the string pair (ab,a)

//     is beautiful. 

// In the second test case, s=czzz
// , t=czzzzzczzz

// .

//     For i=1

// : It can be proven that there is no solution to give a partition of t using strings c and zzz
// .
// For i=2
// : Cocoly can split t into cz+zz+zz+cz+zz
// .
// For i=3
// : Cocoly can split t into czz+z+z+z+czz+z. 

#include <bits/stdc++.h>
using namespace std;

static const int MAXN = 5000000;
bool matches(const string &t, int idx, const string &p) {
    if (idx + (int)p.size() > (int)t.size()) return false;
    for (int i = 0; i < (int)p.size(); i++) {
        if (t[idx + i] != p[i]) return false;
    }
    return true;
}


vector<int> buildKMP(const string &p) {
    int m = p.size();
    vector<int> kmp(m, 0);
    for (int i = 1, j = 0; i < m; i++) {
        while (j > 0 && p[i] != p[j]) j = kmp[j - 1];
        if (p[i] == p[j]) j++;
        kmp[i] = j;
    }
    return kmp;
}


bool kmpMatches(const string &t, int idx, const string &p, const vector<int> &kmp) {
    int m = p.size();
    for (int i = 0, j = 0; i < m; i++) {
        while (j > 0 && t[idx + i] != p[j]) j = kmp[j - 1];
        if (t[idx + i] == p[j]) j++;
        if (j == m) return true;
    }
    return false;
}

string solveTest(const string &s, const string &t) {
    int n = s.size();
    int m = t.size();
    string ans(n - 1, '0');

    for(int i = 1; i < n; i++) {
        string x = s.substr(0, i), y = s.substr(i);
        auto kmpX = buildKMP(x), kmpY = buildKMP(y);

        vector<bool> visited(m + 1, false);
        queue<int> q; 
        visited[0] = true;
        q.push(0);

        while(!q.empty()) {
            int pos = q.front(); 
            q.pop();
            if(pos == m) break;

            // Try x
            if(kmpMatches(t, pos, x, kmpX)) {
                int nxt = pos + (int)x.size();
                if(!visited[nxt]) {
                    visited[nxt] = true;
                    q.push(nxt);
                }
            }
            // Try y
            if(kmpMatches(t, pos, y, kmpY)) {
                int nxt = pos + (int)y.size();
                if(!visited[nxt]) {
                    visited[nxt] = true;
                    q.push(nxt);
                }
            }
        }
        if(visited[m]) ans[i - 1] = '1';
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        cout << solveTest(s, t) << "\n";
    }

    return 0;
}