    #include<bits/stdc++.h>
    #define ll long long int
     
    using namespace std;
     
    ll L[2010][2010];
    ll a[2010],b[2010];
     
    ll lcs( ll X[], ll Y[], ll m, ll n )
    {
        
       ll i, j;
      memset(L,0,sizeof(L));
       /* Following steps build L[m+1][n+1] in bottom up fashion. Note 
          that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
       for (i=0; i<=m; i++)
       {
         for (j=0; j<=n; j++)
         {
           if (i == 0 || j == 0)
             L[i][j] = 0;
      
           else if (X[i-1] == Y[j-1])
             L[i][j] = L[i-1][j-1] + 1;
      
           else
             L[i][j] = max(L[i-1][j], L[i][j-1]);
         }
       }
        
       /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
       return L[m][n];
    }
     
    int main()
    {
    	ll d; 
    	cin>>d;
    	while(d--)
    	{ 
    		ll i,j;
    		cin>>a[0];
    		for( i=1; a[i-1]!=0; i++)
    			cin>>a[i];
    		/*for( ll ii=0; ii<i; ii++)
    			cout<<a[ii]<<" ";
    		cout<<endl;*/
    		cin>>b[0];
    		ll ans=0,x;
    		while(b[0]!=0)
    		{
    			for(j=1; b[j-1]!=0; j++)
    				cin>>b[j];
    			/*for( ll ii=0; ii<j; ii++)
    			cout<<b[ii]<<" ";
    		cout<<endl;*/
    			x=lcs(a,b,i,j);
    			ans=max(ans,x);
    			cin>>b[0];
    		}
    		cout<<ans-1<<endl;
    	}
    	return 0;
    } 
