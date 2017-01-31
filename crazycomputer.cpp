#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,c,z =0,latest;
	long long int m =0;
	cin>>n>>c; 
	long int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	for(int i=0;i<n;i++){
		if(i+1<n){
			if(a[i]+c >=a[i+1]){
			m = m+1;
		}
		else{
				m =0;
				z++;
			}
		}	
 	}
	m++;			
	cout<<m<<endl;
	return 0;
}