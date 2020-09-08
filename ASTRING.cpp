#include<bits/stdc++.h>
#define ll long long int

using namespace std;

string s,s2;
int a[28];

int main()
{
	ll t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>s;
		cin>>k;
		memset(a,0,sizeof(a));
		n=s.length();
		k=n-k;
		s2=s;
		sort(s2.begin(),s2.end());
		reverse(s2.begin(),s2.end());
		for(ll i=0;i<k;i++)
		{
			a[s2[i]-'a']++;
		}
		for(ll i=0; i<n; i++)
		{
			if(a[s[i]-'a'])
			{
				a[s[i]-'a']--;
			}
			else
			{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
	
}
