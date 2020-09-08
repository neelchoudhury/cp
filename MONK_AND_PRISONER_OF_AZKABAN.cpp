#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

 
vector<ll> a,b,c;

vector<ll> prev(vector<ll> A) {
    
    vector<ll> ans;
    stack<pair<ll,ll> > stk;
    for(ll i=0; i<A.size();i++)
    {
        ans.push_back( -1);
    }
    stk.push({A[0],0});
    for(ll i=1; i<A.size(); i++)
    {
        while(stk.size()!=0 and stk.top().ff<=A[i])
        {
            stk.pop();
        }
        if(!stk.empty())
        {
            ans[i]=stk.top().ss+1;
        }
         
            stk.push({A[i],i});
        
    }
    return ans;
}

vector<ll> next(vector<ll> A) {
    
    vector<ll> ans;
    stack<pair<ll,ll> > stk;
    for(ll i=0; i<A.size();i++)
    {
        ans.push_back( -1);
    }
    stk.push({A[A.size()-1],A.size()-1});
    for(ll i=A.size()-2; i>=0; i--)
    {
        while(stk.size()!=0 and stk.top().ff<=A[i])
        {
            stk.pop();
        }
        if(!stk.empty())
        {
            ans[i]=stk.top().ss+1;
        }
         
            stk.push({A[i],i});
        
    }
    return ans;
}

int main()
{
	ios;
	ll n,x;
	cin>>n;
	 
	for(ll i=0;i<n; i++)
	{
		cin>>x;
		a.pb(x);
	}
	b=prev(a);
	c=next(a);
	// for(int i=0; i<n; i++)
	// 	cout<<b[i]<<" ";
	// cout<<endl;
	// for(int i=0; i<n; i++)
	// 	cout<<c[i]<<" ";
	// cout<<endl;
	for(ll i=0; i<n; i++)
	{
		cout<<b[i]+c[i]<<" ";
	}
	cout<<endl;
	return 0;
}