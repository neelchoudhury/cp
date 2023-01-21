#include<bits/stdc++.h>
#define ll long long int

using namespace std;

/*bool compare(pair<ll,pair<ll,ll>> &v1,pair<ll,pair<ll,ll>> &v2)
{
	return v1.first<v2.first;
}*/

int main()
{
	ll n;
	cin>>n;
	vector<pair<ll,pair<ll,ll>>> v,v1;
	ll val, x,y;
	
	for(int i=2; i<=2*n; i++)
	{
		for(int j=1; j<i;j++ )
		{
			cin>>val;
		//	cout<<"pushing values"<<endl;
			v.push_back(make_pair(val,make_pair(i,j)));
		}
	}
	ll res[810];
	memset(res,0,sizeof(res));
	sort(v.begin(),v.end());
	ll z;
	vector<pair<ll,pair<ll,ll>>>::iterator it,i;
	for(i=v.end()-1; i>=v.begin(); i--)
	{
		x=(*i).first;
		y=(*i).second.first;
		z=(*i).second.second;
		v1.push_back(make_pair(x,make_pair(y,z)));
	}
	//cout<<"sorted"<<endl;
	
	/*for(it=v.begin() ; it < v.end(); it++)
		cout<<(*it).first<<" ";
	cout<<endl;*/
	n=2*n;
	for(i=v1.begin(); i < v1.end(); i++)
	{
		if(res[(*i).second.first]==0 and res[(*i).second.second]==0)
		{
			res[(*i).second.first]=(*i).second.second;
			res[(*i).second.second]=(*i).second.first;	
		}
		
	}
	for(int i=1; i<=n; i++)
	{
		cout<<res[i]<<" ";
	}
	cout<<endl;
	return 0;
}
