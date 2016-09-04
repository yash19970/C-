/*geeksforgeeks, Equaltoproduct,Arrays*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	int n,p,a[100];
	int flag = 0;
	cin>>n>>p;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]*a[j] == p){
				//cout<<"YES"<<endl;
				flag = 1;
			}

		}
	}
	if(flag){
		cout<<"Yes"<<endl;
	}
	else{ cout<<"No"<<endl;} 
}
	return 0;
}