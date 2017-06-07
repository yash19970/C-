#include<bits/stdc++.h>
using namespace std;
int st[10],top,n;
void push(int x){
	if(top >= n-1){
		cout<<"stack overflow"<<endl; return ;
	}else{
		top++;
		st[top] = x;
	}
}
void pop(){
	if(top <-1){
		cout<<"stack underflow"<<endl; return ;
	}else{
		cout<<"removed: "<<st[top]<<endl;
		top--;
	}
}
int main(int argc, char const *argv[])
{
	top=-1;
	cout<<"Enter no. of elements: "<<endl;
	cin>>n;
	push(1);
	push(2);
	push(3);
	pop();
	for(int i=top;i>=0;--i){
		cout<<st[i]<<" ";
	}
	return 0;
}