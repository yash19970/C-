#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i == n-1){
			break;
		}
		cout<<a[i]+a[i+1]<<" ";
	}
	cout<<a[n-1]<<endl;
	return 0;
}