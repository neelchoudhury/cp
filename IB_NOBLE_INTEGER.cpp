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

int solve(vector<int> &A) {
    

    // for(int i = 0; i<A.size(); i++)
    // 	cout<<A[i]<<" ";
    // cout<<endl;
    sort(A.begin(), A.end());
    int f = 0;

    // for(int i = 0; i<A.size(); i++)
    // 	cout<<A[i]<<" ";
    // cout<<endl;
    
    for(int i = 0; i<A.size(); i++ )
    {
    	// cout<<i<<" "<<A[i]<<" "<<A.size()-i-1<<endl;
        if(A[i] == A.size()-i-1)
        {
        	if(i<A.size()-1 && A[i+1] != A[i])
            	return 1;
            if(i == A.size()-1)
            	return 1;
        }
    }
    
    return -1;
}

int main()
{
	vector<int> a;
	int x; 

	while(cin>>x)
	{
		a.pb(x);
	}

	cout<<solve(a)<<endl;

	return 0;
}