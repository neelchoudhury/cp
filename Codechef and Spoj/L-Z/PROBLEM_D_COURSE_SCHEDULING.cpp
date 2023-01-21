#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	map<pair<char*,char*>,char*> m;
	char a[25],b[25],c[25];
		map<pair<char*,char*>,char*>::iterator i;
	while(t--)
	{
		
		cin>>a>>b>>c;
		pair<char*,char*> tt;
		tt.first=a;
		tt.second=b;
		m.insert(pair<pair<char*,char*>, char*> (tt,c));
	
		for(i=m.begin(); i!=m.end(); i++)
		{
			cout<<(*i).first.first<<" "<<(*i).first.second<<" "<<(*i).second<<endl;
		}
		cout<<"done pritnign"<<endl;
	}
	map<char*, pair<char*,char*>> n;

	cout<<"pritng"<<endl;
	for(i=m.begin(); i!=m.end(); i++)
	{
		cout<<(*i).first.first<<" "<<(*i).first.second<<" "<<(*i).second<<endl;
	}
	cout<<"done pritnign"<<endl;
	for(i=m.begin(); i!=m.end(); i++)
	{
		strcpy(a,(*i).first.first);
		strcpy(b,(*i).first.second);
		strcpy(c,(*i).second);
	//	a=(*i).first.first;
	//	b=(*i).first.second;
	//	c=(*i).second;
		n.insert(make_pair(c,make_pair(a,b)));
	}
	
	map<char*, pair<char*,char*>>::iterator j;
	int arr[n.size()];
	memset(a,0,sizeof(0));
	int k=0;
	arr[k++]=1;
 
	//strcpy(a,map[0].first);
	for(j=n.begin(); j!=n.end(); j++)
	{
		if(j==n.begin())
		{
			continue;
			strcpy(a,(*j).first);
		}
		else
		{
			if((*j).first==a)
			{
				arr[k]=arr[k-1]+1;
				k++;
			}
			else
			{
				arr[k]=1;
			}
			strcpy(a,(*j).first);
		}
		
	}
	k==0;
	//cout<<"bing "<<endl;
	for(j=n.begin();j!=n.end(); j++,k++)
	{
		//cout<<"     chandler"<<endl;
		if(j==n.begin())
		{
		//	continue;
			
			strcpy(a,(*j).first);
			cout<<(*j).first<<" ";
		}
		else
		{
			if((j)!=n.end())
			{
				if(a!=(*(j)).first)
				{
					cout<<arr[k-1]<<endl;
					cout<<(*j).first<<" ";
				}
			}
		
			strcpy(a,(*j).first);
		}
			if((++j)==n.end())
			{
				cout<< arr[k-1]<<endl;
				j--;
			}
	}
	return 0;
}
