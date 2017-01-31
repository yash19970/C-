#include<iostream>
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,count=0,len=0,sum=0;
	int ss=0,h;
	string s;
	cin>>t;
	for(int i=0; i<t;i++){
		cin>>s;
		len = s.length();
		h = pow(2,len-1);

		for(int j=0; j<len;j++){
			if(s[j] == '1'){
				ss = 1*h;
				h = h/2;
				sum = sum +ss; 
			}else{
				h = h/2;
				sum = sum + 0;	
			}
		}
		cout<<sum<<endl;
		sum =0;
	}
	return 0;
}