#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char s[1000010];
	scanf("%s", s);
	int maxi=0;
	ll n=strlen(s);
	for(int i=0; i<n; i++)
	{
		maxi=max(maxi,s[i]-'0');
	}
	cout<<maxi<<endl;
	for(int i=0;i<maxi; i++)
	{
		int f=0;
		for(int j=0; j<n; j++)
		{
			if(s[j]>'0')
			{
				cout<<1;
				f=1;
				s[j]--;
				//cout<<" "<<s[i];
			}
			else
			{
				if(f!=0)
					cout<<0;
			}
		}
		cout<<" ";
	}
	cout<<endl;
	return 0;
}
