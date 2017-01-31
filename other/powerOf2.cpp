#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
/*int main(int argc, char const *argv[])
{
	int t,n,flag=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int i=0;i<n;i++){
			if(pow(2,i) == n){
				flag =1;
				break;
			}
		}
		if(flag == 1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}*/
/* TLE above.*/
int main(int argc, char const *argv[])
{
	long long int t,n,flag=0,an,c=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		c=0;
		an = n;
		while(an != 1){
			if(an ==0){
				break;
			}
			if(an %2 == 0){
				c++;
			}
			an = an/2;
		}
		if(pow(2,c) == n){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}