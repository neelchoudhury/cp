#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	char a[n+10];
	scanf("%s", a);
	int q;
	scanf("%d", &q);
	int b[260];
		
	/*for(int i=0; i<n; i++)
	{
		b[a[i]]++;
	}*/
	while(q--)
	{
		int ch,x,k,l,r;
		cin>>ch;
		
		if(ch==1)
		{
			scanf("%d %c", &x, &k);
			//b[a[x-1]]--
			a[x-1]=k;
			//b[a[x-1]]++;
			
		}
		if(ch==2)
		{
			scanf("%d %d", &l, &r);
			int cnt=0;
			memset(b,0,sizeof(b));
			for(int i=l-1; i<=r-1; i++)
			{
			 	b[a[i]]++;
			}
			for(int i=97; i<=122; i++)
			{
				if(b[i]%2)
					cnt++;
			}
			if(cnt<=1)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
			
		}
		 
		
		
	}
	return 0;
}
