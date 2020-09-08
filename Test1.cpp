#include<iostream>
#include<dos.h>
#include<unistd.h>

using namespace std;

int main()
{
	int x=0,y=2;
	while(x<10)
	{
		y*=2;
		y+=x;
		x--;
		cout<<x<<endl;
		usleep(0.01);
	}
	return 0;
}
