#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
#include<stdlib.h>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{

	string a;
	getline(cin,a);
	for(int i=0;i<a.length(); i++){
		if(a[i].compare('s')){
			cout<<"s";
		}
	}


	return 0;
}