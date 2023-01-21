//Vector learning

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//Vector declaration
	
	vector<int> v;
	int x,a;
	
	
	cout<<"Enter the no of elements of the vector: "<<endl;
	cin>>a;
	
	//Push_back
	
	
	while(a--)
	{
		cin>>x;
		v.push_back(x);
	}
	
	
	//v.size() and v.at()
	
	cout<<"The Vector is: ";
	for(unsigned int i=0;i<v.size(); i++)
	{	
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	cout<<"Enter an element to enter inside the vector: ";
	cin>>x;
	int y;
	cout<<"Enter position where to enter: ";
	cin>>y;
	
	
	//v.insert(,) and v.begin
	v.insert(v.begin()+y, x);
	cout<<"The new vector is: ";
	for(unsigned int i=0;i<v.size(); i++)
	{	
		cout<<v.at(i)<<" ";
	}
	
	//v.empty and v.pop_back 
	//v.back not used ==> returns last element in vector
	
	cout<<endl<<"Trying out popping : "<<endl;
	while(!v.empty())
	{
		for(unsigned int i=0; i<v.size(); i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
		v.pop_back();
	}
	cout<<endl;
	return 0;
}
