#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

int main()
{
	ll t;
	ll T1, T2, t1, t2;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld", &T1, &T2, &t1, &t2);
		ld i1=T1*pow(10,-4);
		ld i2=T2*pow(10,-4);
		if(i1==0 or t2==0)
			cout<<0<<endl;
		else
		{
		//cout<<i1<<" "<<i2<<endl;
		//cout<<"dfbsf"<<endl;
		ld cnt=0.0;
		ld x=0.0,y=0.0;
		for(int i=0; i<10000; i++)
		{
			for(int j=0; j<10000; j++)
			{
				if(x>=y and x-y<t2)
					cnt+=1;
				if(x<y and y-x<t1)
					cnt+=1;
				//cout<<x<<" "<<y<<" "<<cnt<<endl;
				y+=i2;
			}
			y=0;
			x+=i1;
		}
		cnt=cnt/pow(10,8);
		printf("%.8llf\n",cnt);
		}
	}
	return 0;
}
