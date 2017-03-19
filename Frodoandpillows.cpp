#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector< long long int>v;
	long long int n,m,k,c1=0,c2=0;
	cin>>n>>m>>k;
	if(k !=1 || k!=n){
		c1 = m/n; c2 = m%n;
		if(c2>=2){
			c1 = c1+2;
		}else{
			c1++;
		}
	}else{
		
	}
	return 0;
}