#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,flag = 0,val;
	char a[1000][6];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=1;j<=5;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<=5;j++){

			if((j == 1 && a[i][j] == 'O' && a[i][j+1] == 'O')){
				a[i][1] = '+';
				a[i][2] = '+';
				flag = 1;
				break;
			}
			else if((j == 4 && a[i][j] == 'O' && a[i][j+1] == 'O')){
				a[i][4] = '+';
				a[i][5] = '+';
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			break;
		}
	}
	if(flag != 0){
		cout<<"YES"<<endl;
	for(int i =0;i<n;i++){
		for(int j=1;j<=5;j++){
				 	cout<<a[i][j]; 
			}
			cout<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}