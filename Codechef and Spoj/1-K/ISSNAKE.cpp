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

using namespace std;

vector<ll> adj[510];
ll vis[2][510];
ll t,n;
string s[2];

int main()
{
	
	cin>>t;
	
	for(ll ii=1; ii<=t; ii++)
	{
		cin>>n;
		//s1 = "", s2 = "";
		cin>>s[0]>>s[1];
		ll flag = 0, get = 0, curr_link = 0 , segments = 0;
		ll prev = 0, cnt_double = 0, doub_start = 0,new_start = 0;
		// cout<<"n "<<n<<" "<<ii<<endl;
		// cout<<s[0]<<endl<<s[1]<<endl;
		for(ll i = 0; i<n; i++)
		{
			// cout<<i<<" happ "<<ii<<endl;
			if(s[0][i]=='#' or s[1][i] == '#')
			{
				if(curr_link == 0)
				{
					curr_link = 1;
					segments ++;
					if(s[0][i] == '#' && s[1][i] == '#')
					{
						doub_start = 1;
						new_start = 1;
						cnt_double ++;
					}
				}
				else if(curr_link == 1)
				{
					if(s[0][i] == '#' && s[1][i] != '#')
					{
						if(s[1][i-1] == '#' and s[0][i-1] != '#')
						{
							segments++;
						}
						else if(s[1][i-1] == '#' and s[0][i-1] == '#')
						{
							doub_start = 0;
							if(new_start == 0)
							{
								if(cnt_double%2 == 0 and prev != 0)
								{
									segments++;
								}
								else if(cnt_double%2 == 1 and prev!=1)
								{
									segments++;
								}
							}
							cnt_double = 0;
							prev = 0;
							new_start = 0;
						}
					}
					else if(s[1][i] == '#' && s[0][i] != '#')
					{
						if(s[0][i-1] == '#' && s[1][i-1]!='#')
						{
							segments++;
						}
						else if(s[1][i-1] == '#' and s[0][i-1] == '#')
						{
							doub_start = 0;
							if(new_start == 0)
							{
								if(cnt_double%2 == 0 and prev != 1)
								{
									segments ++;
								}
								else if(cnt_double%2 == 1 and prev != 0)
								{
									segments++;
								}
							}
							new_start = 0;
							cnt_double = 0;
							prev = 0;
						}
					}
					else if(s[0][i] == '#' && s[1][i] == '#')
					{
						if(doub_start == 0)
						{
							doub_start = 1;
							if(s[0][i-1] == '#')
								prev = 0;
							else if(s[1][i-1]=='#')
								prev = 1;
							else if(s[0][i-1] != '#' && s[1][i-1]!='#')
								new_start = 1;
							cnt_double++;
						}
						else if(doub_start == 1)
						{
							cnt_double++;
						}
					}
				}
			}
			else if(s[1][i] != '#' && s[0][i] != '#')
			{
				curr_link = 0;
			}
		}
		// cout<<"segment "<<segments<<endl;
		if(segments == 1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}