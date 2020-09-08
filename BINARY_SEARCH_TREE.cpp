#include<iostream>

using namespace std;

struct node{
	int val;
	node* rc;
	node* lc;
};

void insert(struct node * &root, int v)
{
	 if(root==NULL)
	 {
	 	root=new node;
	 	root->val=v;
	 	root->rc=NULL;
	 	root->lc=NULL;
	 }
	 else if(root->val>v)
	 {
	 	insert(root->lc, v);
	 }
	 else if(root->val<v)
	 {
	 	insert(root->rc, v);
	 }
}

void inorder(node * bst)
{
	if(bst==NULL)
	{
		return ;
	}
	else
	{
		inorder(bst->lc);
		cout<<bst->val<<" ";
		inorder(bst->rc);
	}
}

void preorder(node * bst)
{
	if(bst==NULL)
	{
		return ;
	}
	else
	{
		
		cout<<bst->val<<" ";
		preorder(bst->lc);
		preorder(bst->rc);
	}
}

void postorder(node * bst)
{
	if(bst==NULL)
	{
		return ;
	}
	else
	{
		postorder(bst->lc);
		postorder(bst->rc);
		cout<<bst->val<<" ";
	}
}

void find(struct node * root, int v)
{
	if(root==NULL)
	{
		cout<<"Element not found!"<<endl;
		return ;
	}
	else
	{
		if(root->val==v)
		{
			cout<<"Element found !"<<endl;
		}
		else if(root->val>v)
		{
			find(root->lc, v);
		}
		else if(root->val<v)
		{
			find(root->rc, v);
		}
	}
}

struct node * suc(struct node * root)
{
	struct node * tmp=root;
	 
		while(tmp->lc!=NULL)
		{
			tmp=tmp->lc;
		}
		return tmp;
 
}

struct node* deleteNode(struct node* root, int key)
{
    // base case
    if (root == NULL) return root;
 
    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (key < root->val)
        root->lc = deleteNode(root->lc, key);
 
    // If the key to be deleted is greater than the root's key,
    // then it lies in right subtree
    else if (key > root->val)
        root->rc = deleteNode(root->rc, key);
 
    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->lc == NULL)
        {
            struct node *temp = root->rc;
            delete(root);
            return temp;
        }
        else if (root->rc == NULL)
        {
            struct node *temp = root->lc;
            delete(root);
            return temp;
        }
 
        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        struct node* temp = suc(root->rc);
 
        // Copy the inorder successor's content to this node
        root->val = temp->val;
 
        // Delete the inorder successor
        root->rc = deleteNode(root->rc, temp->val);
    }
    return root;
}

int main()
{
	cout<<"Creating a BST:"<<endl;
	struct node * bst=NULL;
	bst=new node;
	int x=25;
	bst->val=x;
	//cout<<bst->val<<endl;
	bst->rc=NULL;
	bst->rc==NULL;
	insert(bst,10);
	insert(bst,30);
	insert(bst,40);
	insert(bst,23);

	inorder(bst);
	cout<<endl;
	preorder(bst);
	cout<<endl;
	postorder(bst);
	cout<<endl;
	//find(bst, 30);
	//find(bst,20);
	bst=deleteNode(bst, 23);
	inorder(bst);
	cout<<endl;
	cout<<bst->val<<" "<<(bst->rc)->val<<" "<<(bst->lc)->val<<endl;
	return 0;
}
