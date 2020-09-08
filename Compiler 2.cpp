#include<iostream>
#define ll long long int
#define N 1000001

using namespace std;

int main()
{

	int t;
	ll cnta=0, cntb=0;
	cin>>t;
	char a[N];
	while(t--)
	{
		cin>>a;
		//cout<<a.size();
 	 	cnta=cntb=0;
		for(ll i=0; a[i]!='\0';++i)
			{
				if(a[i]=='<')
		{
			cnta++;
		}
		else if(a[i]=='>')
		{
			cntb++;
		
		}
		if(cntb>cnta)
		{
			cntb--;
		}
			}
			
			cout<<(2*cntb)<<endl;;
		
	 	
	}	
		 
 
	return 0;
}	
