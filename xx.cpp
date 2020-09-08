#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream s1,s2;
	s1.open("su.bat",ios::in);
	s2.open("out.bat",ios::out);
	int count=0;
	while(!(s1.eof()))
	{
		char a;
		s1>>a;
		cout<<a;
		s2<<a;
		count++;
	}
	s1.close();
	s2.close();
	return 0;
}
