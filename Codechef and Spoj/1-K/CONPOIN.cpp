#include<bits/stdc++.h>
#define ll long long int
#define x first
#define y second

using namespace std;

bool vi(pair<int , int> a, pair<int,int> b, pair<int,int> c)
{
	pair<int,int> u,v;
	v.first= b.first - a.first;
	v.second=b.second-a.second;
	u.first=c.first-b.first;
	u.second=c.second-b.second;
	
	double uxvz=u.first*v.second - u.second*v.first;
	
	if(uxvz>0)
		return 1;
	else
		return 0;
}

int main()
{
		int t,n,m;
		cin>>t;
		while(t--)
		{
			cin>>n>>m;
			int a,b;
			vector<pair<int,int>> v;
			for(int i=0; i<m; i++)
			{
				cin>>a>>b;
				v[i].x=a;
				v[i].y=b;
			}
		deque<pair<int,int>> dq;
		
		//vector<pair<ll,ll>> pon;
		//memset(x,0,sizeof(x));
		if(m>3)
		{	dq.clear();
			if(vi(v[0],v[1],v[2])) 
			{
				dq.push_back(v[0]);
				dq.push_back(v[1]);
			}
			else
			{
				dq.push_back(v[1]);
				dq.push_back(v[0]);
			}
			dq.push_back(v[2]);
			dq.push_front(v[2]);
			if(v.size()!=3)
			{
				for(ll j=3;j<v.size(); j++)
				{
					int s=dq.size();
					while(vi(v[j],dq.at(0),dq.at(1)) and vi(dq.at(s-2),dq.at(s-1),v[j]))
					{
						j++;
						if(j>v.size()-1)
							break;
					}
					while(!vi(dq.at(s-2),dq.at(s-1), v[j]))
					{
						dq.pop_back();
						s=dq.size();
					}
					dq.push_back(v[j]);
			
						while(!vi(v[j],dq.at(0),dq.at(1)))
						{
							dq.pop_front();
						}
						dq.push_front(v[j]);
				
				}
			}
		}
			if(n==1)
			{
				cout<<0<<endl;
			}
			else if(n==2)
			{
				if(m==1)	cout<<1<<endl;
				else	cout<<0<<endl;
			}
			else if(n==3)
			{
				if(m==3)	cout<<1<<endl;
				else 	cout<<0<<endl;
			}
			else if(n==4)
			{
				if(dq.size()==4 and m==5)	cout<<1<<endl;
				else if(dq.size()==3 and m==6)	cout<<1<<endl;
				else 	cout<<0<<endl;
			}
			else if(n==5)
			{
				if(dq.size()==5 and m==7)	cout<<1<<endl;
				else if(dq.size()==4 and m==8)	cout<<1<<endl;
				else if(dq.size()==3 )
				{
					bool z[5];
					int j=0;
					sort(v.begin(),v.end());
					sort(dq.begin(), dq.end());
					for(int i=0; i<5;i++)
					{
						if(v[i].x==dq[i].x and v[i].y==dq[i].y)
							z[i]==1,j++;
							else
							z[i]=0;
					}
					long double m1,m2;
					for(int i=0; i<4; i++)
					{
						for(int j=i+1;j<5; j++)
						{
							if(z[i]==0 and z[j]==0)
							{
								if((v[i].x-v[j].x)!=0)
									m1=(v[i].y-v[j].y)/(long double)(v[i].x-v[j].x);
								else
									m1=INT_MAX;
							}
							
						}
					}
					int f=0;
					for(int i=0; i<5; i++)
					{
					for(int j=0;j<5; j++)
						{
							if(i!=j and z[i]==1 and z[j]==0)
							{
								if((v[i].x-v[j].x)!=0)
									m2=(v[i].y-v[j].y)/(long double)(v[i].x-v[j].x);
								else
									m2=INT_MAX;
							}
							if(m2==m1)
							{
								f=1;
								break;
							}
							
							
						}
						if(f==1)
								break;
					}
					if(f==1)
					{
						if(m==8)	cout<<1<<endl;
						else cout<<0<<endl;
					}
					else
					{
						if(m==9) cout<<1<<endl;
						else cout<<0<<endl;
					}
					
				}
				else 	cout<<0<<endl;
			}
		}
		return 0;
}
