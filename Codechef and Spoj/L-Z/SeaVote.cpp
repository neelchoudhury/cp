#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll b[n];
		int j=n;
		ll sumb=0,suma=0;
		for(int i=0; i<n; i++)
		{
			cin>>b[i];
			sumb+=b[i];
			if(b[i]==0)
				j-=1;
		}
		
		suma=sumb-j;
		if(sumb>=100 and suma<100)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
		
	}
	return 0;
}
