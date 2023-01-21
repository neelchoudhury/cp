#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

//INCOMPLETE

using namespace std;

ll v[100010];

struct matrix
{
	ll arr[2][2] ;
};

matrix matrix_multiplication(matrix x,matrix y)
{
	matrix temp;
	for(ll i=0;i<2;++i)
	{
		for(ll j=0;j<2;++j)
		{
			temp.arr[i][j]=0;
			for(ll k=0;k<2;++k)
			{
				temp.arr[i][j]=temp.arr[i][j]+(x.arr[i][k]*y.arr[k][j])%MOD;
				if(temp.arr[i][j]>=MOD)
					temp.arr[i][j]-=MOD;
			}
		}
	}
	return temp;
}

inline matrix fun(ll b)
{
	matrix a;
	a.arr[0][0]=a.arr[0][1]=a.arr[1][0]=1;
	a.arr[1][1] =0;
	matrix ans;
	for(ll i=0;i<2;++i)
	{
		for(ll j=0;j<2;++j)
			ans.arr[i][j]=0;
		ans.arr[i][i]=1;
	}
	while(b>0)
	{
		if(b&1)
		{
			ans=matrix_multiplication(a,ans);
		}
		a=matrix_multiplication(a,a);
		b=b>>1;

	}
	return ans;
}

matrix mulp(matrix m)
{
	matrix a;
	a.arr[0][0]=1,a.arr[0][1]=1,a.arr[1][0]=1;
	a.arr[1][1] =0;
	a=matrix_multiplication(a,m);
	return a;
}

int main()
{
	ll n,x,y;
	ll q;
	scanf("%lld",&q);
	while(q--)
	{
		scanf("%lld",&n);
		mem(v);
		for(ll i=1;i<=n;++i)
		{
			scanf("%lld",&v[i]);
		}
		ll a,b ;
		a=0,b=0;
		matrix mm,nn;
		mm.arr[0][0]=mm.arr[0][1]=mm.arr[1][0]==mm.arr[1][1]=0;
		nn.arr[0][0]=1,nn.arr[0][1]=0,nn.arr[1][0]==nn.arr[1][1]=0;
		ll ans=0;
		for(ll i=n;i>0;--i)
		{
			ans=fun(v[i])(mm+)
		}
		cout<<ans<<endl;
	}
	return 0;
}