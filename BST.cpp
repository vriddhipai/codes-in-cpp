#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;	
};

node* root;


node* create(int data)
{
	node *temp= new  node();
	temp->data= data;
	temp->right= temp->left= NULL;
	return temp;
}

void insert(node* &root, int n)
{
	if(root==NULL)
	{
		root= create(n);
	}	
	else if(root->data > n)
	{
		insert(root->left,n);
	}
	else
		insert(root->right,n);
}

void inorder(node* root) //inorder traversal
{
	if(root!=NULL)
	{
		inorder(root->left); 
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

void preorder(node* root) //prerder traversal
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		preorder(root->left); 
		preorder(root->right);
		
	}
}

void postorder(node* root) //postorder traversal
{
	if(root!=NULL)
	{
		postorder(root->left); 
		postorder(root->right);
		cout<<root->data<<" ";
	}
}


int main()
{
	node *root= NULL;
	int n, num;
	cin>>n;
	create(n);
	root= create(n);
	cout<<root->data<<" Inserted"<<endl;
	insert(root,n);
	for(int i=0; i<n; i++)
	{
		cin>>num;
		insert(root,num);
	}
	inorder(root);
	preorder(root);
	postorder(root);
}



