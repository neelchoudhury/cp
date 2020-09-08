#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 300
#define K 510
#define N 55
#define MAX 310
#define maxs 125
#define INF INT_MAX

using namespace std;

vector<ll> v[30];

int main()
{
	string s="";
	cin>>s;
	// mem(a);
	for(ll i=0; i<s.length(); i++)
	{
		if(i<=25 and s[i]==s[i+1])
		{
			cout<<"Impossible"<<endl;
			return 0;
		}
		
		v[(ll)(s[i]-'A')].pb(i);
	}
	string ans1="",ans2="";
	for(ll i=0; i<27; i++)
	{
		if(v[i].size()==2)
		{
			// cout<<"bong"<<endl;
			ans1+=i+'A';
			// cout<<v[i][0]<<" "<<v[i][1]<<endl;
			ll ww=(v[i][1]-v[i][0]-1)/2;
			ll ee=v[i][1]-v[i][0]-1-ww;
			for(ll j=v[i][0]+1;j<=v[i][0]+ww ; j++)
			{
				ans1=s[j]+ans1;
				// cout<<ans1<<endl;
			}
			for(ll j=v[i][1]-ee; j<v[i][1]; j++)
			{
				ans2+=s[j];
				// cout<<ans2<<endl;
			}
			ll ind1=0, ind2=0;
			string qq="";
			for(ll j=v[i][1]+1; j<s.length() and ans2.size()<13; j++)
			{
				ans2+=s[j];

				ind2=j;
			}
			for(ll j=v[i][0]-1; j>=0 and  ans1.size()<13; j--)
			{
				 ans1+=s[j];
				// qq+=s[j];
				ind1=j;
			}
			// reverse(qq.begin(),qq.end());
			// ans1+=qq;
			// cout<<ans1<<endl;
			// cout<<ans2<<endl;
			// cout<<ind1<<endl;
			if(ans1.size()<13)
			{
				qq="";
				for(ll j=ind2+1; j<s.length(); j++)
					qq+=s[j];
				reverse(qq.begin(),qq.end());
				ans1+=qq;
			}
			else if(ans2.size()<13)
			{
				qq="";
				for(ll j=ind1-1; j>=0; j--)
					qq+=s[j];
				reverse(qq.begin(),qq.end());
				ans2+=qq;
			}
			if(v[i][1]==26)
			{

			}
			break;

		}

	}
	 
	cout<<ans1<<endl;
	cout<<ans2<<endl;
	return 0;
}