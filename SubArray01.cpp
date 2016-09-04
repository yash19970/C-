/*
prog for finding the largest array with same 0,1
*/

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,maxl =0, ch;
	int a[100];
	while(1){
		cin>>ch;
		if(ch ==-1){
			break;
		}
		/*press 1 to continue everytime.*/
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<n;i++){
			int one = 0, zero = 0;
			for(int j=i; j<n;j++){
				if(a[j] == 0){
					zero++;
				}
				if(a[j] == 1){
					one++;
				}
				if(one == zero){
					maxl = max(maxl,j-i+1);
				}
			}
		}
		cout<<maxl<<endl;
	}
	return 0;
}
