#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,c=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(i<j && ((a[i]+a[j])%k == 0)){
				c++;
			}
		}
	}
	cout<<c<<endl;
	return 0;
}