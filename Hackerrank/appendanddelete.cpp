#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string s,t;
	int l1=0,l2=0,k;
	int count1 =0 , count2=0;
	int sum=0;
	cin>>s>>t>>k;
	l1 = s.length();
	l2 = t.length();
	int len = l2-l1;
	if(l1 < l2){
		if(len%2 == 0 && k%2 == 0) {
			cout<<"Yes"<<endl;
		}else if(len%2 != 0 && k%2 != 0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		return 0;
	}
	for(int i=0;i<l1;i++){
		if(s[i] != t[i]){
			if(i == 0){
				if(l1 == l2 && k >= 2*l1){
					cout<<"Yes"<<endl; return 0;
				}else{
					cout<<"No"<<endl; return 0;
				}
			}
			count1 =  l1 - i;
			count2 = l2 - i;
			break;
		}
	}
	sum = count1 + count2;
	if(sum > k){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}
	return 0;
}