#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data; Node *next;
} 	*start = NULL, *ptr3 = NULL;

void sortList(Node* head)
{
    Node *ptr=NULL, *ptr1 = NULL, *start2=NULL,*testp = NULL;
    for(ptr1 = head; ptr1; ptr1 = ptr1->next){
        if(ptr1->data < 0){
            if(start2 == NULL){
                ptr = start2 = new Node;
                start2->data = ptr1->data;
                start2->next = NULL;
            }else{
                Node *temp;
                temp = new Node;
                temp->data = ptr1->data;
                temp->next = start2;
                start2 = temp;  // insertion at Node 1.
            }
        }else if(ptr1->data >=0){
            if(start2 == NULL){
                ptr = start2 = new Node;
                start2->data = ptr1->data;
                start2->next = NULL;
            }else{
                while(ptr->next!=NULL){
                    ptr = ptr->next;
                }
                ptr->next = new Node;
                ptr = ptr->next;
                ptr->data = ptr1->data;
                ptr->next = NULL;
            }
        }
    }
    for(testp = start2; testp; testp = testp->next){
        cout<<testp->data<<" ";
    }
}
int main(int argc, char const *argv[])
{
	for (int i = 1; i <=5; ++i)
	{
		if(start == NULL){
			ptr3 = start = new Node;
		}else{
			ptr3 = ptr3->next;
		}
		cin>>ptr3->data;
		if(i==5){
			ptr3->next = NULL;
		}else{
			ptr3->next = new Node;
		}
	}
	sortList(start);
	return 0;
}