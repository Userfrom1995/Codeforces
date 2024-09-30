#include <bits/stdc++.h>
using namespace std;

// Function to check if a given `a` satisfies the equation
long long  satisfiesEquation(long long a, long long b, long long c) {
    return ((a | b) - (a & c));
}


void findA() {
     long long b, c, d;
    cin >> b >> c >> d;
    long long left = 1;
    long long right = (1LL << 61); 
    long long answer = -1;  

    while (left <= right) {
        long long mid = left + (right - left) / 2;

        
        if (satisfiesEquation(mid, b, c)==d) {
            answer = mid;  
            right = mid - 1; 
            break;
        } else {
            left = mid + 1; 
        }
    }

    cout<<answer<<"\n";
}

int main() {
    // Example usage
    long long a;
    cin >> a;
    while(a--){
   

    findA();
    }

   
    return 0;
}
