#include<iostream>
using namespace std;

	struct node
	{
		int data;
		node *left,*right;
	};

	node *new_node(int data)
	{
		node *nn = new node;
		nn->data = data;
		nn->left = NULL;
		nn->right = NULL;
		return nn;
	}	

	node *insert(node *root,int data)
	{
		node *nn = new_node(data);
		if(root == NULL)
			root =  nn;
		else
		{
			if(data < root->data)
			{
				root->left = insert(root->left,data);
			}
			else
				root->right = insert(root->right,data);
		}
		return root;
	}
        
    void print_bst(node *root)
    {
    	if(root == NULL)
    		return;
    	cout<<root->data<<endl;
    	print_bst(root->left);
    	print_bst(root->right);

    }

	int main()
	{
		node *root = NULL;
		root = insert(root,5);
		root= insert(root,20);
		root= insert(root,15);
		root= insert(root,7);
		print_bst(root);
	}