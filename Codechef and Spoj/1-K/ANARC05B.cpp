#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> v1,v2,v3,v4,v5;
vector<ll>::iterator ii;

int main()
{
	ll n,x;
	scanf("%lld",&n);
	while(n)
	{
		 for(ll i=0; i<n; i++)
		 {
		 	scanf("%lld", &x);
			 v1.push_back(x);	
		 }	
		 scanf("%lld", &n);
		 for(ll i=0; i<n; i++)
		 {
		 	scanf("%lld", &x);
			 v2.push_back(x);	
		 }
		 for(ll i=0; i<n; i++)
		 {
		 	ii=lower_bound(v1.begin(),v1.end(), v2[i]);
		 	if(v1[ii-v1.begin()]==v2[i])
		 	{
		 		v3.push_back(v2[i])	;
			}
		 }
		 cout<<"size "<<v3.size()<<endl;
		 for(int i=0; i<v1.size(); i++)
		 	cout<<v1[i]<<" ";
		 cout<<endl;
		 for(int i=0; i<v2.size(); i++)
		 	cout<<v2[i]<<" ";
		 cout<<endl;
		 for(int i=0; i<v3.size(); i++)
		 	cout<<v3[i]<<" ";
		 cout<<endl;
		 ll cnt=0,j=0;
		  ll ans=0;
		 if(v3.size()==0)
		 {
		 	ll va1=0,va2=0;
		 	for(ll i=0; i<v1.size(); i++)
		 		va1+=v1[i];
		 	for(ll i=0; i<v2.size(); i++)
		 		va2+=v2[i];
		 	ans=max(va1,va2);
		 	
		 }
		 else
		 {
		 		cnt=(v1[0]>0?0:2*v1[0]);
			 	for(ll i=0; i<v1.size(); i++)
			 {
			 	if(v1[i]==v3[j] or i==v1.size()-1)
			 	{
			 		if(i==v1.size()-1 and v1[i]!=v3[j])
			 			cnt+=v1[i];
			 		v4.push_back(cnt);
					cnt=0;
					j++;	
				}
				else
				{	
					cnt+=v1[i];
				}
			 }
			
			 cnt=(v2[0]>0?0:2*v2[0]),j=0;
			 for(ll i=0; i<v2.size(); i++)
			 {
			 	if(v2[i]==v3[j] or i==v2.size()-1)
			 	{
			 		if(i==v2.size()-1 and v2[i]!=v3[j])
			 			cnt+=v2[i];
			 		v5.push_back(cnt);
					cnt=0;
					j++;	
				}
				else
				{
					cnt+=v2[i];
				}
			 }
			 for(int i=0; i<v4.size(); i++)
			 	cout<<v4[i]<<" ";
			 cout<<endl;
			 for(int i=0; i<v5.size(); i++)
		 		cout<<v5[i]<<" ";
		 	cout<<endl;
		 
			 for(ll i=0; i<v4.size(); i++)
			 {
			 	ans+=max(v4[i],v5[i]);
			 	if(i<v3.size())
			 		ans+=v3[i];
			 }
		 }
		 printf("%lld\n", ans);
		 v1.clear();
		 v2.clear();
		 v3.clear();
		 v4.clear();
		 v5.clear();
		 scanf("%lld", &n);
	}
	return 0;
}
