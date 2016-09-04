/*geeksforgeeks, print bst in given range*/

#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
};

node* ins(node* root, int data){
	if(root == NULL){
		root = new node();
		root->data = data;
		root->left = NULL;
		root->right = NULL;
	}
	else if(data <= root->data){
		root->left = ins(root->left,data);
	}
	else{
		root->right= ins(root->right,data);
	}

	return root;
}
node* rangep(node* root,int k1,int k2){
	if(root == NULL) return  root;
	rangep(root->left,k1,k2);
	if( k1 <= root->data && root->data <= k2){
		cout<<root->data<<" ";
	}
	rangep(root->right,k1,k2);
}
int main(int argc, char const *argv[])
{
	node* root = NULL;
	root = ins(root,13);
	ins(root,6);
	ins(root,23);
	ins(root,1);
	ins(root,55);
	rangep(root,9,190);
	return 0;
}