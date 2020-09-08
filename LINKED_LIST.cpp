#include<bits/stdc++.h>

using namespace std;

class List{
	private:
		struct lnode{
			int data;
			lnode *next;
		};
	typedef struct lnode* node_ptr;
	node_ptr head;
	node_ptr curr;
	node_ptr temp;
	
	public:
		List();
		void addNode(int addData);
		void deleteNode(int delData);
		void printList();
};

List::List()
{
	head=NULL;
	curr=NULL;
	temp=NULL;
}

void List::addNode(int addData)
{
	//cout<<"adding"<<endl;
	node_ptr n= new lnode;
	n->data=addData;
	n->next=NULL;
	if(head!=NULL)
	{
		curr=head;
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=n;
	
	}
		else
		{
			head=n;
		}
}

void List::deleteNode(int delNode)
{
	//cout<<"Deleting"<<endl;
	node_ptr n=head;
	while((n->next)->data!=delNode )
		n=n->next;
	node_ptr  nex;
	node_ptr now;
	nex=(n->next)->next;
	n->next=nex;
}

void List::printList()
{
	//cout<<"Printing"<<endl;
	node_ptr n=head;
	while(n!=NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}

int main()
{
	List L1 ;
	L1.addNode(2);
	L1.addNode(3);
	L1.addNode(5);
	L1.printList();
	L1.deleteNode(3);
	L1.printList();
	L1.addNode(1);
	L1.printList();
	return 0;
}
