#include<bits/stdc++.h>

using namespace std;

#define int long long

const int MOD = 1e9 + 7;

const int MAX_N = 1e5 + 1; 





int solve(int base, int exp, int mod) 

{

    int result = 1;

    while (exp > 0) 

    {

        if (exp % 2 == 1) 

        {

            result = (1LL * result * base) % mod;

        }

        

        base = (1LL * base * base) % mod; 

        exp /= 2;

    }

    

    return result;

}



int32_t main() 

{

    int t;

    cin >> t;



    vector<int> n(t), k(t);



    for (int i = 0; i < t; ++i) 

    {

    cin >> n[i];

    }



    for (int i = 0; i < t; ++i) 

    {

        cin >> k[i];

    }



    for( int i = 0 ; i < t ; i++)

    {

        cout <<solve(2 , k[i] , MOD) <<endl;

    }



    return 0;

}