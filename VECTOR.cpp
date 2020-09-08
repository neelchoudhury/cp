#include<bits/stdc++.h>

using namespace std;


//Implementing Vector data structure using Linked Lists
class vectorLL{
	struct node{
		int data;
		node* next;
	};
	int size;
	typedef struct node* node_ptr;
	node_ptr head;
	node_ptr curr;
	node_ptr tail;
	
	public:
		vectorLL();
		void pushBack(int addData);
		void delAt(int pos);
		void insertAt(int addData, int pos);
		void atPos(int pos);
		int size_v();
		bool isEmpty();
		void showVector();
};

vectorLL::vectorLL()
{
	head=NULL;
	curr=NULL;
	tail=NULL;
	size=0;
}

void vectorLL::pushBack(int addData)
{
	node_ptr n;
	n->data=addData;
	if(head!=NULL)
	{
		head->next=n;
		head=n;
		size++;
		n->next=NULL;
	}
	else
	{
		head=n;
		n->next=NULL;
		tail->next=head;
		size++;
	}
}

void vectorLL::delAt(int pos)
{
	int i=1;
	node_ptr n=tail;
	while(i!=pos-1)
	{
		i++;
		n=n->next;
	}
	n->next=(n->next)->next;
	size--;
}

void vectorLL::insertAt(int data, int pos)
{
	int i=1;
	node_ptr n=tail;
	node_ptr m;
	m->data=data;
	while(i!=pos)
	{
		i++;
		n=n->next;
	}
	m->next=(n->next);
	n->next=m;
	size++;
}

void vectorLL::atPos(int pos)
{
	int i=1;
	node_ptr n=tail;
	while(i!=pos)
	{
		i++;
		n=n->next;
	}
	cout<<n->data<<endl;
}

int vectorLL::size_v()
{
	return size;
}

bool vectorLL::isEmpty()
{
	return (size==0);
}

void vectorLL::showVector()
{
	node_ptr n=tail;
	while(n->next!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
	cout<<endl;
}

//This is the main function
int main()
{
	vectorLL v;
	v.size_v();
	v.pushBack(3);
	v.showVector();
	v.pushBack(5);
	v.showVector();
	v.insertAt(3,2);
	v.showVector();
	v.delAt(2);
	v.showVector();
	v.atPos(1);
	v.showVector();
	v.pushBack(10);
	v.showVector();
	v.pushBack	(13);
	v.showVector();
	v.delAt(3);
	v.showVector();
	return 0;
}
