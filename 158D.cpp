#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false);
#define pb push_back
#define inf -99999999999999999999

using namespace std;

ll a[20010];
ll bu[20010];
vector<ll> v;
 
void pr(ll n)
{ 
    while (n%2 == 0)
    { 
        v.push_back(2);
        n = n/2;
    } 
    for (int i = 3; i <= sqrt(n); i = i+2)
    { 
        while (n%i == 0)
        { 
            v.push_back(i);
            n = n/i;
        }
    }
 
     
    if (n > 2)
    	v.push_back(n);
        
}
 

int main()
{
	ios;
	ll n;
	cin>>n;
	memset(bu,0,sizeof(bu));
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	
	pr(n);
	vector<ll> qq;
	qq.pb(1);
	bu[1]=1;
	/*for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;*/
	ll sq=0;
	for(int i=0; i<v.size(); i++)
	{
		sq=qq.size();
		for(int j=0; j<sq; j++)
		{
			if(!bu[v[i]*qq[j]])
				qq.pb(v[i]*qq[j]),bu[v[i]*qq[j]]=1;
			//cout<<v[i]<<" "<<v[j]<<endl;
		}
	}
	/*for(int i=0; i<qq.size(); i++)
	{
		cout<<qq[i]<<" ";
	}
	cout<<endl;*/
	
	ll ans=inf, mi=inf;
	
	for(int i=0;i<qq.size(); i++)
	{
		if(n/qq[i]>2)
		{
		for(int j=0; j<qq[i]; j++)
		{
			mi=0;
			for(int k=j; k<n; k+=qq[i])
			{
				mi+=a[k];
			}
			ans=max(ans,mi);
		}
		}
	}
	cout<<ans<<endl;
	return 0;
}
