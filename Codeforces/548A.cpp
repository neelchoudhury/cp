#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char s[1010];
	scanf("%s", s);
	int l=strlen(s);
	int k;
	scanf("%d", &k);
	if(l%k!=0)
		cout<<"NO"<<endl;
	else
	{
		int j=l/k;
		int f=0;
		for(int i=0;i<k; i++)
		{
			int l1,l2;
			for( l1=i*j,l2=(i+1)*j-1;l1<((i+1)*j)/2;l1++,l2-- )
			{
				if(s[l1]!=s[l2])
				{
					//cout<<l2<<" "<<l1<<" "<<endl;
					f=1;
					break;
				}
				
			}
			j=(i+1)*k;
			if(f==1)
			{
				break;
			}
		}
		if(f==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
