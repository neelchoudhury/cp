#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

bool func(string s2, string s1)
{
	ll ind = 0;
	for(ll i = 0; i < s2.length(); i++)
	{
		while(ind < s1.length() && s1[ind] != s2[i])
			ind ++;
		if(ind >= s1.length() )
			return false;
		ind ++;
	}
	return true;
}

int main()
{
	ll d;
	string s="";
	cin>>d;
	while(d--)
	{
		s="";
		cin>>s;
		ll m = s.length()%2;
		ll f = 0;
		if(m==0)
		{
			// cout<<"vv"<<endl;
			for(ll i=0; i<s.length()/2; i++)
			{
				if(s[i] != s[i+s.length()/2])
				{
					f = 1;
					break;
				}
			}
			if(f)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
		else
		{
			// cout<<"enter"<<endl;
			bool f1 = 0, f2 = 0;
			string s1 = "", s2 = "";
			for(ll i = 0; i<s.length(); i++)
			{
				if(i < s.length()/2)
				{
					s1 += s[i];
				}
				else
				{
					s2 += s[i];
				}
			}
			// cout<<s1<<" "<<s2<<endl;
			f1 = func(s2, s1);
			s1 = "", s2 = ""; 
			for(ll i = 0; i<s.length(); i++)
			{
				if(i <= s.length()/2)
				{
					s1 += s[i];
				}
				else
				{
					s2 += s[i];
				}
			}
			// cout<<s1<<" "<<s2<<endl;
			f2 = func(s1, s2);
			if(f1|f2)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}