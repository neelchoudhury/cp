#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[]={1,10,11,100,101,110,111,1000,1001,1010,1011,1100,
			1101,
			1110,
			1111,
			10000,
			10001,
			10010,
			10011,
			10100,
			10101,
			10110,
			10111,
			11000,
			11001,
			11010,
			11011,
			11100,
			11101,
			11110,
			11111,
			100000,
			100001,
			100010,
			100011,
			100100,
			100101,
			100110,
			100111,
			101000,
			101001,
			101010,
			101011,
			101100,
			101101,
			101110,
			101111,
			110000,
			110001,
			110010,
			110011,
			110100,
			110101,
			110110,
			110111,
			111000,
			111001,
			111010,
			111011,
			111100,
			111101,
			111110,
			111111,
			1000000};

int main()
{
	ll n;
	cin>>n;
	ll sz=sizeof(a)/sizeof(ll);
	ll i;
	for(i=sz-1; i>=0; i--)
	{
		if(a[i]<=n)
			break;
	}
	if(a[i]==n)
	{
		//cout<<"enterd"<<endl;
		cout<<1<<endl<<n<<endl;
	}
	else
	{
		ll k=n;
		ll jj=i;
		ll ans=0;
		for(; i>=0; i--)
	{
		while(a[i]<=k)
		{
			k-=a[i];
			ans++;
			//cout<<a[i]<<" ";
		}
		
	 
	}
	cout<<ans<<endl;
	i=jj;
		for(; i>=0; i--)
	{
	 
		while(a[i]<=n)
		{
			n-=a[i];
			//ans++;
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	}
	//cout<<ans<<endl;
	return 0;
}
