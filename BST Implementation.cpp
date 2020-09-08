//BST mplementation

#include<iostream>

using namespace std;

struct node{
	int info;
	node* lc;
	node* rc;
};

void insert(node* t, int v)
{
	if(t==NULL)
	{
		t->info=v;
		t->rc=NULL;
		t->lc=NULL;
	}
	if(t->info>v)
	{
		insert(t->lc,v);
	}
	else if(t->info<v)
	{
		insert(t->rc, v);
	}
	
		
}

void inorder(node* bst)
{
	inorder(bst->lc);
	cout<<bst->info<<" ";
	inorder(bst->rc);
}

int main()
{
	node* bst;
	int x,n;
	cin>>n;
	cin>>x;
	bst->info=x;
	bst->lc=NULL;
	bst->rc=NULL;
	n--;
	while(n--)
	{
		cin>>x;
		insert(bst,x);
	}
	
	inorder(bst);
	cout<<endl;
	return 0;
}

