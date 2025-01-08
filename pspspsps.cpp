#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;string s; 
		cin>>n>>s;
		bool a=false,b=false;
		for(int i=0;i<n-1;i++)
			if(s[i]=='p')a=true;
		for(int i=1;i<n;i++)
			if(s[i]=='s')b=true;
		if(a&&b)puts("NO");
		else puts("YES");
	}
}