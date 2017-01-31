#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	for(int i=0;i<3;i++){
		cout<<"iteration : "<<i<<endl;
		for(int j=0;j<6;j++){
			if(j==3){
				break;
			}
			cout<<j<<endl;
			
		}
	}
	return 0;
}