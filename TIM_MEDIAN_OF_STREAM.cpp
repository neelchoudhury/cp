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

priority_queue<int, vector<int>, greater<int> > minheap;
priority_queue<int> maxheap;

int main()
{
	int n = 10000;
	int sum = 0, mod = 	10000, x, cntmax = 0, cntmin = 0;
	while(n--)
	{
		cin>>x;
		
		if(cntmin == 0)
		{
			minheap.push(x);
			cntmin ++;
		}
		else
		{
			if(x >= minheap.top() )
			{
				minheap.push(x);
				cntmin ++;
			}
			else
			{
				maxheap.push(x);
				cntmax ++;
			}
		}

		if(cntmin >= cntmax + 2)
		{
			maxheap.push(minheap.top());
			minheap.pop();
			
			cntmin --;
			cntmax ++;
		}
		else if(cntmax >= cntmin + 2)
		{
			minheap.push(maxheap.top());
			maxheap.pop();

			cntmin ++;
			cntmax --;
		}

		if(cntmin == cntmax)
		{
			cout<<(maxheap.top() )<<endl;
			sum += (maxheap.top() );
		}
		else if(cntmin > cntmax)
		{
			cout<<minheap.top()<<endl;
			sum += minheap.top();
		}
		else if(cntmin < cntmax)
		{
			cout<<maxheap.top()<<endl;
			sum += maxheap.top();
		}
	}

	cout<<"sum "<<sum<<endl;

	return 0;
}