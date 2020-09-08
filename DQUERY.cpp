#include <bits/stdc++.h>
#define ll  int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%lld", &n)
#define pr(n) printf("%lld\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 210
#define K 510
#define N 311111
#define MAX 1111111
#define BLOCK 555

using namespace std;

ll a[N],cnt[MAX],ans[N]; 
ll answer=0;

struct node {
	ll L, R, i;
}v[N];

bool cmp(node x, node y) {
	if(x.L/BLOCK != y.L/BLOCK) { 
		return x.L/BLOCK < y.L/BLOCK;
	} 
	return x.R < y.R;
}

void add(ll position) {
	cnt[a[position]]++;
	if(cnt[a[position]] == 1) {
		answer++;
	}
}

void remove(ll position) {
	cnt[a[position]]--;
	if(cnt[a[position]] == 0) {
		answer--;
	}
}

int main()
{
	ll n,q,l,r;
	sc(n);
	// mem(a); 
	for(ll i=0; i<n; i++)
		sc(a[i]);
	sc(q);
	for(ll i=0; i<q; i++)
	{
		sc(v[i].L);sc(v[i].R); 
		v[i].L--;
		v[i].R--;
		v[i].i=i;
	}
	sort(v, v + q, cmp); 
	ll currentL = 0, currentR = 0;
	for(ll i=0; i<q; i++) {
		ll L = v[i].L, R = v[i].R;
		while(currentL < L) {
			remove(currentL);
			currentL++;
		}
		while(currentL > L) {
			add(currentL-1);
			currentL--;
		}
		while(currentR <= R) {
			add(currentR);
			currentR++;
		}
		while(currentR > R+1) {
			remove(currentR-1);
			currentR--;
		}
		ans[v[i].i] = answer;
	}
	for(ll i=0; i<q; i++)
		pr(ans[i]); 
}