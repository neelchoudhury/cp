#include <queue>
#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <bitset>
#include <cstdlib>
#include <list>
#include <stack>
#include <deque>
#include <cmath>
#include <string>
#include <string.h>
#include <iomanip>
using namespace std;
#define rep(i,n) for(int i = 0;  i < n ; ++i)
#define REP(i,a,b) for(int i = a ; i <= b ; ++i)
#define s(n) scanf("%d",&n)
#define rev(i,n) for(int i = n ; i >= 0 ; --i)
#define REV(i,a,b) for(int i = a ; i >= b ; --i)
#define miN(a,b) (((a)<(b))?(a):(b))
#define sc(n) scanf("%c",&n)
#define tr(c,i) for(typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define INF 1000000000
#define pp pair<int,int>
#define pb(a) push_back(a)
#define MOD 1000000007
struct SegTree{
        long long sum ;
        long long update ;  
};
 
 
SegTree tree[4*100000] = {0} ;
int arr[100010];
 
 
long long  build_tree(int node, int a, int b) {
  	if(a > b) return 0; // Out of range
  	
  	tree[node].update=0;
  	if(a == b) { // Leaf node
    		tree[node].sum = arr[a]; // Init value
		return 0;
	}
	
	//build_tree(node*2, a, (a+b)/2); // Init left child
	//build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node].sum = (build_tree(node*2, a, (a+b)/2)+build_tree(node*2+1, 1+(a+b)/2, b) ); // Init root value
	return tree[node].sum;
}
 
void update_add(int node , int a , int b , int i , int j , long long v)
{
        if(tree[node].update)
        {
                tree[node].sum += tree[node].update*(b - a + 1) ;
                if(a != b)
                {
                        tree[2*node].update += tree[node].update ;
                        tree[2*node + 1].update += tree[node].update ;
                }
                tree[node].update = 0 ;
        }
        if(i > b || j < a)
        {
                return ;
        }
 
        if(a >= i && b <= j)
        {
                tree[node].sum =( tree[node].sum + v*(b - a + 1)) %MOD;
                if(a != b)
                {
                        tree[2*node].update += v ;
                        tree[2*node + 1].update += v ;
                }
                return ;
        }
        update_add(2*node , a , (a+b)/2 , i , j , v) ;
        update_add(2*node + 1 , (a+b)/2 + 1 , b , i , j , v) ;
        tree[node].sum = tree[2*node].sum + tree[2*node + 1].sum ;
 
}

void update_mul(int node , int a , int b , int i , int j , long long v)
{
        if(tree[node].update)
        {
                tree[node].sum  +=tree[node].update*(b - a + 1) ;
                if(a != b)
                {
                        tree[2*node].update += tree[node].update ;
                        tree[2*node + 1].update += tree[node].update ;
                }
                tree[node].update = 0 ;
        }
        if(i > b || j < a)
        {
                return ;
        }
 
        if(a >= i && b <= j)
        {
                tree[node].sum =( tree[node].sum *v*(b - a + 1))%MOD ;
                if(a != b)
                {
                        tree[2*node].update += v ;
                        tree[2*node + 1].update += v ;
                }
                return ;
        }
        update_mul(2*node , a , (a+b)/2 , i , j , v) ;
        update_mul(2*node + 1 , (a+b)/2 + 1 , b , i , j , v) ;
        tree[node].sum = tree[2*node].sum + tree[2*node + 1].sum ;
 
}
 
long long query(int node ,int a , int b , int i , int j)
{
        if(tree[node].update)
        {
                tree[node].sum += tree[node].update*(b - a + 1) ;
                if(a != b)
                {
                        tree[2*node].update += tree[node].update ;
                        tree[2*node + 1].update += tree[node].update ;
                }
                tree[node].update = 0 ;
        }
        if(i > b || j < a)
        {
                return 0;
        }
        if(a >= i && b <= j)
        {
                return tree[node].sum ;
        }
 
        return (query(2*node , a , (a+b)/2 , i , j) + query(2*node + 1 , (a+b)/2 + 1 , b , i , j)) ;
}

/*int getMid(int s, int e) {  return s + (e -s)/2;  }
 
long long getSumUtil( int index, int ss, int se, int qs, int qe)
{
    // If segment of this node is a part of given range, then return the 
    // sum of the segment
    if (qs <= ss && qe >= se)
        return tree[index].sum;

    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return 0;

    // If a part of this segment overlaps with the given range
    int mid = getMid(ss, se);
    return getSumUtil(2*index, ss, mid, qs, qe ) +
           getSumUtil(2*index+1, mid+1, se, qs, qe);
}*/
 
int main()
{
        //freopen("input.txt","r",stdin) ;
        int N , type , x , y , Q;
        
        long long v , ans; 
         
                s(N) ;
                s(Q) ;
                for(int i=0; i<N; i++)
                	scanf("%d", &arr[i]);
                build_tree(1,1,N) ;
                
                while(Q--)
                {
                        s(type) ;
                        s(x) ;
                        s(y) ;
                        if(type == 4)
                        {
                                ans = query(1,1,N,x-1,y-1) ;
                                printf("%lld\n",ans) ;
                        }
                        else
                        {
                                scanf("%lld",&v) ;
                                if(type==1)
                                	update_add(1,1,N,x-1,y-1,v) ;
                                else if(type==2)
                                	update_add(1,1,N,x-1,y-1,v) ;
                        }
                }
        
        return 0 ;
}
