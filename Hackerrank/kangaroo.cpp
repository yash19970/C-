#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	if((x1 - x2) % (v2 - v1) == 0){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
	return 0;
}