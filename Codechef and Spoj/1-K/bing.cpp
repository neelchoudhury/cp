#include<bits/stdc++.h>
using namespace std;
 
#define  MOD   1000000007
#define  EPS   1e-6
#define  X     first
#define  Y     second
#define  N     150000
#define  sc    scanf
#define  pf    printf
#define  pb    push_back
#define  pff   push_front
#define  mp    make_pair
#define  ll    long long
#define  LN    20
#define  mp    make_pair
 
#define iosbase  ios_base::sync_with_stdio(false)
#define dbg(x)   cout<<#x<<"="<<x<<endl


int a[N];
set<int>s;
int n;
vector<int>ans;
bool possible(int x)
{
	s.clear();
	int temp,i;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		while(temp>x || s.find(temp)!=s.end())
		{
			temp/=2;
			if(temp==0)
				return 0;
		}
		s.insert(temp);
	}
	return 1;

}

void generate(int x)
{
	int i,temp;
	s.clear();
	for(i=0;i<n;i++)
	{
		temp=a[i];
		while(temp>x || s.find(temp)!=s.end())
		{
			temp/=2;
			 
		}
		s.insert(temp);
		ans.pb(temp);
	}
	 

}





int main()
{
	int i,lo,hi,mid;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];

	lo=n;hi=1e9;
	while(lo<hi)
	{
		mid=lo+(hi-lo)/2;
		if(possible(mid))
			hi=mid;
		else
			lo=mid+1;

	}
	generate(lo);
	for(i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<endl;

}
