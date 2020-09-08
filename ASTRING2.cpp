#include<bits/stdc++.h>
#define ll long long int


using namespace std;

char s[1000010];

void f(ll last, ll k, ll n)
{
	char min='z'+1;
	for(ll i=last+1; i<=(n-k); i++)
	{
		//cout<<(int)s[i]<<"  "<<(int)min<<endl;
		if(s[i]<min)
		{
		//	cout<<"aaa"<<endl;
			min=s[i];
		}
			
	}
	//last=0;
	cout<<min;
	for(ll i=last+1; i<=n-k; i++)
	{
		//cout<<"bng2 "<<i<<endl;
		if(s[i]==min)
		{
			last=i;
			//cout<<s[i];
			break;
		}
	}
	if(k>1)
		f(last,k-1,n);
	else
		return ;
}

int main()
{
	ll t,n,k;
	cin>>t;
	while(t--)
	{
		scanf("%s", s);
		scanf("%lld", &k);
		n=strlen(s);
		f(-1,k,n);
		cout<<endl;
	}
	return 0;
}
