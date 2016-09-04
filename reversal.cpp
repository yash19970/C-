/* 
geeksforgeeks #Reversal Algorithm, Arrays.(rotating)
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,d;
	int a[100],temp[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>d;
	for(int i=0;i<d;i++){
		temp[i] = a[i];
	}
	for(int i=0;i<n;i++){
		if(i >=d){
			a[abs(d-i)] = a[i];
		}
	}
	int c=0;
	for(int i =0; i<d;i++){
		a[abs(n-d+c)] = temp[i];
		c++;
	} 
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "; 
	}
return 0;
}
