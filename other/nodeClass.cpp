#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
};
int main(int argc, char const *argv[])
{
	Node *ptr= NULL;
	Node *start= NULL;
	int val;
	for (int i = 0; i <5; ++i)
	{
		if(start == NULL){
			Node *s = new Node();
			ptr = s;
			ptr->data = 1;
			ptr->next = NULL;
			start = ptr;
		}else{
			ptr->next = new Node();
			ptr = ptr->next;
			ptr->data = 2;
			ptr->next= NULL; 
		}
	}	
	ptr = start;
	while(ptr){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}	
	return 0;
}