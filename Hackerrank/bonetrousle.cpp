#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int h,n,k,b,c1=0,sum,t;
	vector<int> a;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>k>>b;
		h = (n*n+n)/2;
		if(n>h){
			cout<<-1<<endl; return 0;
		} sum=0;
		for(int j=1;j<=n;j++){
			sum = sum+j;
		}
	}
	return 0;
}