#include <iostream>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
   std:: cin >> t;
    while (t--) {
       int a ,b;
   std:: cin >> a >> b;
    std::cout << b-a << "\n";
    }
    return 0;
}