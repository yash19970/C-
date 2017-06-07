#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	string s[n];
	for(int i=0; i<n;i++){
		cin>>s[i];
	}
	int pos,sum[n];
	for(int i=n-1; i>=0;--i){
		pos=0;
		for(int j=0;j<s[i].length()-1;j++){
				if(s[i][j] == '1'){
					pos = j;
				}
		}
		sum[i] = pos;
	}
	for(int i=0;i<n;i++){
		
	}

	return 0;
}