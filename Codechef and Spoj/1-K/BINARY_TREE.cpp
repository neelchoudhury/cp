#include<bits/stdc++.h>

using namespace std;

	struct node{
		int key;
		node *pt;
		node *lchild;
		node *rchild;
	};
	
	typedef struct node* nodeptr;

//Class BTree defining the attributes of a Binary Tree
//No particular function has been mader for inserting elements
//into the Binary Tree, because there is no notion of order
//in the Tree

class BTree{
	

	nodeptr root;
	
	
	public:
		BTree()
		{
			root=NULL;
			root->pt=NULL;
			root->lchild=NULL;
			root->rchild=NULL;
		}
		bool isRoot(nodeptr);
		bool isEmpty(nodeptr);
		bool size();
		//void insert(nodeptr*, nodeptr*, nodeptr*, nodeptr*);
		nodeptr leftChild(nodeptr);
		nodeptr rightChild(nodeptr);
		nodeptr parent(nodeptr);
		void preOrder(nodeptr);
		void postOrder(nodeptr);
		void inOrder(nodeptr);
};

//Return if the current node is the root
bool BTree::isRoot(nodeptr point)
{
	return ((point->pt)==NULL);
}

//Return if the tree is empty
bool BTree::isEmpty(nodeptr point)
{
	return (point==NULL);
}

//Return the left child of the current node
nodeptr BTree::leftChild(nodeptr ptr)
{
	return (ptr->lchild);	 
}

//Return the right child of the current node
nodeptr BTree::rightChild(nodeptr ptr)
{
	return (ptr->rchild);
}

//Return the parent of the current node
nodeptr BTree::parent(nodeptr ptr)
{
	return (ptr->pt);
}

//Traverse the tree in Pre Order
//---->

//  Visit the Current Node
//  Visit the Left Subtree
//  Visit the Right Subtree


void BTree::preOrder(nodeptr ptr)
{
	if(ptr!=NULL)
	{
		cout<<ptr->key<<" ";
		preOrder(ptr->lchild);
		preOrder(ptr->rchild);
	}
}

//Traverse the tree in Post Order
//---->
//  Visit the Left Subtree
//  Visit the Right Subtree
//  Visit the Current Node


void BTree::postOrder(nodeptr ptr)
{
	if(ptr!=NULL)
	{
		postOrder(ptr->lchild);
		postOrder(ptr->rchild);
		cout<<ptr->key<<" ";
	}
}

//Traverse the tree in order
//---->
//  Visit left subtree
//  Visit node
//  Visit right subtree

void BTree::inOrder(nodeptr ptr)
{
	if(ptr!=NULL)
	{
		inOrder(ptr->lchild);
		cout<<ptr->key<<" ";
		inOrder(ptr->rchild);
	}
}

int main()
{
	BTree T;
	//Inerting is not possible wihtout defining any particular 
	//in which the insertions shoud work. SO I have not defined any
	//functions for insertions.
	
	//But, I think the implementation of this as it is is okay.
}
