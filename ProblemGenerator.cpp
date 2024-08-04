#include <iostream>
using namespace std;

int main() {

    int c = 0;
    cin >> c;
    while(c--){
    int n , t;
    string s;
    int ans = 0;
    cin >> n >> t >> s;
    int arr[7];
    for(int i = 0; i < 7; i++)
    {
        arr[i] = 0;
    }

    for ( int i = 0; i < n; i++)
    {
        if(s[i] == 'A'){
            arr[0]++;
        }
        else if(s[i] == 'B'){
            arr[1]++;
        }
        else if(s[i] == 'C'){
            arr[2]++;
        }
        else if(s[i] == 'D'){
            arr[3]++;
        }
        else if(s[i] == 'E'){
            arr[4]++;
        }
        else if(s[i] == 'F'){
            arr[5]++;
        }

        else if(s[i] == 'G'){
            arr[6]++;
        }



    }

    for(int i = 0; i < 7; i++)
    {
        if(arr[i] < t){
            ans = ans + t - arr[i];
        }
    
    }

    cout << ans << endl;
    }


return 0;
}