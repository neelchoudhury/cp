#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int a[210], b[30];
int K[51][1010];

int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   
 	memset(K,0,sizeof(K));
   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}

int main()
{
	int n,k,m;
	cin>>n;
	while(n--)
	{
		cin>>k>>m;
		for(int i=0; i<m; i++)
			cin>>a[i]>>b[i];
		int ans=knapSack(k,a,b,m);
		cout<<"Hey stupid robber, you can get "<<ans<<"."<<endl;
	}
}
