#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int m,h1,h2,a1,a2,x1,x2,y1,y2;
	scanf("%d", &m);
	scanf("%d %d", &h1, &a1);
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &h2, &a2);
	scanf("%d %d", &x2, &y2);
	int g1=h1,g2=h2;
	int t=0;
	do
	{
		t++;
		g1=(x1%m*g1%m+y1%m)%m;
		g2=(x2%m*g2%m+y2%m)%m;
		//cout<<g1<<" "<<g2<<endl;
		if(g1==a1 and g2==a2)
			break;
	}while( t<999999);
	if(g1==a1 and g2==a2)
		cout<<t<<endl;
	else
		cout<<-1<<endl;
	 
	return 0;
}
