#include<iostream>
#include<cstdio>
#include<algorithm>


using namespace std;

int main()
{
	int n,k;
	scanf("%d%d", &n, &k);
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	sort(a,a+n);
	int cntpre=1;	
	int i=0;
	while(a[i]-a[0]<k)
	{
		int pre=a[i];
		int cntnow=1;
		for(int j=i;j<n;++j)
		{
			if(a[j]-pre>=k)
			{
				cntnow++;
				pre=a[j];
			}
		}
		if(cntpre<cntnow)
		cntpre=cntnow;
		++i;
	}
	cout<<cntpre<<endl;
}
