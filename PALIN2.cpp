#include<bits/stdc++.h>
#define lllong long int

using namespace std;

int main()
{
	int t;
	string a;
	scanf("%d", &t);
	while(t--)
	{
		getline(cin,a);
		cin.ignore();
		int n=a.length();
		int i=(n-1)/2;
		int j=n/2;
		int i1=i, j1=j;
		int f=0;
		for(; i>=0 and j<n; i--, j++)
		{
			if(a[i]==a[j])
			{
				if(!f)	f=0;
			}
			else if(a[i]>a[j])
				a[j]=a[i];
			else if(a[i]<a[j])
			{
				if(f!=1)
				{
					for(int i2=i1, j2=j1; i1!=i+1; i2--, j2++)
					{
						if(a[i2]==a[j2])
						{
							a[i2]++,a[j2]++,f=1;
						 	break;
						}
					}
					if(f!=1)
					{
						a[i]++;
						a[j]=a[i];
					}
				}
				
				a[j]=a[i];
			}
			
		}
		if(f==0)
		{
			for(i=i1,j=j1;i>=0 and j<n; i--, j++ )
			{
				if(a[i]==a[j])
				{
					a[i]++;
					a[j]++;
					f=1;
					break;
				}
			}
		}
		cout<<a<<endl;
		//cin.ignore();
	}
	return 0;
}
