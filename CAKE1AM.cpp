#include<stdio.h>
#define MIN(a,b) ((a)<=(b)?(a):(b))
#define MAX(a,b) ((a)>=(b)?(a):(b))
 
int x1,x2,y1,y2,X1,X2,Y1,Y2;
 
int solve()
{
	int A=(y2-y1)*(x2-x1) + (Y2-Y1)*(X2-X1),l,w;
	l=MIN(x2,X2)-MAX(x1,X1); if(l<0) l=0;
	w=MIN(y2,Y2)-MAX(y1,Y1); if(w<0) w=0;
	A-=l*w;
	printf("%d\n",A);
}
 
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&X1,&Y1,&X2,&Y2);
		solve();
	}
	return 0;
} 
