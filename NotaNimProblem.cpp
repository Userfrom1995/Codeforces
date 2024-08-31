#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        int xor_sum = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            xor_sum ^= a[i];  // Compute the XOR sum of all pile sizes
        }
        
        if (xor_sum == 0) {
            cout << "Bob" << endl;  // Bob wins if XOR sum is 0
        } else {
            cout << "Alice" << endl;  // Alice wins if XOR sum is non-zero
        }
    }
    
    return 0;
}
