#include<bits/stdc++.h>
#define ll long long int
#define N 1000000

using namespace std;

int main()
{
	char a[N];
	ll t,l,i,j,f=0;
	scanf("%lld", &t);
	while(t--)
	{
		f=0;
		scanf("%s", a);
		l=strlen(a);
		i=0,j=0;
		l%2?i=(l-1)/2,j=i+1:i=(l-1)/2,j=i;
		//cout<<i<<" "<<j<<endl;
		for(;i>=0;i--, j++)
		{
			if(a[i]<=a[j])
				{
					f=1;
					break;
				}
		}
		cout<<"f "<<f<<endl;
		l%2?i=(l-1)/2,j=i+1:i=(l-1)/2,j=i;
		for(; i>=0; i--, j++)
		{
			if(f==1 and a[i]!='9' )
			{
				a[i]=(char)((int)a[i]+1);
				f=0;
				cout<<i<< "  "<<j<<endl;
				a[j]=a[i];
				//cout<<"ai "<<a[i]<<" aj "<<a[j]<<endl;
			}
			else
			{
				a[j]=a[i];
				cout<<i<< "  "<<j<<endl;
			}
			cout<<"ai "<<a[i]<<" aj "<<a[j]<<endl;
		}
		for(int i=0; i<3;i++)
			cout<<a[i]<<endl;
		printf("%s\n", a);
	}
	return 0;
}
