#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000000000000000 
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

int main()
{
	ll t;
	ll x11,x12,y11,y12;
	ll x21,x22,y21,y22;
	cin>>t;
	while(t--)
	{
		ll f=0;
		cin>>x11>>y11>>x12>>y12;
		cin>>x21>>y21>>x22>>y22;
		ll mi,ma;
		mi = min(x11, x12);
		ma = max(x11, x12);
		x11 = mi;
		x12 = ma;
		mi = min(y11, y12);
		ma = max(y11, y12);
		y11 = mi;
		y12 = ma;
		mi = min(x21, x22);
		ma = max(x21, x22);
		x21 = mi;
		x22 = ma;
		mi = min(y21, y22);
		ma = max(y21, y22);
		y21 = mi;
		y22 = ma;
		if(y11 == y12)
		{
			if(y21 == y22  && y21 == y11)
			{
				if( (x21 <= x12 && x22 >= x12) || (x11 <= x22 && x11>= x21))
				{
					f = 1;
				}
			}
			else if(y21 == y22 && y21 != y11)
			{
				f = 0;
			}
			else if(y21 != y22)
			{
				// x21 == x22
				if(x21 == x11)
				{
					if(y21 == y11 || y22 == y11)
					{
						f = 1;
					}
				}
				else if(x21 == x12)
				{
					if(y21 == y12 || y22 == y12)
					{
						f = 1;
					}
				}

			}
		}
		if(y21 == y22)
		{
			if(y11 == y12  && y11 == y21)
			{
				if( (x11 <= x22 && x12 >= x22) || (x21 <= x12 && x21>= x11))
				{
					f = 1;
				}
			}
			else if(y11 == y12 && y11 != y21)
			{
				f = 0;
			}
			else if(y11 != y12)
			{
				// x21 == x22
				if(x11 == x21)
				{
					if(y11 == y21 || y12 == y21)
					{
						f = 1;
					}
				}
				else if(x11 == x22)
				{
					if(y11 == y22 || y12 == y22)
					{
						f = 1;
					}
				}

			}
		}
		// cout<<"gg "<<f<<endl;
		swap(x11,y11);
		swap(x12,y12);
		swap(x21,y21);
		swap(x22,y22);
		// cout<<" "<<x11<<" "<<y11<<" "<<x12<<" "<<y12<<endl;
		// cout<<" "<<x21<<" "<<y21<<" "<<x22<<" "<<y22<<endl;
		if(y11 == y12)
		{
			if(y21 == y22  && y21 == y11)
			{
				if( (x21 <= x12 && x22 >= x12) || (x11 <= x22 && x11>= x21))
				{
					f = 1;
				}
			}
			else if(y21 == y22 && y21 != y11)
			{
				f = 0;
			}
			else if(y21 != y22)
			{
				// x21 == x22
				if(x21 == x11)
				{
					if(y21 == y11 || y22 == y11)
					{
						f = 1;
					}
				}
				else if(x21 == x12)
				{
					if(y21 == y12 || y22 == y12)
					{
						f = 1;
					}
				}

			}
		}
		if(y21 == y22)
		{
			if(y11 == y12  && y11 == y21)
			{
				if( (x11 <= x22 && x12 >= x22) || (x21 <= x12 && x21>= x11))
				{
					f = 1;
				}
			}
			else if(y11 == y12 && y11 != y21)
			{
				f = 0;
			}
			else if(y11 != y12)
			{
				// x21 == x22
				if(x11 == x21)
				{
					if(y11 == y21 || y12 == y21)
					{
						f = 1;
					}
				}
				else if(x11 == x22)
				{
					if(y11 == y22 || y12 == y22)
					{
						f = 1;
					}
				}

			}
		}
		if(f)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}