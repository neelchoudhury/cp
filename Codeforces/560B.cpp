#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a1,b1,a2,b2,a3,b3;
	cin>>a1>>b1>>a2>>b2>>a3>>b3;
	int f1=0,f2=0,f3=0,f4=0;
	f1=(a1>=(a2+a3)and (b1>b2 and b1>b3))or (b1>=(b2+b3)and (a1>a2 and a1>a3));
	f2=(a1>=(a2+b3)and (b1>b2 and b1>a3)) or (b1>=(b2+a3)and (a1>a2 and a1>b3));
	f3=(a1>=(b2+a3)and (b1>a2 and b1>b3)) or (b1>=(a2+b3)and (a1>b2 and a1>a3));
	f4=(a1>=(b1+b2)and (b1>a2 and b1>a3)) or (b1>=(a1+a2) and (a1>b2 and a1>b3));
	//cout<<f1<<" "<<f2<<" "<<f3<<" "<<f4<<endl;
	if(f1 or f2 or f3 or f4)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
	
}
