#include<bits/stdc++.h>
using namespace std;
struct NODE
{
	int data;
	NODE *next;
	
} *start = NULL, *ptr= NULL,*ptr2=NULL,*start2=NULL;
bool isPalindrome(NODE *head){
	start2 = head; int flag =0;
	for (ptr2 = head; ptr2; ptr2= ptr2->next)
	{
		NODE *temp = new NODE;
		temp->data = ptr2->data;
		if(ptr2 == head){
			temp->next =NULL;
		}else{
			temp->next = start2;
		}
		start2 = temp;
	}
	while(ptr2 != NULL && ptr != NULL)
	//for (ptr2 = start2, ptr = start; ptr2; ptr2= ptr2->next , ptr= ptr->next)
	{
		if(ptr->data != ptr2->data){
			flag =1;
		}
		ptr = ptr->next; ptr2 = ptr2->next;
	}
	if(flag){
		return false;
	}else{
		return true;
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		if(start == NULL){
			ptr = start = new NODE;
		}else{
			ptr = ptr->next;
		}
		cin>>ptr->data;
		if(i==n-1){
			ptr->next = NULL;
		}else{
			ptr->next = new NODE;
		}
	}
	isPalindrome(start);
	return 0;
}