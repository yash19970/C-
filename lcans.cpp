/* program for finding the lowest common ancestor for BST.*/
#include<iostream>
using namespace std;
typedef struct node
{
   int data;
   node * left;
   node * right;
}node;
node * lca(node * root, int v1,int v2)
{
    if(root == NULL) return NULL;
    if(root->data == v1 || root->data == v2){
        return root;
    }
    if(root->data > v1 && root->data >v2){
        return lca(root->left,v1,v2);
    }
    if(root->data <v1 && root->data <v2){
        return lca(root->right,v1,v2);
    }
    return root;
}

node* Insert(node* root, int data){
  if(root == NULL){
    root = new node();
    root->data = data;
    root->left = root->right = NULL;
  }
  else if(root->data <= data){
    root->right = Insert(root->right, data);
  }
  else{
    root->left = Insert(root->left,data);
  }
}
int main(int argc, char const *argv[])
{
  node* root = NULL;
  root = Insert(root,10); /* example.*/
  root = Insert(root,3);
  root = Insert(root,9);
  root = Insert(root,15);
  lca(root,v1,v2); /*pass on the values for v1 and v2.*/
  return 0;
}
/*hackerrank solutions*/