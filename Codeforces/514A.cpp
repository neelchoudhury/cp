#include<bits/stdc++.h>

using namespace std;

int main()
{
	char a[20];
	scanf("%s", a);
	int l=strlen(a);
	for(int i=0; i<l; i++)
	{
		//cout<<('9'-a[i])<<endl;;
		if(a[i]>='5' and i!=0)
			a[i]='9'-a[i]+'0';
		else if(i==0 and a[i]>='5'and a[i]<'9')
			a[i]='9'-a[i]+'0';
			
	}
	cout<<a<<endl;
	return 0;
}
