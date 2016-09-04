#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,l,v1,v2,k,left;
	double t1,t2;
	cin>>n>>l>>v1>>v2>>k;
	// n =total ,  k =seats in bus.
	if(n<=k){
		t1 = (l/v2);
		cout<<t1<<endl;
		return 0;
	}
	else if(n>k){
		t1  = (l/v1);
		t2	= (l/v2);
		cout<<t1+t2<<endl; return 0;
	}
	return 0;
}
//sudo easy_install -U setuptools