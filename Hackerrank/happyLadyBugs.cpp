#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//int flag =0;
int myfunc(string, std::vector<char>);
int main(int argc, char const *argv[])
{
	int g,n,c=0,flag;
	char l;
	cin>>g;
	string ss;
	vector <char> s;
	for(int i=0;i<g;i++){
		cin>>n;
		cin>>ss;
		for(int k=0; k< ss.length(); k++){
			s.push_back(ss[k]);
			if(ss[k] == '_'){
				c =1;
			}
		}
		if(c){
			sort(s.begin(),s.end());
			flag = myfunc(ss,s);
		}else{
			flag = myfunc(ss,s);
		}
		if(flag == 0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		flag = 0;
		c=0;
		s.clear();
	}
	return 0;
}
int myfunc(string ss,vector <char>s){
	int flag;
for(int k=0; k< s.size(); k++){
			if(k==0 && s[k] == s[k+1]){
				flag =0;
			}
			else if(s[k] == s[k+1] || s[k] == s[k-1] && s[k] != '_'){
				flag =0;
			}else if (s[k] == '_'){
				flag =0;
			}else{
				flag = 1;
				break;
			}
		}
		s.clear();
	return flag;
}