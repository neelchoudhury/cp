#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define AMT 1000000000.00000000

using namespace std;

int main()
{
	ll t,m;
	ld p;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %Lf",&m, &p);
		if(m%2==0)
		{
			//cout<<"not we"<<endl;
			ld frnd=0.0,chef=0.0;
		 	if(p!=1)
				frnd=(((AMT*p)*(ld)(1.0)-(AMT*p)*(ld)pow((-p),m-1)))/(1.0+p);
			if(p==1)
				frnd=AMT;
			chef=AMT-frnd;
			printf("%Lf %Lf\n", chef, frnd);
		}
		else if(m%2==1)
		{
			//cout<<"we"<<endl;
			ld frnd=0.0, chef=0.0;
			if(p!=1)
				chef=(((AMT)*(ld)(1.0)-(AMT)*(ld)pow((-p),m)))/(1.0+p);
			if(p==1 or m==1)
				chef=AMT;
			frnd=AMT-chef;
			printf("%Lf %Lf\n", chef, frnd);
		}
	}
	return 0;
}
