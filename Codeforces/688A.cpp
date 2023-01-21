#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	// your code goes here
	ll n,d;
	cin>>n>>d;
	ll f=0;
	ll ans=0,cnt=0;
	string s;
	while(d--)
	{
	    cin>>s;
	    f=0;
	    for(ll i=0; i<s.length(); i++)
	    {
	        if(s[i]=='0')
	        {
	            cnt++;
	            f=1;
	            break;
	        }
	         
	    }
	    if(f==0 or d==0)
	    {
	        ans=max(ans,cnt);
	        cnt=0;
	        f=0;
	        
	    }
	}
	cout<<ans<<endl;
	return 0;
}

