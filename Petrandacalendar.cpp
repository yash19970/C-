#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int m,d,count=0;
	int wd = 7,mon =0;

	cin>>m>>d;
	if(m == 1 || m==3 || m==5|| m==7|| m==8|| m==10|| m==12){
		if(d>5){
			cout<<6<<endl;
		}else{
			cout<<5<<endl;
		}
	}
	if(m==2){
		if(d==1){
			cout<<4<<endl;
		}else{
			cout<<5<<endl;
		}
	}
	if(m == 4 || m==6 || m==9|| m==11){
		if(d<=6){
			cout<<5<<endl;
		}else{
			cout<<6<<endl;
		}
	}
	return 0;
}