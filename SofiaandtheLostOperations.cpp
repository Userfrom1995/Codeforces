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
    cin >> c;
    int arrc[c];
    for(int i = 0; i < c; i++)
    {
        cin >> arrc[i];
    }
     
     for(int i = 0; i < n; i++)
     {
        if(arra[i] != arrb[i])
        {
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

        else{
            t = t + 1;
        }

     }

     if(z<c){

     if(d == 0)
     {
         cout << "YES" << endl;
     }
     else{
         cout << "NO" << endl;
     }
     }

     else {
        cout<<"NO"<<endl;
     }

}


return 0;
}