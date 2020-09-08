#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std; 

ll a[30];
ll val[100010]; 

int main()
{
	ios;
	ll t;
	string s1="",s2="";
	cin>>t;
	while(t--)
	{
		s1="",s2="";
		cin>>s1;
		cin>>s2;
		for(ll i=0; i<100010;i++)
			val[i]=INT_MAX;
		mem(a);
		for(ll i=0;i<s1.length();i++)
		{
			if(abs(i-(s1.length()-i-1))<val[s1[i]-'A'])
			{
				val[s1[i]-'A']=abs(i-(s1.length()-i-1));
				a[s1[i]-'A']=i;
			} 
		}
		ll ans=INT_MAX;
		for(ll i=0;i<s2.length();i++)
		{
			// cout<<s2<<" "<<s2[i]<<endl;
			if(a[s2[i]-'A'])
			{
				ll q1=abs(i-a[s2[i]-'A']);
				// cout<<"ching "<<s1.length()<<endl;
				// cout<<"bing "<<-a[s2[i]-'A']-i-1<<endl;
				// cout<<"tring "<<(ll)s1.length()-i-1-a[s2[i]-'A']<<endl;
				// cout<<"lling"<<i<<endl;
				ll q2=abs((ll)s1.length()-i-1-a[s2[i]-'A']);
				ll q3=abs((ll)s2.length()-i-(ll)s1.length()+a[s2[i]-'A']);
				ll q4=abs((ll)s2.length()-i-1-a[s2[i]-'A']);
				// cout<<q1<<" "<<q2<<" "<<q3<<" "<<q4<<endl;
				ans=min(ans,q1+q2+q3+q4);
			}
			
		}
		cout<<ans<<endl;
	}
}