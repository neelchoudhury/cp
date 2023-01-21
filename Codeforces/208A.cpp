#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[203];
	scanf("%s", a);
	int n=strlen(a);
	int f=0,t=0;
	for(int i=0; i<n; )
	{
		if(a[i]=='W' and (i+1<n and a[i+1]=='U') and (i+2<n and a[i+2]=='B'))
		{
			//cout<<i<<" "<<a[i]<<endl;
			if(f==1 and t!=0)
			{
				cout<<" ";
			
			}
			//t=1;
				f++;
			i+=3;
		}
		else
		{
			t=1;
			cout<<a[i];
			f=1;
			i++;
		}
	}
	return 0;
}
