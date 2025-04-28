#include<iostream>
using namespace std;

int t,n;

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n/15*3+min(n%15,2)+1<<endl;
	}
	return 0; 
}
