#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	ll ans=1;
 	while(b--)
 	{
 		ans=((ans%c)*(a%c))%c;
 	//	cout<<ans;
 		//ans=ans%c;
 	//	cout<<" "<<ans<<endl;
	}
	return ans;
}

char a[7];

int main()
{
	scanf("%s",a);
	//cout<<a<<endl;
	ll n=0;
	n=a[1]-'0'+ (a[3]-'0')*10 +(a[4]-'0')*100 +(a[2]-'0')*1000+ (a[0]-'0')*10000;
	//cout<<n<<endl;
	
	ll ans=power(n,5,100000);
	ll k=ans;
	int cnt=0;
	while(k>0)
	{
		k/=10;
		cnt++;
	}
	cnt=5-cnt;
	for(int i=0; i<cnt; i++)
		cout<<0;
	if(ans!=0)
		cout<<(ll)(ans%100000)<<endl;
	return 0;
}
