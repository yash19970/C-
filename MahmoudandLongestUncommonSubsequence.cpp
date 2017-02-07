#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string a,b;
	int l1,l2,count=0;
	cin>>a>>b;
	l1 = a.length();
	l2 = b.length();
	if(l1 ==l2){
		if(a ==b){
			cout<<-1<<endl;
		}else{
			cout<<l2<<endl;
		}
	}else if(l1 >l2){
		cout<<l1<<endl;
	}else{
		cout<<l2<<endl;
	}
	return 0;
}