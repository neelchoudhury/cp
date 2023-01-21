#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[100005];
	scanf("%s", a);
	ll n=strlen(a);
	int f1=0,f2=0;
	for(ll i=0; i<n-1; i++)
	{
		if(f1<1 and a[i]=='A' and a[i+1]=='B')
		{
			f1++,i=i+1;
			//continue; 
		}
	 
		else  if(f2<1 and a[i]=='B' and a[i+1]=='A')
		  {
			f2++,i=i+1;
			//continue;
		}
			if(f1>=1 and f2>=1)
			break;
	}
	if(f1>=1 and f2>=1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
