#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define pb push_back
#define mem(a) memset(a,0,sizeof(a))

using namespace std;

int Z1[1000010];
int Z2[1000010];

int main()
{
	mem(Z1);
	mem(Z2);
	string s;
	cin>>s;
	int L1,R1=0;
	Z1[0]=s.length();
	for(int i=1; i<s.length();i++)
	{
		if(i>R1)
		{
			L1=i,R1=i;
			while(R1<s.length() and s[R1]==s[R1-L1])R1++;
			Z1[i]=R1-L1;
			R1--;			
		}
		else
		{
			int k=i-L1;
			if(Z1[k]<R1-i+1)
			{
				Z1[i]=Z1[k];
			}
			else
			{
				L1=i ;
				while(R1<s.length() and s[R1]==s[R1-L1])R1++;
				Z1[i]=R1-L1;
				R1--;
			}
		}
	}
	//cout<<"sdbfs"<<endl;
	int maxz = 0, res = 0;
	int n=s.length();
	for (int i = 1; i < n; i++) {
  		if (Z1[i] == n-i && maxz >= n-i) { res = n-i; break; }
  		maxz = max(maxz, Z1[i]);
	}
	//cout<<res<<" "<<maxz<<endl;
	if(res>0)
	{
		for(int i=1;i<n; i++)
		{
			//cout<<"sdbk"<<endl;
			if(Z1[i]==res){
				//cout
			for(int j=i; j<i+Z1[i]; j++)
			{
				//cout<<"skbvkb"<<endl;
				cout<<s[j];
			}
			cout<<endl;
			break;
			}
			
		}
		
		 
	}
 
	else
		cout<<"Just a legend"<<endl;
	return 0;
}
