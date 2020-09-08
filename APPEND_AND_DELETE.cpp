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

int main()
{
	ios;
	string s="", t="";
	ll k;
	cin>>s;
	cin>>t;
	cin>>k;
	ll cnt=0;
	for(ll i=0; i<min(s.length(), t.length()); i++)
	{
		if(s[i]!=t[i])
		{
			break;
		}
		else
		{
			cnt++;
		}
	}
	ll ans=-2*cnt+s.length()+t.length();
	if(s.length()==0 or t.length()==0)
	{
		if(max(s.length(),t.length())<=k)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		return 0;
	}
	if(ans>k)
		cout<<"No"<<endl;
	else
	{
		if(cnt==s.length() and s.length()==t.length())
		{
			if(k/2<s.length() and k%2==0)
				cout<<"Yes"<<endl;
			else if(k/2<s.length() and k%2==1)
				cout<<"No"<<endl;
			else if(k/2>=s.length())
				cout<<"Yes"<<endl;
		}
		else
		{
			if(k>=(s.length()+t.length()))
				cout<<"Yes"<<endl;
			else if(  (k-ans)%2==0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
	return 0;
}