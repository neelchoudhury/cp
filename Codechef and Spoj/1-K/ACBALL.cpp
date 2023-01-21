#include<bits/stdc++.h>
#define ll long long int

using namespace std;

char s1[100010],s2[100010],s3[100010];

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		scanf("%s",s1);
		scanf("%s",s2);
		ll n=strlen(s1);
		for(ll i=0; i<n; i++)
		{
			if(s1[i]!=s2[i])
				s3[i]='B';
			else
			{
				if(s1[i]=='W')
					s3[i]='B';
				else
					s3[i]='W';
			}
		}
		for(ll i=0; i<n; i++)
			cout<<s3[i];
		cout<<endl;
	}
	return 0;
}
