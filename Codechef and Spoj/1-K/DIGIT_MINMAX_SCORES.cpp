#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000009
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std;

ll a[15];
ll sum=0;

//NOT CORRECT

ll f(string s1)
{
		ll ans=0;
		ll x=s1[s1.length()-3]-'0',y=0;
		for(ll i=s1.length()-1; i>=3; i--)
		{
			ans+=(i-3+1)*sum;
		}
		ll cnt=0;
		for(ll i=0; i<=s1.length()-3;i++)
		{
			x=s1[i]-'0';
			y=s1.length()-i;
			cnt+=(y-1-3+1)*sum;
			for(ll j=1;j<x; j++)
			{
				cnt+=a[j];
			}
			if(i==s1.length()-3)
			{
				//cout<<"en"<<endl;
				ll qq=(s1[i]-'0')*100+(s1[i+1]-'0')*10+(s1[i+2]-'0');
				// cout<<qq<<endl;
				ll ww=0;
				for(ll ii=s1[i]-'0'; ii<=s1[i]-'0' ; ii++)
				{
					for(ll jj=0; jj<=9; jj++)
					{
						for(ll kk=0;kk<=9; kk++)
						{
							 ww= (ii)*100+(jj )*10+(kk );
							// cout<<ww<<endl;
							if(ww<=qq)
							{
								
								if(jj>ii and jj>kk)
									cnt++ ;
								if(jj<ii and jj<kk)
									cnt++ ;
							}
							else
							{
								break;
							}
						}
						if(ww>qq)
							break;
					}
					if(ww>qq)
						break;
				}

			}
		}
		ans+=cnt;
		return ans;
}

int main()
{
	mem(a);
	ll k=45;
	for(ll i=1; i<=9; i++)
	{
		 
		a[i]=(9-i+1)+a[i-1] ;
		 
		 
	}
	for(ll i=1; i<=9; i++)
	{
		k-=i;
		a[i]+=k;
		//cout<<a[i]<<" ";
		sum+=a[i];
	}
	// cout<<endl;
	string s1="",s2="";
	cin>>s1>>s2;
	ll ans1=0, ans2=0;
	if(s1.length()<3 and s2.length()<3)
	{
		cout<<0<<endl; 
	}
	else 
	{
		ans1=f(s1);
		ans2=f(s2);
		ll cnt=0;
		for(ll i=1;i<s1.length()-1;i++)
		{
			if(s1[i]>s1[i-1] and s1[i]>s1[i+1])
				cnt++;
			else if(s1[i]<s1[i-1] and s1[i]<s1[i+1])
				cnt++;
		}

		// cout<<ans1<<" "<<ans2<<" "<<cnt<<endl;
		ll ans=ans2-ans1+cnt;
		cout<<ans<<endl;
	}
	return 0;

}