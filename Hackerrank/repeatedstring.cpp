#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	long long int n,c2=0,c1=0,l=0,m=0,m1=0;
	cin>>s>>n;
	l = s.length();
	for(int j=0;j<l;j++){
			if(s[j] == 'a'){
				c1++;
			}
		} 
	m1 = n/l;
	c2 = m1*c1;		
	m = n%l;
	if(n<l && m !=0){
		for(int i=0;i<n;i++){
			if(s[i] == 'a'){c2++;}
		}
	}else if(n>l && m!=0){
		for(int i=0;i<m;i++){
			if(s[i] == 'a'){
				c2++;
			}
		}
	}
	cout<<c2<<endl;
	return 0;
}
