#include<bits/stdc++.h>
#define pb push_back

using namespace std;

int main()
{
	//cout<<(-6.0)/3<<endl;
	//cout<<(-6.0)/(-3)<<endl;
	//cout<<FLT_MAX<<endl;
	int n,x0,y0;
	scanf("%d %d %d",&n, &x0,&y0);
	int a[n][2];
	for(int i=0;i<n; i++)
		scanf("%d %d", &a[i][0], &a[i][1]);
	vector<long double> v;
	long double m1;
	for(int i=0;i<n;i++)
	{
		
		//cout<<(a[i][1]-y0)<<" "<<(float)(a[i][0]-x0)<<endl;
		if((a[i][0]-x0)==0)
			m1=DBL_MAX;
		else
			m1=(a[i][1]-y0)/( long double)(a[i][0]-x0);
		//printf("%.10lf\n",m1);
		int f=0;
		for(int j=0; j<v.size(); j++)
		{
			if(v[j]==m1)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			v.pb(m1);
			//printf("%.10lf\n",m1);
		}
	}	
	printf("%d\n", v.size());
	return 0;
}
