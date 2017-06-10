void printSpiral(Node *root)
{
    if(root == NULL) return ;
    
    stack<struct Node*> s1,s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        
        while(!s1.empty()){
            struct Node *t1 = s1.top();
            s1.pop();
            cout<<t1->data<<" ";
            
            if(t1->right){
                s2.push(t1->right);
            }
            if(t1->left){
                s2.push(t1->left);
            }
        }
        while(!s2.empty()){
            struct Node *t2 = s2.top();
            s2.pop();
            cout<<t2->data<<" ";
            if(t2->left){
                s1.push(t2->left);
            }
            if(t2->right){
                s1.push(t2->right);
            }
        }
    }
}