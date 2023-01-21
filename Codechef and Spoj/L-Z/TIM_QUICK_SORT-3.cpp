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

ll a[100010];
ll ans = 0;

// Last element as pivot

void quicksort(ll start, ll end)
{
	swap(a[start], a[end]);
	ll pivot = a[start];
	ans += max(0LL, end - start);
	ll i = start + 1, j = start + 1;
	if(start == end)
		return;
	else if(end - start == 1)
	{
		if(a[end] < a[start])
			swap(a[start], a[end]);
		return;
	}
	if(start > end)
		return;
	for(; j<= end; j++)
	{
		if(a[j] < pivot)
		{
			swap(a[j], a[i]);
			i++;
		}
	}
	
	
	swap(a[i-1], a[start]);
	
	quicksort(start, i-2);
	quicksort(i, end);
	return ;
}

int main()
{
	int n;
	cin>>n;
	for(ll i = 0; i<n; i++)
		cin>>a[i];
	quicksort(0, n-1);
	for(int i = 0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;

	cout<<ans<<endl;
}