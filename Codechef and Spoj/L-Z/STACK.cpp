#include<bits/stdc++.h>

using namespace std;


//Stacks implemented using Linked Lists
class stackLL{
	
	struct node{
		int info;
		node *next;
	};
	
	typedef struct node* node_ptr;
	node_ptr top;
	
	public:
		stackLL();
		void push(int x);
		int pop();
		int size();
		bool isEmpty();
		void showStack();
};

stackLL::stackLL()
{
	top=NULL;
}



void stackLL::push(int x)
{
	//cout<<"Pushing"<<endl;
	node_ptr n= new node;
	n->info=x;
	n->next=top;
	top=n;
}

int stackLL::pop()
{
	//cout<<"Popping"<<endl;
	int n=top->info;
	node_ptr x=top;
	top=top->next;
	delete x;
	return n;
}

int stackLL::size()
{
	node_ptr n=new node();
	n=top;
	int i=0;
	while(n!=NULL)
		n=n->next, i++;
	return i;
}
bool stackLL::isEmpty()
{
	return(top==NULL);
}

void stackLL::showStack()
{
	node_ptr n=top;
	//Shows ojects from the top of the 
    //stack on till the bottom
	while(n!=NULL)
		cout<<n->info<<" ", n=n->next;
	cout<<endl;
}

//Stack implemented usng array
class stackArray{
	int no;
	int index;
	int* a;
	
	public:
		stackArray();
		void push(int addData);
		int pop();
		int size();
		bool isEmpty();
		void makeNewArray(int size);
		void showStack();
		
};

stackArray::stackArray()
{
	no=1;
	index=0;
}

void stackArray::push(int addData)
{
	if(index==no-1){
		makeNewArray(2*no);
	}
	a[index++]=addData;
}

int stackArray::pop()
{
	return a[--index];
}

int stackArray::size()
{
	return index;
}

void stackArray::makeNewArray(int size)
{
	int* b=new int[size];
	memset(b,0,size);
	for(int i=0; i<size/2; i++)
		b[i]=a[i];	
	a=b;
}

bool stackArray::isEmpty()
{
	return (index==0);
}

void stackArray::showStack()
{
	for(int i=index; i>=0; i--)//Shows ojects from the top of the 
							   //stack on till the bottom
		cout<<a[i]<<" ";
	cout<<endl;
}

//Main function starts here

int main()
{
	//Comment or uncomment any one of the commands below to 
	//make the corresponding class object
	
	//stackLL S;
	stackArray S;
	S.push(1);
	S.showStack();
	S.push(2);
	S.showStack();
	cout<<S.pop()<<" Popped"<<endl;
	S.showStack();
	S.push(5);
	S.showStack();
	cout<<S.pop()<<" Popped "<<S.pop()<<" Popped"<<endl;
	S.showStack();
	S.push(4);
	S.showStack();
	S.push(10);
	S.showStack();
	return 0;
}
