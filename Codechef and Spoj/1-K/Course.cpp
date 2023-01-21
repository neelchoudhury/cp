#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

struct coor
{
	int x;
	int y;
};

float dist(struct coor c)
{
	return (sqrt(pow(c.x,2)+pow(c.y,2)));
}

int main()
{
	int t;
	cin>>t;
	//cout<<endl;
	while(t--)
	{
		int r, R;
		cin>>r>>R;
		float max=R-r;
		//cout<<max<<endl;
		int n;
		cin>>n;
		coor c[n];
		for(int i=0; i<n;i++)
		{
			cin>>c[i].x>>c[i].y;
			if((((float)dist(c[i])-r)<(float)(R-dist(c[i])))and (float)(R-dist(c[i]))<max)
			{
			 
					max=float(R-dist(c[i]));
				
				//cout<<"Upper loop "<<max<<endl;
			}
			else if((((float)dist(c[i])-r)>(float)(R-dist(c[i])))and(float)(dist(c[i])-r)<max)
			{
				
				
					max=float(dist(c[i])-r);
				
				//cout<<"Lower loop "<<max<<endl;
			}
		 
		}
		printf("%.3f\n\n", max);
	}
	return 0;
}
