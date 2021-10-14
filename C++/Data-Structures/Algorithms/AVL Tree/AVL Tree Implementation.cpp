#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int key;
	Node* left;
	Node* right;
	int height;
};

// Utility functions
int height(Node* curr)
{
	if(curr == NULL) return 0;
	return curr->height;
}

int getBalance(Node* curr)
{
	if(curr == NULL) return 0;
	return (height(curr->left) - height(curr->right));
}

Node* newNode(int val)
{
	Node* node = new Node();
	node->key = val;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;
	return (node);
}

Node* rightRotate(Node* curr)
{
	Node* x = curr->left;
	Node* y = x->right;
	
	x->right = curr;
	curr->left = y;
	
	curr->height = 1 + max(height(curr->left), height(curr->right));
	x->height = 1 + max(height(x->left),height(x->right));
	return x;
}

Node* leftRotate(Node* curr)
{
	Node* x = curr->right;
	Node* y = x->left;
	
	x->left = curr;
	curr->right = y;
	
	curr->height = 1 + max(height(curr->left), height(curr->right));
	x->height = 1 + max(height(x->left),height(x->right));
	return x;	
}

Node* insert(Node* curr, int val)
{
	if(curr==NULL) return newNode(val);
	if(val < curr->key) curr->left = insert(curr->left, val);
	else if(val > curr->key) curr->right = insert(curr->right, val);
	else return curr; // Duplicates Not Allowed
	
	curr->height = 1 + max(height(curr->left),height(curr->right));
	
	int bal = getBalance(curr);
	
	if(bal>1 && val < curr->left->key) return rightRotate(curr);
	else if(bal>1 && val > curr->left->key) 
	{
		curr->left = leftRotate(curr->left);
		return rightRotate(curr);
	}
	else if (bal<-1 && val > curr->right->key) return leftRotate(curr);
	else if(bal<-1 && val<curr->right->key) 
	{
		curr->right = rightRotate(curr->right);
		return leftRotate(curr);
	}
	return curr;
}

void preorder(Node* root)
{
	if(root == NULL) return;
	cout<<root->key<<" ";
	preorder(root->left);
	preorder(root->right);
	return;
}

void inorder(Node* root)
{
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->key<<" ";	
	inorder(root->right);
	return;
}

int main()
{
	int n;
	cin>>n;
	Node* root = NULL;
	for(int i=n;i>0;i--)
	{
		root = insert(root,i);
	}
	preorder(root);	
	cout<<endl;
	inorder(root);
}
