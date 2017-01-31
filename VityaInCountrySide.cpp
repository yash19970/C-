#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,l;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==1 && a[n] ==0){
		cout<<"UP"<<endl; return 0;
	}
	if(n ==1 and a[n] !=15){
		cout<<-1<<endl;
		return 0;
	} 
	if(a[n]==15 && a[n-1]==14){
		cout<<"DOWN"<<endl;
	return 0;
	}
	if(a[n-1] > a[n]){
		cout<<"DOWN"<<endl;
	}else if(a[n-1] < a[n]){
		cout<<"UP"<<endl;
	}else if(a[n] == 0 && a[n]< a[n-1]){
		cout<<"UP"<<endl;
	} 
	return 0;
}	