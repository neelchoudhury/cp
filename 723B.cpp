#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ll n;
	string a;
	cin>>n;
	cin>>a;
	ll cnt=0,ans1=0,ans2=0;
	ll f=0;
	for(ll i=0; i<n; i++)
	{
		if(a[i]=='_' )
		{
			ll j=i;
			while(a[j]=='_')
			{
				j--;
			}
			if(f and a[j]!='(')
			{
				ans2++;
				//cout<<i<<endl;
			}
			else
			{
				ans1=max(ans1,cnt);
				cnt=0;
				//cout<<"kk "<<ans1<<endl;
			}
			while(a[i]=='_')
			{
				i++;
			}
			i--;
		}
		else if(a[i]==')')
		{
			if(a[i-1]!='_' and a[i-1]!='(')
			{
				ans2++;
				//cout<<i<<endl;
			}
			f=0;
		}
		else if(a[i]=='(')
		{
			f=1;
			if(i>0 and a[i-1]!='_')
			{
				ans1=max(ans1,cnt);
				cnt=0;
			}
		}
		else if(i==n-1)
		{
			cnt++;
			ans1=max(ans1,cnt);
		}
		else if(!f)
		{
			//cout<<i<<endl;
			cnt++;
		}
	}
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}