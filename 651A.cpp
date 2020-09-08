#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int a1,a2;
	cin>>a1>>a2;
	int ans=0;
	while(a1>=1 and a2>=1)
	{
		if(a1==1 and a2==1)
			break;
		ans++;
		if(a1>a2)
		{
			a1-=2;
			a2+=1;
		}
		else
		{
			a2-=2;
			a1+=1;
		}
		//cout<<ans<<" "<<a1<<" "<<a2<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
