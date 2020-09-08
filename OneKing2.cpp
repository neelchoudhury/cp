#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int l[n], r[n];
		for(int i=0; i<n; i++)
		{
			cin>>l[i]>>r[i];
	    }
	    int count=0;
	while(n>0)
	{ 
		int min=l[0];
		int max=r[0];
		for(int i=1;i<n;i++)
		{
			if(l[i]<min)
			min=l[i];
			if(r[i]>max)
			max=r[i];
		}
		int s=max-min+1;
	    int c[s];
	    for(int i=0;i<(s);++i)
	    c[i]=0;
	    for(int k=min;k<=max;++k)
	    {
	    	for(int i=0;i<n;++i)
	    	{
	    			if(l[i]<=k&&r[i]>=k)
	    			c[k-min]+=1;
	    	}
	    }
	    int t=0;
	    for(int i=1;i<(s);++i)
	    {
	    	if(c[i]>c[t])
	    	t=i;
	    }
        count+=1;
	    int j=0; 
	    for(int i=0;i<n;++i)
	    {
	    	if(t<l[i]||t>r[i])
	    	{
	    		l[j]=l[i];
	    		r[j]=r[i];
				++j;
			}
	    }
	    n=n-c[t];
	    //for(int i=0;i<n;++i)
	    //cout<<l[i]<<" "<<r[i]<<endl;
	}
	cout<<count<<endl;
	}
	return 0;
}
