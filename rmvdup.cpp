/*geeksforgeeks : reove duplicates*/
#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,c=99999;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(c != a[i]){
			cout<<a[i];
			c = a[i];
		}
	}

	return 0;
}


/*LOGIC 2.*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,c;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i] < a[i+1] && i+1 <n){
			cout<<a[i];
		
		}
	}
	cout<<a[n-1];
	return 0;
}