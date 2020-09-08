#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define Max 100005
#define sc(n) scanf("%lld" , &n)
using namespace std;
 
int marked[Max];
 
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=1 ; i<=100 ; i++)
		{
			marked[i]=0;
		}
 
		int m,x,y;
		cin>>m>>x>>y;
		for(int i=0 ; i< m ; i++)
		{
			int pos;
			cin>>pos;
	
 
			int low = pos - (x*y);
			low = max(1 , low);
 
			int high = pos + (x*y);
			high = min(100 , high);
			//cout<<pos<<" "<<low<<" "<<high<<endl;
			for(int j=low;j<= high ; j++)
			{
				marked[j]++;
			}
		}
		ll cunt=0;
 
		for(int i=1 ; i<=100 ; i++)
		{
 
			if(!marked[i]){
	//cout<<marked[i]<<endl;
				cunt++;}
		}
		cout<<cunt<<endl;
 
	}
 
	return 0;
} 
