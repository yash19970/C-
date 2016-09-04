#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
	int n,d;
	cin>>n>>d;
	string a1("1");
	int count = 0;
	int sum[1000];
	string a[1000];
	for(int i=0;i<d;i++){
		//cin>>a[i];
		getline(cin,a[i]);
		for(int j=0;j<n;j++){

			if(a[j].compare("1") == 0){
				count++;
			}
		}
		sum[i] = count;
		cout<<sum[i]<<endl;

	}
	int kill = 0;



for(int i=0;i<d;i++){
	if(sum[i] == 0){
		kill++;
	}
	else if(sum[i] == sum[i+1]){
		kill++;
	}

}
	
//cout<<kill<<endl;


	return 0;
}