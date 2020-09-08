#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k1,k2;
	cin>>n;
	cin>>k1;
	queue<int> a,b;
	int x;
	for(int i=0;i<k1; i++)
	{
		cin>>x;
		a.push(x);
	}
	cin>>k2;
	for(int i=0; i<k2; i++)
	{
		cin>>x;
		b.push(x);
	}
	int y;
	int cnt=0;
	while((a.size()!=0 and b.size()!=0) and cnt<999999)
	{
		x=a.front();
		y=b.front();
		a.pop();
		b.pop();
		if(x>y)
		{
			a.push(y);
			a.push(x);
		}
		else
		{
			b.push(x);
			b.push(y);
		}
		cnt++;
	}
	if(cnt>=999999)
		cout<<-1<<endl;
	else
		cout<<cnt<<" ";
	if(a.size()==0)
		cout<<2<<endl;
	else if(b.size()==0)
		cout<<1<<endl;
	return 0;
}


