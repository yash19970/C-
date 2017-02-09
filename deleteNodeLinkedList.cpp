#include<bits/stdc++.h>
using namespace std;
struct NODE
{
	int data; NODE *next;
	
} *start =NULL, *ptr = NULL;
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
		cin>>ptr->data;
		if(i==n-1){
			ptr->next = NULL;
		}else{
			ptr->next = new NODE;
		}
	}
	cout<<"Enter Position and value:"<<endl;
	cin>>pos;
	if(pos == 1){
		NODE *temp = start;
		start = start->next;
		delete temp;
	}else{
		c=1;
		for (ptr =start; ptr; ptr++)
		{
			if(c == pos-1){
				NODE  *temp = ptr->next;
				ptr->next = ptr->next->next;
				delete temp;
				break;
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