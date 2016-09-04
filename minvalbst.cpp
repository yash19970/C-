
/*
program to find the min value stored in bst
*/

#include<iostream>
using namespace std;
struct node {
	int data;
	struct node *left;
	struct node *right;
};
node* Insert(node *root, int data){
	if(root == NULL){
		root = new node();
		root->data = data;
		root->left = root->right = NULL;
	}
	if( data <= root->data){
		Insert(root->left,data);
	}
	if(data > root->data){
		Insert(root->right,data);
	}
	return root;
}


int main(int argc, char const *argv[])
{
	 node *root = NULL;
	 root = Insert(root,10);

	return 0;
}