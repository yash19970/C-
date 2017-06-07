#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	stack<int> s;
	int n,t,k;
	cout<<"Enter no of elements: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		s.push(t);
	}
	cout<<"size of stack: "<<s.size()<<endl;
	cout<<"top of stack: "<<s.top()<<endl;
	return 0;
}