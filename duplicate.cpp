#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a[100];
	int c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	a.sort();
	for(int i=0;i<n;i++){
		if(a[i] == a[i+1]){ c++;
			for(int j=i+1;j<n;j++){
				a[j] = a[j+1];				
			}
		}
	}
	for(int i=0;i<c;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}