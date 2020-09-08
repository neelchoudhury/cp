#include<cstdio>
#include<bits/stdc++.h>
#include<cstring>
char s[110];
using namespace std;
int main()
{
	int now=0,cnt=0;
	scanf("%s",s);int a=strlen(s)-2;
	scanf("%s",s);int b=strlen(s)-2;
	scanf("%s",s);int c=strlen(s)-2;
	scanf("%s",s);int d=strlen(s)-2;
	int e;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	e=a;if ((e>=b*2&&e>=c*2&&e>=d*2)||(e<=b/2&&e<=c/2&&e<=d/2)) now=1,cnt++;
	e=b;if ((e>=a*2&&e>=c*2&&e>=d*2)||(e<=a/2&&e<=c/2&&e<=d/2)) now=2,cnt++;
	e=c;if ((e>=a*2&&e>=b*2&&e>=d*2)||(e<=a/2&&e<=b/2&&e<=d/2)) now=3,cnt++;
	e=d;if ((e>=a*2&&e>=b*2&&e>=c*2)||(e<=a/2&&e<=b/2&&e<=c/2)) now=4,cnt++;
	cout<<"cnt "<<cnt<<endl;
	if (cnt==1) printf("%c",now+64);
	else printf("C");
	return 0;
}