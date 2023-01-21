#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
	int t;
	char b[200];
	int a[200];
	cin>>t;
	while(t--)
	{
		cin>>b;
		for(int i=0; b[i]!='\0'; i++)
		{
			a[i]=(int)b[i];
		}
		sort(a,a+strlen(b));
		int cnt=0;
		int ccnt=1;
		for(int i=1; i<strlen(b); i++)
		{
			if(a[i]==a[i-1])
			{
				//cout<<"if df entered"<<endl;
				ccnt++;
			}
			else
			{
				//cout<<"else entered"<<endl;
				
				if(i!=strlen(b)-1)
					cnt+=(ccnt+1)/2;	
				ccnt=1;
			}
			if(i==strlen(b)-1)
				cnt+=(ccnt+1)/2;
			//cout<<"cnt ccnt "<<cnt<<" "<<ccnt<<endl;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
