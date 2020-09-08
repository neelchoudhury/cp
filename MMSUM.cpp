#include<iostream>
using namespace std;
#define ll long long int

ll F[100002][2];
ll inf=-99999999999999;

 ll getmax(int a[],int n)
 {
 	int i;
 	ll m=a[0];
 	
 	F[0][0]=a[0];
 	F[0][1]=inf;
 	F[1][0]=max(a[1],a[1]+a[0]);
 	F[1][1]=a[1];
 	
 	for(i=2;i<n;i++)
 	{
 	//		F[i][0]=max(a[i],(ll)a[i]+F[i-1][0]);
 	
 	if(F[i-1][0]>0)
 	 F[i][0]=F[i-1][0]+a[i];
 	 else
 	 F[i][0]=a[i];
 	 
 		F[i][1]=max((a[i]+F[i-1][1]),(a[i]+F[i-2][0]));
 		
	 }
	 
	 for(i=0;i<n;i++)
	 {
	 	m=max(m,F[i][0]);
	 	m=max(m,F[i][1]);
	 }
	 return m;
 }


int main()
{
	int t,n,i;
	ll m;
	int*  a;
	cin>>t;
	while(t--)
	{
		cin>>n;
		a=new int[n];
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		m=getmax(a,n);
		cout<<m<<endl;
		delete [] a;
	}
	
	return 0;
}
