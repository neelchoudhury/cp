#include<bits/stdc++.h>

using namespace std;

 

int main()
{
	int v1,v2;
	int mi,ma;
	int t,d;
	scanf("%d %d", &v1, &v2);
	scanf("%d %d", &t, &d);
	mi=min(v1,v2);
	ma=max(v1,v2);
	int tq=mi;
	int sum=mi;
	for(int i=1; i<=(t-2); i++)
	{
		for(int j=d;j>=0; j--)
		{
			cout<<"Insid"<<" ";
			
			if((sum+tq>ma) )
			{
				tq+=j;
			}
			else if(sum+tq<ma)
				tq-=j;
			if(abs(sum+tq-ma)>=(t-1-i)*j)
			{
				sum+=tq;
				cout<<sum<<" "<<tq<<" ";
				break;
				//cout<<sum<<" ";
			}
		 
		//	
			
		}
		cout<<sum<<" ";
	}
	sum+=ma;
	printf("%d\n", sum);
	return 0;
}
