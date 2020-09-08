#include<bits/stdc++.h>

using namespace std;


//Queue implementation using Linked Lists
class queueLL{
	struct node{
		int data;
		node* next;
	};
	
	typedef struct node* node_ptr;
	node_ptr top;
	node_ptr bottom;
	
	public:
		queueLL();
		void pushBack(int addData);
		int popFront();
		int size();
		bool isEmpty();
		void showQueue();
		
};

queueLL::queueLL()
{
	top=NULL;
	bottom=NULL;
}

void queueLL::pushBack(int addData)
{
	//cout<<"Pushing"<<endl;
	node_ptr n=new node;
	if(bottom!=NULL)
	{
		n->data=addData;
		n->next=bottom;
		bottom=n;
	}
	else
	{ 
		n->data=addData; 
		n->next=top;
		top=n; 
		bottom=top; 
	}
}

int queueLL::popFront()
{
	//cout<<"popping"<<endl;
	int x=top->data;
	node_ptr n=new node;
	n=bottom;
	while(n->next!=top)
		n=n->next;
	n->next=NULL;
	delete top;
	top=n;
	return x;
}

int queueLL::size()
{
	node_ptr n=new node;
	n=bottom;
	int i=0;
	while(n!=top)
		n=n->next,i++;
	return i;
}

bool queueLL::isEmpty()
{
	return (bottom==NULL);
}

void queueLL::showQueue()
{
	node_ptr n=bottom;
	while(n!=NULL)
		cout<<n->data<<" ", n=n->next;
	cout<<endl;
}

//Main function starts here
int main()
{
	queueLL Q;
	Q.pushBack(2);
	Q.showQueue();
	Q.pushBack(4);
	Q.showQueue();
	Q.pushBack(1);
	Q.showQueue();
	cout<<Q.popFront()<<endl;
	Q.showQueue();
	Q.pushBack(10);
	Q.showQueue();
	cout<<Q.popFront()<<endl;
	Q.showQueue();
	cout<<Q.popFront()<<endl;
	Q.showQueue();
	return 0;
}
