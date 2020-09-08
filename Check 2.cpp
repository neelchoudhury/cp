#include<iostream>
#include<cstdlib>
#include<string.h>
#include<stdio.h>
#define ll long long int

using namespace std;

/*int cStr(char *str,char *sub)
{
    int len = strlen(sub);
    int cnt = 0;
    for (str = strstr(str, sub); str; str = strstr(str + len, sub))
        ++cnt;
    return cnt;
}*/

char* itoa(ll a)
{
	char b[10];
	for(int i=0; i<10;i++)
	{
		b[9-i]=a%10;
		a/=10;
	}
	return b;
}

int main()
{

	cout<<"Hi";
		char *c;
	int num=200;
	c=itoa(200);
	cout<<"Hi 2";
	printf("%s",c);
}
