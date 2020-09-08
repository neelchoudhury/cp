#include<bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	cin>>k;
	int a[15];
	for(int i=0; i<12; i++)
		cin>>a[i];
	sort(a,a+12);
	int cnt=0;
	for(int i=11; i>=0 and k>0; i--)
	{
		k-=a[i];
		cnt++;
	}
	//cout<<"cnt is "<<cnt<<endl;
	if(k>0)
	{	//cout<<"SAt";
		cout<<-1<<endl;}
		
	else {
		//cout<<"sat this";
		cout<<cnt<<endl;}
	 
	return 0;
}
