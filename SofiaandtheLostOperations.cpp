#include <iostream>
using namespace std;

int main() {
    int c ;
    cin >> c;
while(c--){
    int n ;
    cin >> n;
    int arra[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arra[i];
    }
    int arrb[n];

    for(int i = 0; i < n; i++){
        cin >> arrb[i];

    };

    int c , d , t , z;
    d = 0;
    t =0;
    z = 0;
    int last = 1;
    cin >> c;
    int arrc[c];
    for(int i = 0; i < c; i++)
    {
        cin >> arrc[i];
    }
     
     for(int i = 0; i < n; i++)
     {
        if(arra[i] != arrb[i])
        {    t = t + 1;
            for(int j = 0; j < c; j++)
            {
                if(arrb[i] == arrc[j])
                {
                    arrc[j] = 0;
                    d = 0;
                    z = z + 1;
                    break;



                }
                else{
                    d =1;
                    

                }

                


            }
        }

       

     }

     for(int i = 0; i< n ; i++){
        if(arrb[i]==arrc[c-1]){
            last = 0;
            break;


        }
     }

     if(d==0 && arrc[c-1]==0 && t == z){
        cout<<"YES"<<endl;
        
     }

     

     else if(d==0 && last == 0 && t==z){
         cout<<"YES"<<endl;
         

     }

     else{
            cout<<"NO"<<endl;
            
     }





    
}


 return 0;
}