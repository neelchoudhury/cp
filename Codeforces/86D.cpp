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
#define V 210
#define K 510
#define N 211111
#define MAX 1111111



using namespace std;

int BLOCK  ;

int a[N];
int cnt[MAX] ;
ll ans=0,answ[N];

struct query
{
	int l,r,i;
}q[N];

bool cmp(struct query &a, struct query &b)
{
	if(a.l/BLOCK==b.l/BLOCK)
	{
		return a.r<b.r;
	}
	return a.l/BLOCK<b.l/BLOCK;
}

void add(int ind)
{
	ans=ans-(ll)cnt[a[ind]]*(ll)cnt[a[ind]]*(ll)a[ind];
	cnt[a[ind]]++;
	ans=ans+(ll)cnt[a[ind]]*(ll)cnt[a[ind]]*(ll)a[ind];
}

void del(int ind)
{
	ans=ans-(ll)cnt[a[ind]]*(ll)cnt[a[ind]]*(ll)a[ind];
	cnt[a[ind]]--;
	ans=ans+(ll)cnt[a[ind]]*(ll)cnt[a[ind]]*(ll)a[ind];
}

int main()
{
	 
	int n,t,l,r;
// 	cin>>n>>t;
    sc(n);sc(t);
    BLOCK=sqrt(n);
	for(int i=0; i<n; i++)
	    sc(a[i]);
// 		cin>>a[i];
	for(int i=0; i<t; i++)
	{
	    sc(q[i].l);
	    sc(q[i].r);
// 		cin>>q[i].l>>q[i].r;
		q[i].l--;
		q[i].r--;
		q[i].i=i;
	}
	mem(cnt);
	mem(answ);
	sort(q,q+t,cmp);
	int currl=0, currr=-1; 
	for(int i=0; i<t; i++)
	{

		while(q[i].l<currl)
		{
			add(currl-1);
			currl--;
		}
		while(q[i].r>currr)
		{
			add(currr+1);
			currr++;
		}
		while(q[i].l>currl)
		{
			del(currl);
			currl++;
		}
		while(q[i].r<currr)
		{
			del(currr);
			currr--;
		} 
		answ[q[i].i]=ans;
	}
	for(int i=0; i<t; i++)
	    pr(answ[i]);
// 		cout<<answ[i]<<endl; 
	return 0;
}