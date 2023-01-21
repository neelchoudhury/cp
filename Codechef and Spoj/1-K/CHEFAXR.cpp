#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;
 
 int maxify(int A[72][72],int n)
 {
     int maxm=0,sum;
         for(int w =1;w<=n;w++){
			for(int h =1;h<=n;h++){
				for(int i = h;i<=n;i++){
					for(int j=w;j<=n;j++){
						 sum=A[i][j]^A[i][j-w]^A[i-h][j]^A[i-h][j-w];
						maxm=maxm<sum?sum:maxm;
					}
				}
			}
		}
     return maxm;
 }
 int main()
 {
     int t,n,min,i,j,k,l;
     int max;
     int A[72][72];
     scanf("%d",&t);
     while(t>0)
     {
         t--;
         for(i=0;i<72;i++)
         {
             for(j=0;j<72;j++)
                A[i][j]=0;
         }
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {
             for(j=1;j<=n;j++)
                {
                    scanf("%d",&A[i][j]);
                    A[i][j]^=(A[i-1][j]^A[i][j-1]^A[i-1][j-1]);
                }
         }
         max=maxify(A,n);
         printf("%d\n",max);
     }
 
 }
