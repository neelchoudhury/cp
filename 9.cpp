#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int a,b,c,d,e,f;
float x,y;
cout<<"Enter the X conrdinate of 1st vertices";
cin>>a;
cout<<"Enter the Y conrdinate of 1st vertices";
cin>>b;
cout<<"Enter the X conrdinate of 2nd vertices";
cin>>c;
cout<<"Enter the Y conrdinate of 2nd vertices";
cin>>d;
cout<<"Enter the X conrdinate of 3rd vertices";
cin>>e;
cout<<"Enter the Y conrdinate of 3rd vertices";
cin>>f;
cout<<"Enter the X cordinate of given point";
cin>>x;
cout<<"Enter the Y cordinate of given point";
cin>>y;
float p,q,r,s,t,u,m,n;
p=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
q=sqrt(((a-e)*(a-e))+((b-f)*(b-f)));
r=sqrt(((c-e)*(c-e))+((d-f)*(d-f)));
m=p+q+r;
s=sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
t=sqrt(((x-c)*(x-c))+((y-d)*(y-d)));
u=sqrt(((x-e)*(x-e))+((y-f)*(y-f)));
n=s+t+u;
if (m>n)
cout<<"Point lies inside the triangle"<<endl;
else
cout<<"Point lies outside the triangle"<<endl;
return 0;
}
