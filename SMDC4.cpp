#include<bits/stdc++.h>

using namespace std;

int main()
{
	char a[101];
	int l=0;
	scanf("%s", a);
	l=strlen(a);
	int s;
	int n=0;
	for(int i=0; i<l; i++)
	{
		s=(i+1)*100;
		if(a[i]=='H')
			n+=s;
		else
			n-=s;
	}
	cout<<n<<endl;
	return 0;
}
