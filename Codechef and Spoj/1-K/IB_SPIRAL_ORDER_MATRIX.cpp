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

vector<int> spiralOrder(const vector<vector<int> > &A) {
	vector<int> result;
	// DO STUFF HERE AND POPULATE result
	
	
	int m = A.size();
	int n = A[0].size();
	// cout<<"result "<<m<<" nnn "<<n<<endl;
	// cout<<"m "<<m<<" n "<<n<<endl;
	// cout<<"result2 "<<m<<" nnn "<<n<<endl;
	int rt = 0, rb = m, cl = 0, cr = n;

// 	cout<<"mn"<<m*n<<endl;
	int h = 1, v = 0, ii = 0, jj = 0;
	   for(int i = 0; i<m*n; )
	   {
	       // cout<<"ff"<<endl;
	       if(h == 1 && v == 0)
	       {
	           for(; ii<cr; ii++ )
	           {
	               // cout<<jj<<" "<<ii<<endl;
	               result.push_back(A[jj][ii]);
	               i++;
	           }
	           ii--;
	           jj++;
	           rt++;
	           h = 0, v = 1;
	       }
	       else if(h == 0 && v == 1)
	       {
	               
	           for(; jj<rb; jj++)
	           {
	               //cout<<jj<<" "<<ii<<endl;
	               result.push_back(A[jj][ii]);
	               i++;
	           }
	           jj--;
	           ii--;
	           cr--;
	           h = -1, v = 0;
	       }
	       else if(h == -1 && v == 0)
	       {
	               //cout<<jj<<" "<<ii<<endl;
	           for(; ii>=cl; ii--)
	           {
	               result.push_back(A[jj][ii]);
	               i++;
	           }
	           ii++;
	           jj--;
	           rb --;
	           h = 0, v = -1;
	       }
	       else if(h == 0 && v == -1)
	       {
	               
	           for(; jj>=rt; jj--)
	           {
	               //cout<<jj<<" "<<ii<<endl;
	               result.push_back(A[jj][ii]);
	               i++;
	           }
	           jj++;
	           ii++;
	           cl++;
	           h = 1; v = 0;
	       }
	   }
	
	return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

int main()
{
	vector<vector<int> > a;

	vector<int> b;

	for(int i = 0; i<5; i++)
	{
		b.clear();
		for(int i = 0; i<5; i++)
		{
			b.pb(rand()%100);
		}
		a.pb(b);
	}

	for(int i = 0; i<a.size(); i++)
	{
		for(int j = 0; j<a[i].size(); j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}

	b.clear();

	b = spiralOrder(a);

	for(int i = 0; i<b.size(); i++)
		cout<<b[i]<<" ";
	cout<<endl;
}
