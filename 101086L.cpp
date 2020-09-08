#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];
ll pr[20];

int main()
{
	ll t,r,l;
	memset(pr,0,sizeof(pr));
	pr[2]=pr[3]=pr[5]=pr[7]=pr[11]=pr[13]=pr[17]=pr[19]=1;
	ll cnt=0;
	memset(a,0,sizeof(0));
	a[0]=0;
	for(unsigned int i=1; i<=100010; i++)
	{
		unsigned int j=i;
		cnt=0;
		while(j!=0)
		{
			if(j&1)
				cnt++;
			j=j>>1;
		}
		a[i]=a[i-1]+pr[cnt];
	}
	cin>>t;
	while(t--)
	{
		cin>>l>>r;
		if(l==0)
		{
			cout<<a[r]<<endl;
		}
		else 
		{
			cout<<(a[r]-a[l-1])<<endl;
		}
	}
	return 0;
}
