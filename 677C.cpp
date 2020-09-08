#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll a[70][70];
ll b[1000];
char s[100010];

int main()
{
	//cout<<(61&61)<<endl;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(int i=0; i<=63; i++)
	{
		for(int j=0;j<=63; j++)
			a[i][j]=i&j;
	}
	for(int i=0; i<64; i++)
	{
		for(int j=0; j<64; j++)
		{
			b[a[i][j]]++;
		}
	}
//	cout<<b[61]<<endl;
	scanf("%s", s);
	ll ans =1;
	ll n=strlen(s);
	ll cnt=0;
	for(ll i=0; i<n; i++)
	{
		cnt=0;
		if(s[i]>='0' and s[i]<='9')
		{
			cnt=s[i]-'0';
		}
		else if(s[i]>='A' and s[i]<='Z')
		{
			cnt=s[i]-'A' +10;
		}
		else if(s[i]>='a' and s[i]<='z')
		{
			cnt+=s[i]-'a'+36;
		}
		else if(s[i]=='-')
			cnt=62;
		else if(s[i]=='_')
			cnt=63;
		//cout<<cnt<<endl;
		cnt=b[cnt];
		ans=(ans%MOD*cnt%MOD)%MOD;
	}
	cout<<ans<<endl;
	return 0;
}
