#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	vector<ll> ans;
	vector<ll> bb;
	ll n,x,sum=0;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		sum+=x;
		ans.push_back(x);
		bb.push_back(0);
	}
	ll q=2*sum/n;
	//cout<<q<<endl;
	vector<ll>::iterator ii;
	for(int i=0; i<n; i++)
	{
		 for(int j=0; j<n; j++)
		 {
		 	if(j!=i and bb[i]==0 and bb[j]==0)
		 	{
		 		if(ans[i]+ans[j]==q)
		 		{
		 			cout<<i+1<<" "<<j+1<<endl;
		 			bb[i]=bb[j]=1;
				 }
			 }
		 }
	}
	return 0;
}
