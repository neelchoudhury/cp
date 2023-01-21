#include<iostream>

using namespace std;

//BST implementation

#include<stdio.h>
#include<stdlib.h>
  
struct node
{
    int key;
    struct node *left, *right;
};
  
// A utility function to create a new BST node
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
  
// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
  
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);   
 
    /* return the (unchanged) node pointer */
    return node;
}

void inr(struct node* bst, int k ,int *x)
{
	if(bst==NULL)
		return ;
	inr(bst->left, k,x);
	++*x;
	if(*x==k)
	{	cout<<"element is "<<bst->key<<endl;
		return ;
	}
	inr(bst->right, k,x);
}

int main()
{
	int n,x=0;
	cin>>n;
	struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 23);
    insert(root, 13);
    insert(root, 45);
    insert(root, 96);
    insert(root, 74);
    insert(root, 10);
	insert(root, 15);
    insert(root, 29);
    insert(root, 90);
	insert(root, 34);
    insert(root, 22);
    //int x=0;
    inorder(root);
    cout<<endl;
	inr(root, n, &x);
		return 0;
}


