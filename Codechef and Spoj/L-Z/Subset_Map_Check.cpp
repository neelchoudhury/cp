#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll a[] ={1,2,4,3,6,5,7,6,7,7,8,9,4,3,5,2,3,4,7,8,5};
	ll n=sizeof(a)/sizeof(ll);
	map<ll,ll> x;
	ll k1[n],k2[n];
	vector<ll> V;
	for (int i = 0; i < n; ++i) {
    while (!V.empty() && a[V.back()] < a[i])
        V.pop_back();

    // If V is empty, then k1 value for i is 0, otherwise
    // k1 value for i is (1 + V.back())


    V.push_back(i);
	}
	cout<<"V vector"<<endl;
	for(int i=0; i<V.size(); i++)
		cout<<V[i]<<" ";
	cout<<endl;
	
	k1[0]=0;
	cout<<"k1"<<endl<<k1[0]<<" ";
	for(int i=1; i<V.size(); i++)
	{
		k1[i]=V[i-1]+1;
		cout<<k1[i]<<" ";
	}
	ll size1=V.size();
	cout<<endl;
	V.clear();
	for(int i=n-1; i>=0;i--)
	{
		while(!V.empty() and a[V.back()]<a[i])
			V.pop_back();
			
		V.push_back(i);
	}
	//ll k2[n];
	 k2[n-1]=0;
	 cout<<"k2"<<endl;
	for(ll i=0; i<V.size(); i++)
	{
		k2[i]=V[i-1]+1;
	
	}
	ll size2=V.size();
	
	for(int i=0; i<n; i++)
		cout<<k2[i]<<" ";
	cout<<endl;
	for(int i=0;i<n; i++)
	{
		x.insert(std::pair<ll,ll>(a[i],0));
	}
	for(int i=0; i<n; i++)
	{
		x[a[i]]+=(i-k1[i]+1)*(k2[i]-i+1);
	}
	for(map<ll,ll>::iterator i=x.begin(); i!=x.end() ; ++i)
		cout<<i->first<<" "<<i->second<<endl;
	return 0;
}
