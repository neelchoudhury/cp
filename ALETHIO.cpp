#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	char a[1010];
	int len;
	scanf("%s", a);
	len=strlen(a);
	int alphcnt=0;
	int a1=0,a2=0;
	int ctr1=0,ctr2=0;
	for(int i=0; i<len; i++)
	{
		if(i==0)
		{
			if(a[i]>='0' and a[i]<='9')
				ctr1=0,ctr2=0;
			else
			{
			    alphcnt=1;
				ctr1=0,ctr2=0;;
			}
		}
		else
		{
			if(a[i]>='0' and a[i]<='9')
				ctr2=i;
			else
			{
				if(i!=len-1)
				{
					if(a[i+1]>='0' and a[i+1]<='9')
					{
					    alphcnt++;
					    if(alphcnt>1)
					    {
					       	if(a2-a1<ctr2-ctr1)
					    	{
					    		a1=ctr1;
						    	a2=ctr2;
						    }
						    alphcnt=0;
						    i++;
						    ctr1=i;
						    ctr2=i;
					    }
					    else
					    {
						    i+=1;
						    ctr2=i;
					    }
					}
					else
					{
						i+=1;
						if(a2-a1<ctr2-ctr1)
						{
							a1=ctr1;
							a2=ctr2;
						}
						ctr1=i;
						ctr2=i;
					}
				}
			}
		}
		cout<<a1<<" "<<a2<<" "<<ctr1<<" "<<ctr2<<endl;
	}
	if(a2-a1<ctr2-ctr1)
	{
	    a2=ctr2;
	    a1=ctr1;
	}
	int flag=0;
	cout<<a1<<" "<<a2<<endl;
	for(int i=a1; i<=a2; ++i)
	{
	    if(flag==0)
	    {
	        if(a[i]=='0')
	        {
	            while(a[i]=='0')
	            {
	                i++;
	            }
	            flag=1;
	            if(i==a2)
	            {
	                cout<<0<<endl;
	                break;
	            }
	        }
	    }
	    if(!(a[i]>='0' and a[i]<='9'))
	        cout<<'9'<<endl;
	    else
		    cout<<a[i];
	}
	cout<<endl;
	return 0;
}
