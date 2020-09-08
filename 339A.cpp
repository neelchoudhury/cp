#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[110];
	scanf("%s", a);
	int b[100];
	int slen=strlen(a);
	int len=0;
	for(int i=0; i<slen; i+=2)
	{
		b[len]=a[i]-'0';
		len++;
	}
	sort(b,b+len);
	for(int i=0; i<len; i++)
		{
			cout<<b[i];
			if(i!=len-1)
				cout<<"+";
		}
	cout<<endl;
	return 0;
}		
