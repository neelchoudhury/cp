#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[55];
ll table[255][55];

ll count( ll S[], ll m, ll n )
{
    int i, j, x, y;
 
    // We need n+1 rows as the table is consturcted in bottom up manner using 
    // the base case 0 value case (n = 0)
    //int table[n+1][m];
    
    // Fill the enteries for 0 value case (n = 0)
    for (i=0; i<m; i++)
        table[0][i] = 1;
 
    // Fill rest of the table enteries in bottom up manner  
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            // Count of solutions including S[j]
            x = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
 
            // Count of solutions excluding S[j]
            y = (j >= 1)? table[i][j-1]: 0;
 
            // total count
            table[i][j] = x + y;
            //cout<<table[i][j]<<" ";
        }
        //cout<<endl;
    }
    return table[n][m-1];
}

int main()
{
	ll m,n;
	scanf("%lld %lld", &n, &m);
	memset(a,0,sizeof(a));
	memset(table,0,sizeof(table));
	for(int i=0; i<m; i++)
		cin>>a[i];
	cout<<count(a,m,n)<<endl;
	return 0;
}
