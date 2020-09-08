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

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<vector<int> > ans;
    vector<int> v;
    
    map<string, vector<int> > st;
    string s = "";
    map<string, vector<int> >::iterator ii;
    
    for(int i = 0; i<A.size(); i++)
    {
        s = A[i];
        sort(s.begin(), s.end());
        if(st.find(s) == st.end() )
        {
            v.push_back(i+1);
            st.insert({s, v});
            
            v.pop_back();
        }
        else
        {
            ii = st.find(s);
            ii->second.push_back(i+1);
        }
        
    }
    
    for(ii = st.begin(); ii!=st.end(); ii++)
    {
        ans.push_back(ii->second);
    }
    
    sort(ans.begin(), ans.end() );
    
    return ans;
}



int main()
{
	const vector<string> v (10, "ding");

	vector<vector<int> > ans = anagrams(v);
}