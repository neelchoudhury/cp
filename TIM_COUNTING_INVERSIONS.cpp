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

ll a[100010], b[100010];

ll inversions(ll start, ll end)
{
	ll ans = 0;
	ll mid = (start + end)/2;
	cout<<"bing "<<start<<" "<<mid<<" "<<end<<endl;
	if(start == end)
	{
		// cout<<"qqq "<<a[start]<<endl;
		return 0;
	}
	else if(end - start ==1)
	{
		// cout<<a[start ]<<" "<<a[end]<<endl;
		if(a[start] > a[end])
		{
			
			swap(a[start], a[end]);
			return 1;
		}
		return 0;
	}
	else
	{
		
		ans = inversions(start, mid) + inversions(mid + 1, end);


		int i, j = mid + 1;
		int k = 0;
		for( i = start; i<=mid && j<=end;)
		{
			// cout<<a[i]<<" "<<a[j]<<endl;
			if(a[i] > a[j])
			{
				// swap(a[i], a[j]);
				ans += (mid-i+1);
				b[k++] = a[j];
				j++;
				
			}
			else
			{
				b[k++] = a[i];
				i++;
			}
		}
		// cout<<i<<" "<<j<<" fff"<<endl;
		while(i<=mid)
		{
			b[k++] = a[i];
			// ans += (mid - i + 1);
			i++;
		}
		while(j<=end)
		{
			// cout<<"enet"<<endl;
			b[k++] = a[j];
			j++;
		}

		// for(ll q = 0; q<k; q++)
		// 	cout<<b[q]<<" ";
		// cout<<endl;
		k = 0;
		for(ll i = start; i<=end; i++)
		{
			a[i] = b[k++];
		}
		// cout<<start<<" "<<end<<" "<<ans<<endl;
		return ans ;
	}


}

int main()
{
	ll n;
	cin>>n;
	for(ll i = 0; i<n; i++)
	{
		cin>>a[i];
	}

	ll ans  = inversions(0, n-1);
	cout<<ans<<endl;
	return 0;
}