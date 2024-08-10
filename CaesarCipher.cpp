#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int n, m;
        cin >> n >> m;

        string plaintext, ciphertext, to_decrypt;
        cin >> plaintext >> ciphertext >> to_decrypt;

        // Calculate the shift using the first character of plaintext and ciphertext
        int shift = (ciphertext[0] - plaintext[0] + 26) % 26;

        // Decrypt the given ciphertext
        string decrypted_text = "";
        for (int i = 0; i < m; ++i) {
            char decrypted_char = to_decrypt[i] - shift;
            if (decrypted_char < 'A') {
                decrypted_char += 26;
            }
            decrypted_text += decrypted_char;
        }

        // Output the result in the required format
        cout << "Case #" << t << ": " << decrypted_text << endl;
    }

    return 0;
}
