#include<bits/stdc++.h>
using namespace std;
struct NODE
{
	int data;
	NODE *next;
	
} *start = NULL, *ptr= NULL;
int main(int argc, char const *argv[])
{
	int pos,value,c,n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		if(start == NULL){
			ptr = start = new NODE;
		}else{
			ptr = ptr->next;
		}
		ptr->data = i;
		if(i==n-1){
			ptr->next = NULL;
		}else{
			ptr->next = new NODE;
		}
	}
	cout<<"Enter Position and value:"<<endl;
	cin>>pos>>value;
	if(pos == 1){
		ptr = new NODE;
		ptr->data = value;
		ptr->next = start;
		start = ptr;
	}else{
		c = 1;
		for (ptr = start; ptr; ptr = ptr->next)
		{
			if(c == pos-1){
				NODE *temp = new NODE;
				temp->data = value;
				temp->next = ptr->next;
				ptr->next = temp;
			}
			c++;
		}	
	}
	cout<<endl;
	for(ptr=start; ptr; ptr=ptr->next)
	 { cout<<ptr->data<<endl;
	 } 

	return 0;
}