#include<bits/stdc++.h>
using namespace std;
struct NODE
{
	int data; NODE *next;
} 	*start = NULL, *ptr = NULL;

int main(int argc, char const *argv[])
{
	for (int i = 1; i <=5; ++i)
	{
		if(start == NULL){
			ptr = start = new NODE;
		}else{
			ptr = ptr->next;
		}
		ptr->data = i;
		if(i==5){
			ptr->next = NULL;
		}else{
			ptr->next = new NODE;
		}
		//cout<<ptr<<" "<<ptr->next<<endl;
	}
	for (ptr = start; ptr ; ptr= ptr->next)
	{
		cout<<ptr->data<<endl;
	}
	return 0;
}