#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n],b[n],check[n];
	int sum =0;
	for(int i=0;i<n;i++){
	//out<<i;	
		cin>>a[i];
		//check[i] = 1;
	}
	for(int i=n-1;i>=0;--i){
		if(i==n-1){
			b[i] = a[i];
		}	
		for(int j=i+1;j<n;j+2){
			check[j] = 0;
			sum += b[i];
		}
		for(int j=i+1;j<n;j++){
			if(check[j] !=0){
				sum  = sum - b[i];
			}
		}
		b[i] = a[i] + sum;
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}