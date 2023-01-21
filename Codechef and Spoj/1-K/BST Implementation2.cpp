#include <iostream>
using namespace std;

struct node{
	int info;
	node* lc;
	node* rc;
};

void insert(struct node * &t, int v)
{
	//cout<<"inserting"<<endl;
	if(t==NULL)
	{
		t=new node;
		t->info=v;
		t->rc=NULL;
		t->lc=NULL;
	//	cout<<"root"<<endl;
	}
	else if(t->info>v)
	{ 
	 
		//cout<<"left"<<endl;
			insert(t->lc,v);
		
	}
	else
	{
	 
			//cout<<"right"<<endl;
				insert(t->rc, v);
	}
}

void find(struct node * &t,int v)
{
	if(t==NULL)
	{
		cout<<"not found"<<endl;
		return ;
	}
	else if(t->info == v)
	{
		cout<<"Element found"<<endl;
	}
	else if(v>t->info)
		find(t->rc, v);
	else 
		find(t->lc, v);
}

void inorder(node* bst)
{
	if(bst==NULL)
	{
		return;
	}
	else
	{
		inorder(bst->lc);
	cout<<bst->info<<" ";
	inorder(bst->rc);
	}
	
}

void preorder(node * bst)
{
	if(bst==NULL)
		return ;
	else
	{
		cout<<bst->info<<" ";
		preorder(bst->lc);
		preorder(bst->rc);
	}
}

int main()
{
	struct node* bst=NULL;
	int x,n;
	//cout<<"This is my program"<<endl;
	cin>>n;
	cin>>x;
	bst=new node;
	bst->info=x;
	bst->lc=NULL;
	bst->rc=NULL;
	n--;
	while(n--)
	{
		//cout<<"in "<<n<<endl;
		cin>>x;
		insert(bst,x);
	}
	
	inorder(bst);
	cout<<endl;
	return 0;
}
