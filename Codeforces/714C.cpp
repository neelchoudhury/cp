#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%I64d\n",n)
#define sc(n) scanf("%I64d", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

ll trie[4000010] ;

void add(string s)
{
	ll ind=1;
	for(ll i=0; i<s.length(); i++)
	{
		ll q=s[i]-'0';
		if(q%2==0)
		{
			ind=2*ind+1;
			if(trie[ind]==-1)
				trie[ind]=0;
			trie[ind]++;
			
		}
		else
		{
			ind=2*ind;
			if(trie[ind]==-1)
				trie[ind]=0;
			trie[ind]++;

		}
	}
	while(2*ind+1<4000010)
	{
		ind=2*ind+1;
		if(trie[ind]==-1)
				trie[ind]=0;
			trie[ind]++;
	}
}

void del(string s)
{
	ll ind=1;
	for(ll i=0; i<s.length(); i++)
	{
		ll q=s[i]-'0';
		if(q%2==0)
		{
			ind=2*ind+1;
			if(trie[ind]==1)
				trie[ind]=0;
			trie[ind]--;
			
		}
		else
		{
			ind=2*ind;
			if(trie[ind]==1)
				trie[ind]=0;
			trie[ind]--;

		}
	}
	while(2*ind+1<4000010)
	{
		ind=2*ind+1;
		if(trie[ind]==1)
				trie[ind]=0;
			trie[ind]--;
	}
}

ll val(string s)
{
	ll ind=1;
	ll ans=INT_MAX;
	for(ll i=0; i<s.length(); i++)
	{
		// cout<<i<<" "<<s.length()<<" "<<ind<<endl;
		ll q=s[i]-'0';
		if(q%2==0)
		{
			ind=2*ind+1;
			if(trie[ind]!=-1)

			ans=min(ans, trie[ind] );
			//trie[ind]--;
			if(trie[ind]==-1)
			ans=0;
			
		}
		else
		{
			ind=2*ind;
			if(trie[ind]!=-1)
			ans=min(ans,trie[ind]);
			//trie[ind]--;
			if(trie[ind]==-1)
			ans=0;

		}
	}
	while(2*ind+1<4000010)
	{
		ind=2*ind+1;
		if(trie[ind]!=-1)
		ans=min(ans,trie[ind]);
		if(trie[ind]==-1)
			ans=0;
	}
	return ans;
}

int main()
{
	ll t;
	string s;
	char ch;
	//mem(trie);
	for(ll i=0; i<4000010; i++)
		trie[i]=-1;
	sc(t);
	while(t--)
	{
		cin>>ch>>s;
		if(ch=='+')
		{
			reverse(s.begin(),s.end());
			add(s);
		}
		else if(ch=='-')
		{
			reverse(s.begin(),s.end());
			del(s);
		}
		else
		{
			reverse(s.begin(),s.end());
			ll ans=val(s);
			pr(ans);
		}
		// for(ll i=0; i<20; i++)
		// 	cout<<trie[i]<<" ";
		// cout<<endl;
	}
	return 0;
}