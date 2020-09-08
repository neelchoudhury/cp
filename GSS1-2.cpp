#include <bits/stdc++.h>
#define ll long long int

using namespace std;
 
struct node {
    ll sum;
    ll best;
    ll left;
    ll right;
};
 

ll q[50003];
node tree[200003];
 
node makeNode(ll sum, ll best, ll left, ll right) {
    node tmp;
    tmp.sum = sum;
    tmp.best = best;
    tmp.left = left;
    tmp.right = right;
    return tmp;
}
 
node combine (node l, node r) {
    ll left = l.left;
    if (l.sum + r.left>left) 
    {
    	left =l.sum + r.left;
	}
    ll right = r.right;
    if (r.sum + l.right > right) 
    {
    	right = r.sum + l.right;
	}
    ll best = max(l.right + r.left, max(l.best, r.best));
    return makeNode(l.sum+r.sum,best, left, right);
}
 
node build(ll from, ll to, ll index) {
    if (from == to) 
	{
        tree[index] = makeNode(q[from], q[from], q[from], q[from]);
        return tree[index];
    }
    ll mid = (from+to)/2;
    node l = build(from,mid, (index<<1));
    node r = build(mid+1,to, (index<<1)+1);
 
    tree[index] = combine(l,r);
    return tree[index];
}
 
node ans(ll index, ll from, ll to, ll a, ll b) {
    if (from == a && to == b) 
	{
        return tree[index];
    }
    int mid = (from+to)/2;
    if (b <= mid) 
	{
        return ans((index<<1), from, mid, a, b);
    }
    if (a > mid) 
	{
        return ans((index<<1) + 1, mid+1,to,a,b);
    }
    node l = ans((index<<1), from, mid, a, mid);
    node r = ans((index<<1) + 1, mid+1,to,mid+1,b);
    return combine(l,r);
}
 
 
int main() {
	ll n;
    scanf("%lld",&n);
    for (int i = 1; i <= n; ++i) 
		scanf("%lld",&q[i]);
    build(1,n,1);
    ll t;
    scanf("%lld",&t);
    ll a,b;
    for (ll i = 0; i < t; ++i) {
        scanf("%lld %lld",&a,&b);
        printf("%lld \n", ans(1,1,n,a,b).best);
    }
    return 0;
}
