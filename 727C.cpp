#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

int main()
{
	string s="",qq="";
	ld x=0.0;
	ll ans=0;
	cin>>s;
	for(int i=0;i<s.length(); i++)
	{
		
		if(s[i]<'a' or s[i]>'z')
		{
			qq+=s[i];
		}
		if((s[i]>='a' and s[i]<='z' ) or i==s.length()-1)
		{
			ll z=0;

			for(ll j=0; j<qq.length(); j++)
			{
				// cout<<"ginf"<<endl;
				if(qq[j]!='.')
					z=(z*10+qq[j]-'0');
			}
			//cout<<z<<" bb"<<endl; 
			z;
			if(qq.size()>=3)
			{
				if(qq[qq.size()-3]=='.')
				{
					// cout<<"pp"<<endl;
					z=z;
				} 
				else
					z*=100;
			}
			else
			{
				z*=100;
			}
			// cout<<z<<" aa"<<endl;
			ans+=z;
			// cout<<i<<" "<<qq<<" "<<ans<<" "<<x<<endl;
			qq="";
		}
	}
	 // cout<<ans<<endl;
	ll z=ans;
	// cout<<z<<endl;
	qq="";
	string aa="";
	int ii=0;
	if(z%100>0)
	{
		ll w=z%100;
		
		while(w)
		{
			aa+=(w%10+'0');
			w/=10;
			 
			// cout<<qq<<endl;
		}
		if(aa.size()==1)
			aa+='0';
		aa+='.';
		reverse(aa.begin(),aa.end());

	}
	ll yy=z;
	z/=100;
	while(z)
	{
		qq+=(z%10+'0');
		z/=10;
		ii++;
		if(ii%3==0 and z!=0)
		{
			qq+=".";
		}
		// cout<<qq<<endl;
	}
	reverse(qq.begin(),qq.end());
	if(qq.size()==0)
	{
		qq+='0';
	}
	if(yy%100>0)
	{
		qq+=aa;
	}
	cout<<qq<<endl;
	return 0;
}