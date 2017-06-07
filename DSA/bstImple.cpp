#include<iostream>
using namespace std;
struct Node{
	Node *left =NULL;
	Node *right = NULL;
	int data;
};
Node* getNode(int data){
	Node* newnode = new Node();
	newnode->data = data;
	newnode->right = NULL;
	newnode->left = NULL;
	return newnode;
}
Node* Insert(Node *root, int data){
	if(root == NULL){
		root = getNode(data);
	}else if(data <= root->data){
		root->left = Insert(root->left,data);
	}else{
		root->right = Insert(root->right,data);
	}
	return root;
}
bool search(Node* root, int data){
	if(root == NULL){
		return false;
	}else if( root->data == data){
		return true;
	}else if(data <= root->data){
		 search(root->left,data);
	}else{
		 search(root->right,data);
	}
}
void Max(Node* root){
	if(root == NULL){
		cout<<"Empty";
	}
	while(root->right !=NULL){
		root = root->right;
	}
	cout<<root->data;
}
int maxheight(Node *root){
	int left=0,right=0;
	if(root == NULL){
		return -1;
	}
	left = maxheight(root->left);
	right = maxheight(root->right);
	return max(left,right)+1;
}
int c=0;
int inOrder(Node *root,int c){
	if(root == NULL){
		return 0; 
	}
	if(c==0){
		cout<<c<<endl; c++;
	}
		cout<<c<<endl; c++;

	inOrder(root->left,c);

	inOrder(root->right,c);
	//return sum;
}
Node* lca(Node * root, int v1,int v2)
{
    if(v1<= root->data && v2> root->data || v2<= root->data && v1> root->data ){
        cout<<root->data<<endl;
        return root;
    }
    root->left = lca(root->left,v1,v2);
    root->right =lca(root->right,v1,v2);
   
}
int main(int argc, char const *argv[])
{
	
	Node *root = NULL;
	root = Insert(root,20);
	root = Insert(root,8);
	root = Insert(root,4);
	root = Insert(root,12);
	root = Insert(root,10);
	root = Insert(root,14);
	root = Insert(root,22);

	//root = lca(root,1,7);
	inOrder(root,0);
	return 0;
}
