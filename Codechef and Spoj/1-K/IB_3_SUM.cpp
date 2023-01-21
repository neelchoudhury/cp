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

//WRONG !!!

int threeSumClosest(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    sort(A.begin(), A.end() );
    
    int ans = INT_MAX, sum = 0;
    
    vector<int>::iterator i1, i2;
    
    for(int i = 0; i<A.size(); i++)
    {
        i1 = lower_bound(A.begin(), A.end(), B - A[i]- A[A.size()-1]-1);
        i2 = lower_bound(A.begin(), A.end(), B - A[i]- A[0]+1);

        int j1 = (int)(i1 - A.begin() -1);
        int j2 = (int)(i2 - A.begin() );

        cout<<A[i]<<" ff "<<j1<<" hh "<<j2<<endl;

        for(int j = max(0,j1); j<=min((int)(A.size())-1,j2); j++)
        {
            if(i!=j)
            {
                i1 = lower_bound(A.begin(), A.end(), B-A[i]-A[j]);
                int k = (int)(i1 - A.begin() );
                k = min(k,(int)A.size()-1);
                cout<<"    "<<j<<" "<<A[j]<<" "<<k<<" "<<A[k]<<endl;

                if(k!=i && k!=j)
                {
                	cout<<"val "<<ans<<" "<<abs(B-A[i]-A[j]-A[k])<<endl;
                    if(ans > abs(B-A[i]-A[j]-A[k]) )
                    {
                    	cout<<"            enter"<<endl;
                        ans = abs(B-A[i]-A[j]-A[k]);
                        sum = A[i]+A[j]+A[k];
                    }

                    if(k>=1 && ans > abs(B-A[i]-A[j]-A[k-1])  )
                    {
                        ans = abs(B-A[i]-A[j]-A[k-1]);
                        sum = A[i]+A[j]+A[k-1];
                    }

                }
            }
        }
    }
    
    return sum;
    
}


int main()
{
	int n;
	vector<int> v;
	int b;
	cin>>n;
	while(n--)
	{
		cin>>b;
		v.pb(b);
	}
	cin>>b;

	cout<<threeSumClosest(v, b)<<endl;
}