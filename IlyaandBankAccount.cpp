#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 0) {
        cout << n;
    } else {
        int lastDigit = n % 10;
        int secondLastDigit = (n / 10) % 10;

        int withoutLastDigit = n / 10;
        int withoutSecondLastDigit = n / 100 * 10 + lastDigit;

        cout << max(withoutLastDigit, withoutSecondLastDigit);
    }

return 0;
}