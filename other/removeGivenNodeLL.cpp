#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data; Node *next;
}   *start = NULL, *ptr = NULL, *start2=NULL;
int CompareLists(Node *headA)
{
    Node *ptr = NULL;
    Node *temp=NULL;
    int x = 3;
    while(headA->data > x){
        temp = headA;
        headA = temp->next;
        delete temp;    
    }
    ptr = headA;
    while(ptr->next !=NULL){
        if(ptr->next->data >x){
            temp = ptr->next;
            ptr->next = ptr->next->next;
            delete temp;
        }else{
            ptr = ptr->next;
        }
    } 

    ptr = headA;    
    while(ptr){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
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

    CompareLists(start);
    return 0;
}