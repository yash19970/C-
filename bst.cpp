/*
program for insertion of a node in bst.
*/

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node* right;
	struct Node* left;

};	
Node* Insert(Node* root, int data){
	if(root == NULL){
		root = new Node();
		root->data = data;
		root->left = NULL;
		root->right = NULL;
	}
	else if(data <= root->data){
		root = Insert(root->left, data);
	}
	else{
		root = Insert(root->right, data);
	}
	return root;
}

int main(int argc, char const *argv[])
{
	Node* root = 	NULL;
	root = Insert(root,12);
	root = Insert(root,22); // call with the same root address which is stored from the above call, so root is not null here. 
	root = Insert(root,2);
	return 0;
}