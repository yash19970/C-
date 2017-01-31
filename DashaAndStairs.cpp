#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,count,x,y;
	cin>>x>>y;
	if(x==y && x !=0 || x == y-1 || y == x-1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}