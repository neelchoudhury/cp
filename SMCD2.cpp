#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	char a[51];
	cin>>t;
	int b[50];
	int k=t;
	int l;
	while(t--)
	{
		if(t==k-1)
			cin.ignore(51,'\n');
		/*cin.getline(a,51);
		cin.sync();*/
		scanf ("%[^\n]%*c", a);
	/*	if(t<k-1)
			cin.ignore(51,'\n');*/
		//cout<<a<<endl;
		for(int i=0; i<50; i++)
			b[i]=0;
		 l=strlen(a);
	 
		ll w=0;
		int j=0;
		for(int i=0; i<l; i++)
		{
			if(a[i]==' 'or i==l-1)
			{
				if(i==l-1)
					w++;
				cout<<w;
				w=0;
			}
			else
			{
				w++;
			}
			 
			//cout<<i<<" "<<w<<" "<<n<<" "<<l<<endl;
		}
	 
		cout<<endl;
	}
	return 0;
}
