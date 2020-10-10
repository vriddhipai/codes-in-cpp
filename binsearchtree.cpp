#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;	
};

//node* root= NULL;
node* GetNewNode(node* root, int data)
{
	node* newNode= new node();
	newNode->data= data;
	newNode->left= newNode->right= NULL;
	return newNode;
}

node* Insert(node* root,int data)
{
	if(root==NULL)
		root= GetNewNode(root,data);
	else if(data <= root->data)
		root->left= Insert(root->left,data);
	else
	{
		root->right= Insert(root->right,data);
	}
	return root;
}

bool Search(node* root,int data)
{
	if(root==NULL)
	return false;
	else if(data<= root->data)
	return Search(root->left,data);
	else  
	return Search(root->right,data);
}
		
int main()
{
	node* root= NULL;
	root= Insert(root,15);
	root= Insert(root,20);
	root= Insert(root,11);
	int num;
	cout<<"Enter number to be searched: ";
	cin>> num;
	if(Search(root,num)==true)
	cout<<"Found\n";
	else
	cout<<"Not found\n";
	return 0;
}

