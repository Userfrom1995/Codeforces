#include<bits/stdc++.h>

using namespace std;

#define int long long



int ceil_div(int64_t a, int64_t b) 

{

    return (a + b - 1) / b;

}



void solve()

{

        int n, x;

        cin >> n >> x;

        

        vector<int64_t> a(n);

        

        for (int i = 0; i < n; ++i) 

        {

            cin >> a[i];  

        }

        

        int total_cars = accumulate(a.begin(), a.end(), 0LL);

        int max_cars = *max_element(a.begin(), a.end());

        int min_customers = max(ceil_div(total_cars, x), max_cars);

        cout << min_customers << endl;;

}





int32_t main() 

{

    int t;

    cin >> t;

    while (t--) 

    {

       solve();

    }

    

    return 0;

}