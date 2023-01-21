#include<iostream>

using namespace std;

struct node{
	int info;
	node * next;
};

int main()
{
	int n;
	struct node * l;
	cin>>n;
	int x;
	cin>>x;
	l=new node;
	struct node * b=new node;
	
	l->info=x;
	l->next=NULL;
	b=l;
	n--;
	while(n--)
	{
		cin>>x;
		struct node * t=new node;
		t->info=x;
		t->next=NULL;
		l->next=t;
		
		l=t;
	}
	//SELECTION SORT
	
	struct node * i;
	struct node * j;
	
	i=b,j=b;
	
	struct node * qq;
	qq=b;
	
	do
	{
		j=i;
		int t=j->info;
		//j=j->next;
		//int 
		while((j)!=NULL)
		{
			if(j->info<=t)
			{
				t=j->info;
				qq=j;
				//cout<<"1 ";
			}
			j=j->next;
		} 
		qq->info=i->info;
		i->info=t;
		i=i->next;  
	}while(i->next!=NULL);
	
	while(b!=NULL)
	{
		cout<<b->info<<" ";
		b=b->next;
	}
	
	return 0;
}
