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

vector<int> maxset(vector<int> &A) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int ans = 0;
    int sum = 0;
    int len = 0;
    int cnt = 0;
    int fst = 0;
    int st = 0;
    for(int i = 0;i<A.size(); i++)
    {
        if(A[i]>=0)
        {
            sum += A[i];
            cnt++;
        }
        if(A[i]<0 || i == A.size()-1)
        {
        	cout<<sum<<endl;
            if(sum>ans)
            {
            	cout<<sum<<endl;
                ans = sum;
                len = cnt;
                fst = st;
            }
            else if(sum == ans)
            {
                if(len < cnt)
                {
                    ans = sum;
                    len = cnt;
                    fst = st;
                }
            }
            cnt = 0;
            sum = 0;
            st = i+1;
            cout<<st<<" "<<fst<<" "<<len<<endl;
        }
    }
    vector<int> res;
    
    for(int i = fst; i<fst+len; i++)
        res.push_back(A[i]);
        
    return res ;
}


int main()
{
	vector<int> v ;
	v.pb(1967513926);
	v.pb(1540383426); v.pb(-1303455736); v.pb(-521595368);
 	
 	vector<int> b = maxset(v);

 	for(int i = 0; i<b.size(); i++)
 		cout<<b[i]<<" ";
 	cout<<endl;

 	cout<<b.size()<<endl;
}