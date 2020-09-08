#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	int n;
	cin>>n;
	char c[4];
 
	int cq=0,ch=0,ct=0;
	char c1[]={"1/4"};
	char c2[]={"1/2"};
	char c3[]={"3/4"};
	for(int i=0;i<n;i++)
		{
			scanf("%s",c);
			//printf("  %s\n",c);
			if(strcmp(c,c1)==0)
			{
				//cout<<strcmp(c,c1)<<"  ";
				cq++;
			//	cout<<"Entered cq"<<endl;
				//continue;
			}
			else if(strcmp(c,c2)==0)
			{
				ch++;
			//cout<<strcmp(c,c2)<<"  ";
			//	cout<<"ch entered"<<endl;
			}
			else if(strcmp(c,c3)==0)
			{
				ct++;
			//	cout<<strcmp(c,c3)<<"  ";
				//cout<<"ct entered"<<endl;
			}
		}
	//	cout<<" "<<cq<<" "<<ch<<" "<<ct<<endl;
	int pz=1;
	if(n==0)
	{
		cout<<1<<endl;
		return 0;
	}
	pz+=ct;
	//cout<<" "<<pz<<endl;
	if(cq>ct)
		cq-=ct;
	else
		cq=0;
	pz+=(ch/2);
		//cout<<" "<<pz<<endl;
	ch=ch%2;
	pz+=(cq/4);
		//cout<<" "<<pz<<endl;
	if(ch+cq>1)
		pz+=2;
	else
		pz+=1;
	cout<<pz<<endl;
}
