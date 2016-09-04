/*
prints the max value in BST, here it is always the root, because 
the max value is of node.(for left tree)*/

#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;

};
node* ins(node* root, int data){
	if (root == NULL){
		root = new node();
		root->data = data;
		root->left = NULL;
		root->right = NULL;
	}
	else if(root->data <= data){
		root->right = ins(root->right,data);
	}
	else{
		root->left = ins(root->left,data);
	}
	return root;
}
int maxv(node* root){
	int max = 0;
	if(root == NULL) return 0;
	maxv(root->left);
	if(root->data > max){
		max = root->data;
	}
return max;
}
int main(int argc, char const *argv[])
{
	node* root= NULL;
	root = ins(root,13);
	ins(root,6);
	ins(root,23);
	ins(root,1);
	ins(root,55);
	
	cout<<maxv(root);	
	return 0;
}