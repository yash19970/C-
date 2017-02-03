#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,z,n2=0,m2=0,count=0;
	cin>>n>>m>>z;
	for(int i=1;i<=z;i++){
		if(i%n == 0  && i%m == 0){
			count++;	
		}
	}
	cout<<count<<endl;
	return 0;
}