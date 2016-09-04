/* stack using arrays.*/
#include<iostream>
#define MAX 5
using namespace std;
int top;
void push(int x[],int a){
		if(top == MAX){
			return ;	 
		}else{
			top++;
			x[top] = a;
		}
}
void pop(int x[]){
	int item;
	item = x[top];
	top--;
	if(top == 0){
		return;
	}
	cout<<item;
}
int main(int argc, char const *argv[])
{
	int a,n,x[MAX];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		push(x,a);
	}
	pop(x);
	cout<<endl;
	for(int i =top; i>0; --i){
		cout<<x[i]<<" ";
	}
	return 0;
}