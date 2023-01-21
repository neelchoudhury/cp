#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[5][5];
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
			cin>>a[i][j];
	}
	int b[5]={0,1,2,3,4};
	int v=0,m=0;
	do
	{
		v=2*(a[b[3]][b[4]]+a[b[4]][b[3]]+a[b[2]][b[3]]+a[b[3]][b[2]]);
		v+=	a[b[0]][b[1]]+a[b[1]][b[0]]+a[b[1]][b[2]]+a[b[2]][b[1]];
		if(v>m)
			m=v;
	}while(next_permutation(b,b+5));
	cout<<m<<endl;
}
