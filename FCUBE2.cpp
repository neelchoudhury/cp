#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	int t;
	ll s;
	
	cin>>t;
	while(t--)
	{
		s=1;
		int n;
		cin>>n;
		if(n==1)
		{
			scanf("%lld", &s);
			ll m=1;
			ll b=s;
			ll cnt=0;
		 	while(s%2==0)
		 	{
		 		cnt++;
		 		s/=2;
		 	}
		 	m=pow(2,3-cnt%3);
		 	for(int i=3; i<=sqrt(s);)
		 	{
		 		if(s%i==0)
		 		{
		 			cnt++;
		 		}
		 		else
		 		{
		 			if(cnt>0)
		 			{
		 				m*=((pow(i,3-cnt%3)));
		 				m%=MOD;
		 				cnt=0;
		 			}
		 			i+=2;
		 		}
		 		if(i+2==sqrt(s))
		 		{
		 			cout<<"ENtered"<<endl;
					 m*=((pow(i,3-cnt%3)));
		 				m%=MOD;
		 		}
		 	}
		 	cout<<m<<" ";
		 	printf("%lld\n",((m%MOD)*(b%MOD)%MOD));
			 
		}
	}
	return 0;
}
