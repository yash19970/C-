// CONTEST #358 DIV 2 , A
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[100], b[100];
	int count = 0;
	int n,m;
	cin>>n>>m;
	for(int i =1 ;i<=n; i++){
		a[i] = i;
	}	
	for(int i =1 ;i<=m; i++){
		b[i] = i;
	}
	for(int j = 1 ;j<= n ;j++){
		for(int k = 1 ;k <= m ; k++){
				if( (a[j]+b[k]) % 5 == 0 ){
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}