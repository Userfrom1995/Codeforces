#include <iostream>
#include <algorithm>
using namespace std;

int findIndexOfLargest(const int arr[], int n) {
    // Find the iterator to the largest element
    auto maxElementIterator = std::max_element(arr, arr + n);

    // Calculate the index by subtracting the base pointer
    int index = std::distance(arr, maxElementIterator);

    return index;
};

int main() {
   int n ,u , i ;
    cin >>u;
    for(int k = 0 ; k < u ; k++){
    cin >> n ;
    cin >> i ;

    int arr[i] ;
    for(int j = 0 ; j < i ; j++){
        cin >> arr[j] ;
    }

    int maxIndex = findIndexOfLargest(arr, i);
    int x ;
    x=0;
    for(int j = 0 ; j < i ; j++){
        
    
        
        if(j != maxIndex){
           x = x + 2*arr[j] -1 ;
        }
    }


    cout << x << endl;
    }

return 0;
}