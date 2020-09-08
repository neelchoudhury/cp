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

vector<vector<int> > ans;
vector<int> v;

void func(int ind, int f, vector<int> v, int len)
{
    if(ind == len-1)
    {
        ans.push_back(v);
        return;
    }
    else
    {
        if(f%2 == 0)
        {
            v.push_back(0);
            func(ind+1, f, v, len);
            v.pop_back();
            v.push_back(1);
            func(ind+1, f+1, v, len);
            v.pop_back();
        }
        else if(f%2 == 1)
        {
            v.push_back(1);
            func(ind+1, f+1, v, len);
            v.pop_back();
            v.push_back(0);
            func(ind+1, f, v, len);
            v.pop_back();
        }
    }
}

vector<int> grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    ans.clear();
    v.clear();
    
    vector<int> inp (A, 0);
    
    func(-1, 0, v, A);
    
    vector<int> res;
    
    for(int i = 0; i<ans.size(); i++)
    {
        int x = 0;
        // reverse(ans[i].begin(), ans[i].end() );
        for(int j = 0; j<ans[i].size(); j++)
        {
            x = x*2 + ans[i][j];
        }
        res.push_back(x);
        cout<<x<<endl;
    }
    
    return res;
}


int main()
{
    grayCode(4);

    return 0;
}