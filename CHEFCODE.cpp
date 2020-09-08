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

ll a[35];
vector<ll> v1, v2;
vector<ll>::iterator ii;

void sub(ll m, ll n, ll f)
{
    /* Number of subsequences is (2**n -1)*/
    unsigned int opsize = pow(2, n-m);
 
    /* Run from counter 000..1 to 111..1*/
    ll cnt = 1;
    // for(ll j=m; j<n; j++)
    // 	cout<<a[j]<<" ";
    // cout<<endl;
    ll q;
    for (ll counter = 1; counter < opsize; counter++)
    {
    	cnt = 1;
        for (ll j = m; j < n; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */
        	// cout<<"j "<<j<<endl;
        	q = j-m;
            if (counter & (1<<q) )
            {
            	if((cnt*a[j])>=INT_MAX)
            		cnt = INT_MAX;
            	else
            		cnt = cnt*a[j];
            }
            // cout<<"j2 "<<j<<endl;
            // cout<<counter<<" "<<j<<" ccn "<<cnt<<endl;
        }
        // cout<<"cnt "<<cnt<<endl;
        if(!f)
        	v1.pb(cnt);
        else
        	v2.pb(cnt);
        //cout << endl;
    }
}

int main()
{
	ios;
	ll n,k;
	cin>>n>>k;
	for(ll i=0; i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	sub(0, n/2, 0);
	sub(n/2, n, 1);
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	ll ans = 0;
	// for(ll i=0; i<v1.size(); i++)
	// 	cout<<v1[i]<<" ";
	// cout<<endl;
	// for(ll i=0; i<v2.size(); i++)
	// 	cout<<v2[i]<<" ";
	// cout<<endl;
	ii = upper_bound(v1.begin(), v1.end(), k);
	// if(ii == v1.end())
		ii--;
	ans += (ii - v1.begin()+1);
	// cout<<"ans "<<ans<<endl;
	ii = upper_bound(v2.begin(), v2.end(), k);
	// if(ii == v2.end())
		ii--;
	// cout<<"bing "<<(ii - v2.begin()+1)<<endl;
	ans += (ii - v2.begin()+1);
	// cout<<"ans "<<ans<<endl;
	ll q;
	for(ll i=0; i<v1.size(); i++)
	{
		q = k/v1[i];
		if(q == 0)
			break;
		else
		{
			ii = upper_bound(v2.begin(), v2.end(), q);
			// if(ii == v2.end())
				ii--;
			ans += (ii - v2.begin()+1);
		}
	}
	cout<<ans<<endl;
	return 0;
}