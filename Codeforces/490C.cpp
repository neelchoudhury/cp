#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%lld", &n)
#define pr(n) printf("%lld\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

string s="";
ll moda[1000010], modb[1000010];

int main()
{
	cin>>s;
	ll a, b;
	cin>>a>>b;
	mem(moda);
	mem(modb);
	ll cnt = 0 ;
	for(ll i = 0; i<s.length(); i++)
	{
		cnt = (cnt*10 + s[i] - '0');
		moda[i] = cnt%a;
		// cout<<cnt<<" "; 
		cnt = cnt%a;
	}
	// cout<<endl;
	cnt = s[s.length()-1] - '0';
	// cout<<"cnt "<<cnt<<endl;
	ll mul = 10;
	for(ll i = s.length()-2; i>=0; i--)
	{
		cnt = ((s[i]-'0')*mul + cnt)%b;
		modb[i] = cnt;
		// cout<<cnt<<" ";
		mul = (mul*10)%b;
		// cnt = cnt%b;
	}
	// cout<<endl;
	// for(ll i = 0; i<s.length(); i++)
	// 	cout<<moda[i]<<" ";
	// cout<<endl;
	// for(ll i = 0; i<s.length(); i++)
	// 	cout<<modb[i]<<" ";
	// cout<<endl;
	ll ind = -1;
	for(ll i = 0; i<s.length()-1; i++)
	{
		if(moda[i] == 0 && modb[i+1] == 0 && s[i+1]!='0')
		{
			ind = i;
			break;
		}
	}
	if(ind!=-1)
	{
		cout<<"YES"<<endl;
		for(ll i = 0; i < s.length(); i++ )
		{
			cout<<s[i];
			if(i == ind)
				cout<<endl;

		}
		cout<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;

}	