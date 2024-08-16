#include <iostream>
#include <string>
#include <fstream>
#include <boost/multiprecision/cpp_int.hpp>

typedef long long ll;

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
}

int main() {
    fast_io();
    std::string myString ;
    ll a ,b ;
    std:: getline(std::cin, myString);
    std::cin >> a >> b;
      // Number of characters to print

    // Print the first n characters
    for(ll i = 1; i <= myString.length(); i++) {
        std::string s = myString.substr(0, i);
        ll num = std::cpp_int(s);
        if(s[0] == '0') continue;
        if(num % a == 0){

            std::string S = myString.substr(i);
            if(S[0] == '0') continue;
            if(S.length() < 1) continue;
            ll num2 = std::stoll(S);
            
            

            if(num2 % b == 0){
                std::cout << "YES" << std::endl;
                std::cout << s << std::endl;
                std::cout << S << std::endl;
                return 0;
            }

    

        }

    }

    std::cout << "NO" << std::endl;
    



    return 0;
}