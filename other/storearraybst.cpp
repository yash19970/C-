void storeInorder(Node *root, int a[], int *i){
    if(root== NULL){
        return ;
    }
    storeInorder(root->left,a,i);
    a[*i] = root->data;
    (*i)++;
    storeInorder(root->right,a,i);
}
void printCommon(Node *root1, Node *root2)
{
    int *a1 = new int[50];
    int i=0;
    storeInorder(root1,a1,&i);
    int *a2 =  new int[50];
    int j=0;
    storeInorder(root2,a2,&j);
    i=0;j=0;
    while(1){
        if(a1[i]< a2[j]){i++;}
        else if(a1[i]> a2[j]){j++;}
        else{
            cout<<a1[i]<<" ";
            i++; j++;
        }
        if(i==49){break;}
    }
}