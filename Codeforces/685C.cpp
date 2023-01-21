#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

string s1,s2;
vector<ll> v1,v2;
vector<ll> v[8];
ll a[8];

class InVal
{
	private:
		int num;
		int base;		

	public:
		string PrintAsBase(ll base);
		InVal();
		void init_val(ll, ll);
};

InVal::InVal()
{
	num = base = 0;
}

void InVal::init_val(ll in_num, ll in_base)
{
	num = in_num;
	base = in_base;
}

string InVal::PrintAsBase(ll out_base)
{
	string digits("0123456789ABCDEF");
	bool is_neg = num < 0;
	string result;
	int in_num = num;
	int in_base = out_base;

	for (; in_num; in_num /= in_base)
	{
		result.insert(result.begin(), digits[abs(in_num % in_base)]);
	}

	if (is_neg)
	{
		result.insert(result.begin(), '-');
	}

	return result;
	//cout << result << '\n';

}

int main()
{
	ll n,m;
	cin>>n>>m;
	InVal num_c,num;
	num_c.init_val(n,10);
	num.init_val(m,10);
	s1=num_c.PrintAsBase(7);
	s2=num.PrintAsBase(7);
	//cout<<s1<<endl;
	if(s1.length()+s2.length()>7)
	{
		cout<<0<<endl;
	}
	else
	{
		ll x=0,y=0;
		for(ll i=0; i<s1.length(); i++)
		{
			v1.pb(s1[i]-'0');
			x+=(s1[i]-'0');
			x*=10;
		}
		for(ll i=0; i<s2.length(); i++)	
		{
			v2.pb(s2[i]-'0');
			y+=(s2[i]-'0');
			y*=10;
		}
		ll ans=0,val=0;
		ll vv=x*s2.length()+y;
		for(ll i=0; i<s1.length()+s2.length(); i++)
		{
			v[i].pb(1);
			for(ll j=1; j<7; j++)
				v[i].pb(0);
		}
		for(ll val=0; val<=vv; val++)
		{
			ll mq=0;
			ll qw=0;
			for(ll i=0;i<s1.length()+s2.length();i++)
			{
				mq=0;
				
				for(ll j=1; j<7; j++)
				{
					if(v[i][j]==-1)
					{
						
						qw=1;
						cout<<j<<" kk"<<endl;
						if(j<6)
						{
							v[i][j]=0;
							v[i][j+1]=1;
						}
						else
						{
							v[i][j]=0;
							v[i][0]=1;
							mq=1;
						}
						break;
						v[i][j]=1;
					}
				}
				if(mq==0 and val>0)
					break;
			}
			
			if(qw==0 and val==0)
			{
				v[0][0]=1;
			}
			for(ll i=0;i<s1.length()+s2.length(); i++)
			{
				for(ll j=0; j<6; j++)
				{
					cout<<v[i][j]<<" ";
				}
				cout<<endl;
			}
			ll val1=0,val2=0;
			ll ii=0;
			for(ii =0; ii<s1.length(); ii++)
			{
				for(ll jj=0; jj<7; jj++)
				{
					if(v[ii][jj]!=0)
					{
						val1+=jj;
					}
				}
				val1*=10;
			}
			for( ; ii<s1.length()+s2.length(); ii++)
			{
				for(ll jj=0; jj<7; jj++)
				{
					if(v[ii][jj]!=0)
					{
						val2+=jj;
					}
				}
				val2*=10;
			}
			cout<<val1<<" "<<val2<<endl;
			if(val1<x and val2<y)
			{
				ll qq=val;
				memset(a,0,sizeof(0));
				for(ll j=0; j<6;j++)
				{
					ll val=0;
					for(ll i=0; i<s1.length()+s2.length(); i++)
					{
						val+=v[i][j];
					}
					a[j]=val;
				}
				ll f=0;
				for(ll i=0; i<7; i++)
				{
					if(a[i]>1)
					{
						f=1;
						break;
					}
				}
				if(f==0)
					ans++;
			}
		}
		cout<<ans<<endl;
	}
}
