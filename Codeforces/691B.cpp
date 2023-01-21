#include<bits/stdc++.h>
#define ll long long int

using namespace std;

map<char,char> mm;
map<char,char>::iterator ii;
string s;

//mm.clear();
mm['A']='A';
// m['b']='d'; m['d']='b'; m['H']='H'; m['I']='I'; m['M']='M'; m['O']='O'; m['o']='o';
/*m['T']='T'; m['U']='U'; m['V']='V'; m['v']='v'; m['W']='W'; m['w']='w'; m['X']='X'; m['x']='x';
m['Y']='Y';*/

int main()
{
	cin>>s;
	int x=s.length()/2;
	int f=0;
	for(int i=0; i<=x; i++)
	{
		/*ii=m.find(s[i]);
		if(ii!=m.end())
		{
			if(s.length()%2==1)
			{
				if(s[i]!=s[2*x-i])
				{
					f=1;
					break;
				}
			}
			else if(s.length()%2==0)
			{
				if(s[i]!=s[2*x-i+1])
				{
					f=1;
					break;
				}
			}
		}
		else
		{
			f=1;
			break;
		}*/
	}
	if(f==1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}
