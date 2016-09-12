#include<iostream>
#include<cstring>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100000
using namespace std;
int main(int argc, char const *argv[])
{
	char s[MAX];
	int n = 0,x=0,y=0;
	cin>>s;
	n = strlen(s);
	if(n%2 !=0){
		cout<<-1<<endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		if(s[i] =='R'){
			x++;
		}
		else if(s[i] == 'U'){
			y++;
		}
		else if(s[i] == 'D'){
			y--;
		}
		else if(s[i] == 'L'){
			x--;
		}
	}
	cout<<(abs(x)+abs(y))/2<<endl;
	return 0; 
}
