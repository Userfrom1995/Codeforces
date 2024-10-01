#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        long long b, c, d;
        cin >> b >> c >> d;
        
        long long a = 0;  // candidate solution for 'a'
        bool possible = true;
        
        // Check each bit position from 0 to 61
        for (int i = 0; i < 62; ++i) {
            int bit_b = (b >> i) & 1;
            int bit_c = (c >> i) & 1;
            int bit_d = (d >> i) & 1;

            if((1|bit_b)-(1&bit_c)==bit_d) {
                a |= (1LL << i);
            }
            else if((0|bit_b)-(0&bit_c)==bit_d) {
                a &= ~(1LL << i);
            }
            else {
                possible = false;
                break;
            }
            
           
         
    }
    if(possible) {
        cout << a << endl;
    }
    else {
        cout << -1 << endl;
    }

}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
