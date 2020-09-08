#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll q,w,e,r,t;
	ll a,s,d,f,g;
	cin>>q>>w>>e>>r>>t;
	cin>>a>>s>>d>>f>>g;
	ll ans=0;
	//cout<<"ggg "<<abs(min(e,d)+10-max(e,d))<<endl;
	ans+=(min(abs(q-a),abs(min(q,a)+10-max(q,a))));
	//cout<<ans<<endl;
	ans+=(min(abs(w-s),abs(min(w,s)+10-max(w,s))));//cout<<ans<<endl;
	ans+=(min(abs(e-d),abs(min(e,d)+10-max(e,d))));//cout<<ans<<endl;
	ans+=(min(abs(r-f),abs(min(r,f)+10-max(r,f))));//cout<<ans<<endl;
	ans+=(min(abs(t-g),abs(min(t,g)+10-max(t,g))));
	cout<<ans<<endl;
	return 0;
}
