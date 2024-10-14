#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        
        int n=s.size();
        int m=t.size();
        int cnt=0;
        
        for(int i=0;i<min(n,m);i++)
        {
            if(s[i]==t[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        
        int ans=cnt+(n-cnt)+(m-cnt);
        
        if(cnt!=0)
        {
            ans++;
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}