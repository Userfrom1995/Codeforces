#include<iostream>
using namespace std;
 
int t;
 
int main(){
    cin>>t;
    while(t--){
        long long n,k,x=1,ans=0;
        cin>>n>>k;
        long double mid=double(n+1)/2;
        while(n>=k){
            if((1+n)%2==0) ans+=mid*x;
            n/=2;
            x*=2;
           
        }
        cout<<ans<<endl;
    }
    return 0;
}
// This one took me a complete day to understand I'm still not sure I can solve this kind in a contest or recursion failed man I tried many things