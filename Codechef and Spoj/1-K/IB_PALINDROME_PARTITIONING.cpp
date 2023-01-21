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

vector<vector<string > > ans;
vector<string> vs;

int isPalin(string s, int st, int mid)
{
    int f = 0;
    // if(mid == st)
    //     return 1;
    // cout<<"    ";
    // for(int i = st; i<=mid; i++)
    // {
    //     cout<<s[i];
    // }
    // cout<<endl;
    // cout<<"qq "<<mid<<" "<<st<<endl;
    // cout<<"mid   "<<mid-st<<endl;
    for(int i = 0; i<mid-st; i++)
    {
        if(s[mid-i]!=s[mid+i])
        {
            f = 1;
            break;
        }
    }
    if(!f)
        return 1;
    for(int i = 0; i<mid-st; i++)
    {
        if(s[mid-i]!=s[mid+1+i])
        {
            return 0;
        }
    }
    return -1;
}

void func(string a, int ind, vector<string> sol)
{
    if(ind >= a.length())
    {
        ans.push_back(sol);
    }
    else
    {
    	int mid = (a.length()-1+ind )/2;
        for(int ii = ind; ii<=mid; ii++)
        {
            // cout<<ii<<" ii "<<ind<<" ind"<<endl;
            // int mid = (a.length()-1+ii )/2;
            for(int i = ind; i<=ii; i++)
            {
                // cout<<isPalin(a,ind,i)<<" "<<ind<<" "<<i<<endl;
                // for(int j = ind; j<=i; j++)
                // {
                // 	cout<<a[j];
                // }
                // cout<<endl;
                if(isPalin(a, ind, i)==1)
                {
                    string s = "";
                    for(int j = ind; j<=2*i-ind; j++)
                    {
                        s+=a[j];
                    }
                    // cout<<"ff "<<s<<endl;
                    sol.push_back(s);
                    func(a, 2*i-ind+1, sol);
                }
                else if(isPalin(a, ind, i)==-1)
                {
                    string s = "";
                    for(int j = ind; j<=2*i-ind+1; j++)
                    {
                        s+=a[j];
                    }
                    sol.push_back(s);
                    func(a, 2*i-ind+2, sol);
                }
                sol.pop_back();
            }
        }
    }
}

vector<vector<string> > partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    ans.clear();
    vs.clear();
    
    // vector<string> vs;
    
    func(A, 0, vs);
    
    return ans;
}


int main()
{
	ans = partition("aab");

	for(int i = 0; i<ans.size(); i++)
	{
		for(int j = 0; j<ans[i].size(); j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}