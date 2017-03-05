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
for (ptr = start; ptr; ptr = ptr->next)
{
	p = ptr;
	ptr = n;
	n = ptr->
}


return 0;
}