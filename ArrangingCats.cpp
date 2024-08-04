#include <iostream>
using namespace std;

int main() {
    int u ;
    cin >> u;

    for(int k = 0 ; k < u ; k++){
     int n , i ,j0,j1 ;
    cin >>  i ;
    string arr1 ;  
    string arr2 ;
    n = 0;
    j0=0;
    j1=0;

    cin >> arr1 ;
    cin >> arr2 ;


    for(int j = 0 ; j < i ; j++){
        if(arr1[j] !=  arr2[j] ){
            if(arr1[j] == '1'){
                j1 = j1 + 1;
            }
            else{
                j0 = j0 + 1;
            }
            
        }

       

    }
    
     if(j1 > j0){
           n = j0 + (j1 - j0);
        }
     else{
        n = j1 + (j0 - j1);
     };
     


      cout<<n<<endl;
       
 };
    

return 0;
}