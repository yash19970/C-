#include<bits/stdc++.h>
using namespace std;
struct NODE
{
	int data; NODE *next;
	
} *start =NULL, *ptr = NULL, *start2 = NULL, *ptr2 = NULL;
int main(int argc, char const *argv[])
{
	int n,x,flag=0;
	cin>>n>>x;
	for (int i = 0; i <n; ++i)
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
	int count = 0;
	for (ptr = start; ptr; ptr = ptr->next)
	{
		if(ptr->next == NULL){
			flag = 1;
		}
		if(ptr->data != x){
			
			if(count ==0){
				ptr2 = start2  = new NODE;
			}else{
				ptr2 = ptr2->next;
			}
			count++;
			ptr2->data = ptr->data;
			if(flag){
				ptr2->next = NULL;
			}else{
				ptr2->next = new NODE;
			}
		}else{
			if(flag){
				ptr2->next = NULL;
			}
		}
	}
	for (ptr2 = start2; ptr2; ptr2 = ptr2->next)
	{
		cout<<ptr2->data<<endl;
	}
	return 0;
}