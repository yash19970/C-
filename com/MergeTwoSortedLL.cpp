#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data; Node *next;
}   *start = NULL, *ptr = NULL, *start2=NULL;
int CompareLists(Node *headA, Node* headB)
{
    Node *ptr1 = headA, *ptr2 = headB;
    int flag =0;
    while(ptr1 || ptr2){
        if(ptr1->data != ptr2->data){
            flag=1;
            break;
        }
        if(ptr1->next !=NULL && ptr2->next !=NULL){
            ptr1= ptr1->next;
            ptr2 = ptr2->next;
        }else if(ptr2->next !=NULL){
            ptr2 = ptr2->next;
        }else if(ptr1->next !=NULL){
            ptr1 = ptr1->next;
        }else if(ptr1->next ==NULL && ptr2->next ==NULL){
            break;
        }
    }
    if(flag){
        cout<<0;
        //return 0;
    }else{
        flag=0;
        cout<<1;
        //return 1;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int i = 1; i <=n; ++i)
    {
        if(start == NULL){
            ptr = start = new Node;
        }else{
            ptr = ptr->next;
        }
        cin>>ptr->data;
        if(i==n){
            ptr->next = NULL;
        }else{
            ptr->next = new Node;
        }
    }
    for (int i = 1; i <=n; ++i)
    {
        if(start2 == NULL){
            ptr = start2 = new Node;
        }else{
            ptr = ptr->next;
        }
        cin>>ptr->data;
        if(i==n){
            ptr->next = NULL;
        }else{
            ptr->next = new Node;
        }
    }
    CompareLists(start,start2);
    return 0;
}