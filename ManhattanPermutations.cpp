#include <iostream>
using namespace std;
int main(){
 int t,i,j,n,a[200001];
 long long int k;
 cin>>t;
 while(t--){
 cin>>n>>k;
 for(i=0;i<n;i++) a[i]=i+1;
 for(i=0,j=n-1;i<j;i++) if(k>=(j-i)*2) {
    k-=(j-i)*2;
    swap(a[i],a[j]);
    j--;
 }
 if(k==0){
    cout<<"YES\n";
    for(i=0;i<n;i++) cout<<a[i]<<' ';
 }
 else cout<<"NO";
 cout<<'\n';
 }
}