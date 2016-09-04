/*
codeforces #div2  round 364 ques 1. 
*/

#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string x= "I hate";
	string y= "I love";
	int n;
	cin>>n;
	if(n ==1){
		cout<<"I hate it"<<endl; return 0;
	}
	
	for(int i=1;i<=n;i++){
		if(i%2 ==0){
			cout<<y;
		}
		else{
			cout<<x;
		}
		 if(i!= n) { cout<<" that "; }
	}
	cout<<" it"<<endl;
	return 0;
}