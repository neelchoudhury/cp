#include<iostream>
#include<algorithm>

#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	int n[t];
	int m[t];
	int k=t;
	while(t--)			//t is gone. Its value will be changing  after this stmt
	{
		cin>>n[t];
		ll s[n[t]];
		for(int i=0;i<n[t]; ++i)
		{
			cin>>s[i];
		}
		//cout<<"This is the taken array"<<endl;
		/*for(int i=0; i<n[t];++i)
		{
			cout<<s[i]<<" ";
		}*/
		sort(s,s+n[t] );
		/*cout<<endl<<"This is s after sorting"<<endl;
		for(int i=0;i<n[t];++i)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl<<"Sorted for the "<<t<<"th time"<<endl;*/
		m[t]=s[1]-s[0];
		//cout<<"This is the corresponding value of m[t] "<<m[t]<<endl;
		for(int i=2;i<n[t];++i)
		{
			if(s[i]-s[i-1]<m[t])
			{
				m[t]=s[i]-s[i-1];
				//cout<<"The m[t] is :"<<m[t]<<endl;
			}
		}
		
	}
	for(int i=k-1; i>=0;--i)
	{
		cout<<m[i]<<endl;
	}
}
