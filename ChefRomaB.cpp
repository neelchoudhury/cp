#include<iostream>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	ll n;
	while(t--)
	{
		cin>>n;
		ll a[n];
		ll sum=1;
		for(ll i=0; i<n;i++)
		{
			cin>>a[i];
		}
	/*	cout<<"Input array is "<<endl;
		for(ll i=0; i<n;++i)
		{
			cout<<a[i]<< " ";
		}*/
		//cout<<endl;
		//cout<<"The initialized sum is : "<<sum<<endl;
		sort(a,a+n);
		//cout<<"SOrted array is :"<<endl;
		/*for(ll i=0; i<n;++i)
		{
			cout<<a[i]<< " ";
		}
		cout<<endl;*/
		for(ll i=0; i<n-1; ++i)
		{
			/*cout<<"Inside second for loop"<<endl;
			
			cout<<sum<<" After iteration i "<<i<<endl;
			cout<<(bool)(a[i]==a[i+1])<<endl;*/
			if(a[i]==a[i+1]||a[i]==1)
			{
				//cout<<"If block"<<endl;
				continue;
			}
			else
			{
				//cout<<"Else block"<<endl;
				if(i==n-2)
					sum+=2;
				else
					sum+=1;
			}
			
			
		}
		cout<<sum<<endl;
	}
}
