#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1010];

int main()
{
	ll n;
	cin>>n;
	memset(a,0,sizeof(a));
	ll j=1,k;
	for(int i=1;i<=1000;)
	{
		//cout<<j<<endl;
		k=j;
		
		if(k<10)
		{
			a[i++]=k;
		}
		else if(k>=10 and k<=99)
		{
			a[i++]=k/10;
			a[i++]=k%10;
		}
		else
		{
			a[i++]=k/100;
			k%=10;
			a[i++]=k/10;
			a[i++]=k%10;
		}
		 
		j++;
	}
	/*for(int i=0; i<=50; i++)
		cout<<a[i];
	cout<<endl;*/
	cout<<a[n]<<endl;
	return 0;
}
