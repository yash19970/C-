/*geeksforgeeks , arrays remove duplicate from array*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a[100],T;
	//int c =0,total=0;
	cin>>T;
for(int i=0;i<T;i++){	
	int c =0,total=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i] == a[i+1]){
			c++;
		}
	}
	total = n-c;
	cout<<total<<endl;
 }
	return 0;
}



