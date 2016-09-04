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
node* calc(node* root){
		if(root->left == NULL){
			cout<<root->data<<" ";
			return 0;
		}
		return calc(root->left);
}

int main(int argc, char const *argv[])
{
	node* root = NULL;
	root = ins(root,4);
	ins(root,2);
	ins(root,13);	
	ins(root,16);	
	ins(root,15);	
	ins(root,44);	
	calc(root);
	return 0;
}