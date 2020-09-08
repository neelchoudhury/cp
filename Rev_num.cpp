#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num, rev=0;
	printf("Enter a number");
	scanf("%d",&num);
	for(int i=5;i>=1; --i)
	{
		rev=rev+((num/pow(10,i))*pow(10,5-i));
		num=num-(num/pow(10,i))*pow(10,i);
	}
	printf("%d",rev);
	return 0;
}
