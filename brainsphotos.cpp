#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,c=0;
	cin>>n>>m;
	char a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){	
		for(int j=0;j<m;j++){
			if(a[i][j] == 'B' || a[i][j] == 'G' || a[i][j] == 'W'){
				c++;
			}
		}
	}
	int d = n*m;
	if(d == c){
		cout<<"#Black&White"<<endl;
	}
	else
	{
		cout<<"#Color"<<endl;
	}
	return 0;
}