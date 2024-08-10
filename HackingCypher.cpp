#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;

int main() {
    ll publickey, a, b;
    cin >> publickey >> a >> b;

    string numStr = std::to_string(publickey);
    int length = numStr.length();

    ll num = publickey;
    ll backnum = 0;

    for(int i = 0; i < length; i++) {
        num = num / 10;  // Use the outer num variable

        if(num % a == 0) {
            ll back = static_cast<ll>(pow(10, i+1));  // Compute 10^i
             backnum = publickey % back;

            if(backnum % b == 0) {
                cout << "YES" << endl;
                return 0;  // Early exit if condition is met
            }
        }
    }

    cout << "NO" << endl;  // If no valid division is found
    return 0;
}
