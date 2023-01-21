#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	char ch;
	int x;
	vector<int> v;
	int cap=0,ini=0,cnt=0;
	for(int i=0; i<n; i++)
	{
		cin>>ch;
		cin>>x;
		if(ch=='-')
		{
			int flag=0;
			for(int i=0; i<v.size(); i++)
			{
				if(v[i]==x)
				{
					flag=1,cnt--;
					v.erase(v.begin()+i);
					break;	
				}
			}
			if(!flag)
			{
				cap=cap+1;
			}
		}
		else if(ch=='+')
			v.push_back(x),cnt++,cap=max(cap,abs(cnt));
		//cap=max(cap,abs(cnt));
	}
	cout<<cap<<endl;
	return 0;
}
