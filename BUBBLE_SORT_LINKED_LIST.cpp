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
	//BUBBLE SORT
	
	struct node * i;
	struct node * j;
	
	i=b,j=b;
	
	while(i->next!=NULL)
	{
		j=b;
		while((j->next)->next!=NULL)
		{
			if(j->info>=(j->next)->info)
			{
				int t=j->info;
				(j->info)=(j->next)->info;
				(j->next)->info=t;
			}
			j=j->next;
		}
		i=i->next;
	}
	
	while(b!=NULL)
	{
		cout<<b->info<<" ";
		b=b->next;
	}
	
	return 0;
}
