#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	int len = 0,count=0;
	//Bulbbasaur
	int value[6];
	cin>>s;
	len = s.length();
	
	for(int j=0; j<7;j++){
		value[j] =0;
	}
	
	for(int i=0; i<len; i++){
		
		if(s[i] == 'B'){
			value[0] = value[0] + 1;

		}else if(s[i] == 'u'){
			value[1] = value[1] + 1;

		}else if(s[i] == 'l'){
			value[2] = value[2] + 1;

		}else if(s[i] == 'b'){
			value[3] = value[3] + 1;

		}else if(s[i] == 'a'){
			value[4] = value[4] + 1;

		}else if(s[i] == 's'){
			value[5] = value[5] + 1;

		}else if(s[i] == 'r'){
			value[6] = value[6] + 1;
		}
	}
	int min = 99999;
	for(int i=0;i<7;i++){
		if(value[i] < min){
			min = value[i];
		}
	}
	cout<<min<<endl;

	return 0;
}