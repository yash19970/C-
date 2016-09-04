#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int flag = 0;
	int before[100], after[100];
	string name[100];	
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>name[i]>>before[i]>>after[i];
	}
	for(int i=0; i<n ;i++){
		if( before[i] >= 2400 && after[i] > before[i]){
			flag = 1;
		}
	} 
	if(flag == 1){
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
/*
>2400 RED
2200-<2400 ORANGE*/