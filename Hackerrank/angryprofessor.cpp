#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,k,c;
	int a[1000];
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>k;
		c =0;
		for(int j=0;j<n;j++){
			cin>>a[i];
			if(a[i] <=0){
				c++;
			}
		}
		if(c >= k){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}