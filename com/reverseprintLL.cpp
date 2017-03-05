#include<bits/stdc++.h>
using namespace std;
struct NODE
{
	int data; NODE *next;
} 	*start = NULL, *ptr = NULL;

int main(int argc, char const *argv[])
{
	cin>>n;
	for (int i = 1; i <=n; ++i)
	{
		if(start == NULL){
			ptr = start = new NODE;
		}else{
			ptr = ptr->next;
		}
		cin>>ptr->data;
		if(i==n){
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