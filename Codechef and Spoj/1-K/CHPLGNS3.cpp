#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct poly{
	ll no=0;
	vector<pair<ll,ll>> coor;
};

ll ar(pair<ll,ll> a, pair<ll,ll> b, pair<ll,ll> c)
{
	ll x,y,z;
	x=b.first*c.second-c.first*b.second;
	y=c.first*a.second-a.first*c.second;
	z=a.first*b.second-b.first*a.second;
	//ar=
	return abs(x+y+z);
}

bool v(pair<ll,ll> a, pair<ll,ll> b, pair<ll,ll> c)
{
	pair<ll, ll> u,v;
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
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		struct poly m[n];
		ll z,w;
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &m[i].no);
			for(ll j=0; j<m[i].no; j++)
			{
				scanf("%lld %lld", &z,&w);
				m[i].coor.push_back(make_pair(z,w));
				//cout<<"DONE 1"<<endl;
			}
		}
		ll x[n];
		
		deque<pair<ll,ll>> dq;
		
		//vector<pair<ll,ll>> pon;
		memset(x,0,sizeof(x));
		for(ll i=0; i<n; i++)
		{	dq.clear();
			if(v(m[i].coor[0],m[i].coor[1],m[i].coor[2])) 
			{
				dq.push_back(m[i].coor[0]);
				dq.push_back(m[i].coor[1]);
			}
			else
			{
				dq.push_back(m[i].coor[1]);
				dq.push_back(m[i].coor[0]);
			}
			dq.push_back(m[i].coor[2]);
			dq.push_front(m[i].coor[2]);
			if(m[i].no!=3)
			{
				for(ll j=3;j<m[i].no; j++)
				{
					int s=dq.size();
					while(v(m[i].coor[j],dq.at(0),dq.at(1)) and v(dq.at(s-2),dq.at(s-1),m[i].coor[j]))
					{
						j++;
						if(j>m[i].no-1)
							break;
					}
					while(!v(dq.at(s-2),dq.at(s-1), m[i].coor[j]))
					{
						dq.pop_back();
						s=dq.size();
					}
					dq.push_back(m[i].coor[j]);
			
						while(!v(m[i].coor[j],dq.at(0),dq.at(1)))
						{
							dq.pop_front();
						}
						dq.push_front(m[i].coor[j]);
				
				}
			}
			if(dq.size()==m[i].no)
			{
			for(ll j=2; j<dq.size(); j++)
			{
				//x[i]+=(pow((m[i].coor[j].first-m[i].coor[j-1].first),2)+pow((m[i].coor[j].second-m[i].coor[j-1].second),2));
				//cout<<"DONE 2"<<endl;
				x[i]+=(ar(dq[0],dq[j-1], dq[j]));
			}
			}
			else
			{
			for(ll j=2; j<dq.size(); j++)
			{
				x[i]+=(pow((m[i].coor[j].first-m[i].coor[j-1].first),2)+pow((m[i].coor[j].second-m[i].coor[j-1].second),2));
				//cout<<"DONE 2"<<endl;
				//x[i]+=(ar(dq[0],dq[j-1], dq[j]));
			}	 
			x[i]+=(pow((m[i].coor[0].first-m[i].coor[m[i].no-1].first),2)+pow((m[i].coor[0].second-m[i].coor[m[i].no-1].second),2));
			}
			//x[i]+=(pow((m[i].coor[0].first-m[i].coor[m[i].no-1].first),2)+pow((m[i].coor[0].second-m[i].coor[m[i].no-1].second),2));
		}
		ll y[n];
		memset(y,0,sizeof(y));
		for(ll i=0; i<n; i++)
		{
			y[i]=x[i];
		}
		sort(x,x+n);
		/*cout<<"x"<<endl;
		for(int i=0; i<n; i++)
			cout<<x[i]<<" ";
		cout<<endl;
		cout<<"y"<<endl;
		for(int i=0; i<n; i++)
			cout<<y[i]<<" ";
		cout<<endl;*/
		ll b[n];
		ll low,high,mid;
		memset(b,0,sizeof(b));
		for(ll i=0; i<n; i++)
		{
			low=0,high=n-1;
			mid=(high+low)/2;
			while( low<=high)
			{
				//cout<<"DONE 3 "<<i<<endl;
				//cout<<low<<" "<<mid<<" "<<high<<endl;
				if(y[i]==x[mid])
				{
					b[i]=(mid);
					//cout<<"    "<<b[i]<<endl;
					low=high+1;
				}
				else if(y[i]>x[mid])
				{
					low=mid+1;
					mid=(low+high)/2;
				}
				else
				{
					high=mid-1;
					mid=(low+high)/2;
				}
			}
		}
		for(ll i=0; i<n; i++)
			printf("%lld ",b[i]);
		cout<<endl;
	}
	return 0;
}
