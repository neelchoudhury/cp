#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

int main()
{
	string s="";
	ll n;
	cin>>n;
	cin>>s;
	string ans="";
	ll f=0;
	for(ll i=0; i<n;  )
	{
		//cout<<"qq"<<endl;
		ll f=0;
		if(s[i]=='o')
		{
			i++;
			while(i<n -1 )
			{
				 if(s[i]=='g' and s[i+1]=='o')
				 	i+=2,f=1;
				 else
				 	break;
			}
			if(f==1)
				ans+="***";
			else
				ans+=s[i-1];
			f=0;
			//cout<<i<<" kk "<<endl;
		}
		 else
		{

			ans+=s[i];
			i++;
		}
	}
	cout<<ans<<endl;
	return 0;
}