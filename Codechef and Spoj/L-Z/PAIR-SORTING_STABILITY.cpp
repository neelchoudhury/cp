#include<bits/stdc++.h>
#define x first
#define y second

using namespace std;

bool compare1(const pair<int,int>&i, const pair<int,int>&j){
    return i.x < j.x;
}

bool compare2(const pair<int,int>&i, const pair<int,int>&j){
    return i.y < j.y;
}

int main()
{
	vector<pair<int,int>> v;
	int q,w;
	for(int i=0; i<10; i++)
	{
		q=(23*i+(int)pow(i,3))%7;
		w= (37*i+(int)pow(i,2))%11;
		v.push_back(make_pair(q,w));
	}
	
	cout<<"Genereated array"<<endl;
	
	for(int i=0; i<10; i++)
	{
		cout<<v[i].first<<" ";
	}
	cout<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<v[i].second<<" ";
	}
	cout<<endl;
	//Sortinf using second element as comparator
	sort(v.begin(),v.end(),compare2);
	
	//Sorting using first element as comparator
	sort(v.begin(),v.end(),compare1);
	
	cout<<"Result array"<<endl;
	
	for(int i=0; i<10; i++)
	{
		cout<<v[i].first<<" ";
	}
	cout<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<v[i].second<<" ";
	}
	cout<<endl;
	return 0;
}

/*


Result:-


Genereated array
0 3 5 5 2 2 4 0 3 5 
0 5 1 10 10 1 5 0 8 7 
Result array
0 0 2 2 3 3 4 5 5 5 
0 0 1 10 5 8 5 1 7 10 



-----------------------------------------------

Therefore, this sort() function is stable

*/
