#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define ld long double

using namespace std;

int c(int a,int b )
{
	ll ans=1;
	for(int i=1; i<=a;i++)
	{
		ans*=i;
	}
	for(int i=1; i<=b; i++)
		ans/=i;
	for(int i=1; i<=(a-b); i++)
		ans/=i;
	return (int)ans;
}

char s1[15], s2[15];

int main()
{
	char s1[15], s2[15];
	scanf("%s", s1);
	scanf("%s", s2);
	int ans=0;
	for(int i=0; i<strlen(s1); i++)
	{
		if(s1[i]=='+')
			ans++;
		else
			ans--;
	}
	ll pans=0,cnt=0;
	int len=strlen(s2),l=0;
	for(int i=0; i<len; i++)
	{
		if(s2[i]=='+')
			pans++,l++;
		else if(s2[i]=='-')
			pans--,l++;
		else if(s2[i]=='?')
			cnt++;
	}
	//cout<<s1<<" "<<s2<<endl;
	ld qq=1.0;
	if(len==l and ans==pans)
		qq=1 ;
	else if(len==l and ans !=pans)
		qq=0;
	else
	{
		if(pans==ans)
		{
		//	cout<<cnt<<" cnt"<<endl;
			if(cnt%2==0)
				cnt=cnt/2;
			else
				qq=0;
			//cout<<cnt<<endl;
			qq*=c(2*cnt,cnt);
			//cout<<qq<<endl;
			qq/=pow(2,2*cnt);
			//cout<<qq<<endl;
		}
		else
		{
			//cout<<"sd"<<endl;
			ans=abs(ans-pans);
			ll x=(ans+cnt)/2;
		//	cout<<ans<<endl;
			qq=c(cnt,x);
	//		cout<<qq<<endl;
			qq/=pow(2,cnt);
			//cout<<qq<<endl;
		}
		//cout<<pans<<" "<<ans<<" "<<cnt<<endl;
		
	}
	cout<<setprecision(15)<<qq<<endl;
	return 0;
}
