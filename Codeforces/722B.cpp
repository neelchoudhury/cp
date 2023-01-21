#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll p[110];
char ch[110];

int main()
{
	ll n;
	cin>>n;
	for(ll i=0;i<n;++i)
	{
		cin>>p[i];
	}
	ll f=1; 
	cin.ignore();
	for(ll i=0;i<n;++i)
	{ 
		cin.getline(ch,110);
		//cout<<ch<<endl;
		ll cnt=0;
		for(ll j=0;j<strlen(ch);j++)
		{
			if(ch[j]=='a'||ch[j]=='e'||ch[j]=='i'||ch[j]=='o'||ch[j]=='u'||ch[j]=='y')
				cnt++;
		} 
		//cout<<cnt<<" "<<p[i]<<endl;
		if(cnt!=p[i])
		{
			f=0;
		//	break;
		}
	}
	if(f)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
