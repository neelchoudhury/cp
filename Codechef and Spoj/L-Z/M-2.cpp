#include<iostream>
 using namespace std;
 
int main()
{
	int t;
	cin>>t;
	int n,p;
	while(t--)
	{
		cin>>n>>p;
		int cnt=0;
		int c;
		for(int i=0; i<n; ++i)
		{
			cin>>c;
			if(c>=p)
				cnt++;
		}	
		cout<<cnt<<endl;
		
	}
}
