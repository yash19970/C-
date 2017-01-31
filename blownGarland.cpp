#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	int c1=0,c2=0,c3=0,c4=0;
	int count =0;
	int j; 
	cin>>s;
	int l = s.size();
	int m1,m2,m3,m4;
	for(int i=0; i<l;i++){
		j=i;
		j++;
		if(s[i] == 'R'){
			m1 = j%4;
		}else if(s[i] == 'B'){
			m2 = j%4;
		}else if(s[i] == 'Y'){
			m3 = j%4;

		}else if(s[i] == 'G'){
			m4 = j%4;
		}
	}
	for(int i=0; i<l; i++){
		if(s[i] == '!'){
			j = i;
			j++;
			if(j%4 == m1){
				c1++;
			}else if(j%4 ==m2){
				c2++;
			}else if(j%4 == m3){
				c3++;
			}else if(j%4 ==m4){
				c4++;
			}
		}
	}
	cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;

	return 0;
}
