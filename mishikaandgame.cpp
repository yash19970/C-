/*codeforces, round #365 MishikaAndGame*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,n;
	int m=0,c=0,same=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>b){
			m++;
		}
		else if(a<b){
			c++;
		}
		else{
			same++;
		}
	}
	if(m>c){
		cout<<"Mishka"<<endl;
	}
	else if(m<c){
		cout<<"Chris"<<endl;
	}
	else{
		cout<<"Friendship is magic!^^"<<endl;
	}
	return 0;
}

