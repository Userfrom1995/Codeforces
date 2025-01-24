#include<iostream>
using namespace std;
int main(){
    int t=0;cin>>t;
    for(int ii=0;ii<t;ii++){
        int n;cin>>n;int a1=0,a2=0;cin>>a1;int flag=0;
        for(int i=0;i<n-1;i++){
            cin>>a2;if(a2<a1)flag=1;
            a1=a2-a1;
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
// was unable to solve this problem in the contest.