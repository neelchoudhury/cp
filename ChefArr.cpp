#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	scanf("%lld", &n);
	ll a[n];
	ll cnt=0;
	for(int i=0; i<n; i++)
		scanf("%lld", &a[i]);
	ll s1=0,s2=0,s3=0;
	for(ll i=0; i<n; i++)
	{
		s1=0;
		for(ll j=0; j<=i;j++)
			s1+=a[j];
		//cout<<s1<<endl;
		for(ll j=i+1;j<n;j++ )
		{
			s2=0,s3=0;
			for(ll k=i+1; k<=j; k++)
			{
				s2+=a[k];
			//	cout<<s1<<" "<<s2<<endl;
			//	cout<<"Coor "<<i<<" "<<j<<" "<<k<<" "<<endl;
			}
			if(s1==s2)
			{
			//	cout<<"That condition met  "<<i<<" "<<j<<" "<<endl;
				for(ll k=j+1;k<n;k++)
					{
					s3+=a[k];
					//	cout<<"After cond check "<<i<<" "<<j<<" "<<k<<" "<<endl;
				}
				if(s2==s3)
					cnt++;
			}
		 
			 
		}
	}
	printf("%lld", cnt);
	return 0;
}
