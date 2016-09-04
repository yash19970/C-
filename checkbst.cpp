/*geeksforgeeks check if binary tree is bst or not
LOGIC: traverse tree in inorder way, and store the 
results in array, at last check wether the array is
sorted in ascending order or not. 
*/
#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;

};
int a[100];
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
int i=0;
node* checkbst(node* root){
	if(root == NULL) return root;
	checkbst(root->left);
	a[i] = root->data;
	i++;
	checkbst(root->right);
}
int main(int argc, char const *argv[])
{
	node* root= NULL;
	root = ins(root,13);
	ins(root,6);
	ins(root,23);
	ins(root,1);
	ins(root,55);
	checkbst(root);
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}