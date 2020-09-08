#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	char a[2001];
	char b[2001];
	cin>>t;
	while(t--)
	{
		cin>>a;
		cin>>b;
		//cout<<a<<endl<<b<<endl;
		int l=0;
		//cout<<"l "<<l<<endl;
		int l1=strlen(a);
		int l2=strlen(b);
		//cout<<l1<<" "<<l2<<endl;
		sort(a,a+l1);
		sort(b,b+l2);
		int i,j;
		l=abs(l1-l2);
		for( i=0,j=0; i<l1 and j<l2; )
		{
			//cout<<"looping"<<endl;
			if(a[i]!=b[j] and b[j]>a[i])
			{
				
				l++;
				i++;
			}
			else if(a[i]!=b[j] and a[i]>b[j])
			{
			
				j++;
			}
			else
			{
				i++;
				j++;
			}
		}
		//cout<<l<<" "<<i<<" "<<j<<endl;
		//l+=(abs(l1-i)+abs(l2-j));
		cout<<l<<endl;
	}
	return 0;
}
