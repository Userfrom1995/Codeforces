#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;


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


bool isSubstring(const string &pattern, const string &text) {
    int m = pattern.size();
    int n = text.size();

    if (m == 0) return true; 
    if (n == 0) return false; 

    
    vector<int> prefix = buildPrefixTable(pattern);

    int j = 0; 

    for (int i = 0; i < n; ++i) {
       
        while (j > 0 && text[i] != pattern[j]) {
            j = prefix[j - 1];
        }

      
        if (text[i] == pattern[j]) {
            j++;
        }

       
        if (j == m) {
            return true;
        }
    }

    return false;
}

int main() {
    ll t;
    cin >> t;
    while(t--){
    
    ll n;
    ll m;
    cin>>n>>m;


    string s, t;

    
    cin >> s;

   
    cin >> t;
     for(int i=1;i<n;i++){
       
    string pattern = s.substr(0, i);
    cout<<pattern<<"\n";


    if (isSubstring(pattern, t)) {
        cout << "1" << "\n";
    } else {
        cout << "0" << "\n";
    }
}
cout<<"\n";
    }

    return 0;
}
