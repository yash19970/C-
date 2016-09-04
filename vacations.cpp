/*
codeforces #div2  round 363 ques 1. 
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,r =0,a[1000];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i =1;i<=n;i++){
		if(a[i] == 0){
			r++;
		}
		else if(a[i] ==1){
			if(a[i+1] ==1){
				if(i%2 == 1){
					r++;
				}
			}
		}
		else if(a[i] == 2){
			if(a[i+1] == 2){
				if(i%2 == 1){
					r++;
				}
			}
		}
		else if(a[i] ==3){
			if( i ==1){
				break;
			}
			if(a[i-1] == 1 && a[i+1] == 2){
				if(i%n != 0){
					r++;
				}
			}	
			if((a[i+1] == 1 && a[i-1] == 2)){
				if(i%n != 0){				
					r++;
				}
			}
		}
	}
	cout<<r<<endl;
return 0;
 }