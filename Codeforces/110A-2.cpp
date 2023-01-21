#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char n[20];
	scanf("%s", &n);
	int len=strlen(n);
	ll m;
	ll x;
	int ans=0;
	for(int i=0; i<len; i++)
	{
		 
		if(n[i]=='4' or n[i]=='7')
		 	ans++;
		//m/=10;
	}
	int flag=0;
	//cout<<ans<<endl;
	if(ans==0)
		flag=1;
	else
	{
	while(ans>0)
	{
		x=ans%10;
		if(ans!=4 and ans!=7)
		{
			flag=1;
			break;
		}
		ans/=10;
	}
	}
	if(flag)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}
