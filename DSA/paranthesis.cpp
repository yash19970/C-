#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	int n;
	cin>>n;
	for(int k=0;k<n;k++){	
		cin>>s;
		stack <char> st;
		int len = s.length();
		int flag=0;
		for(int i=0;i<len;i++){
			if(s[i] == '(' || s[i] == '{' || s[i] == '['){
				st.push(s[i]);
			}else if(s[i] == ')'){
				if(!st.empty() && st.top() == '('){
					st.pop();
				}else{ flag =1;}
			}else if(s[i] == '}'){
				if( !st.empty() && st.top() == '{'){
					st.pop();
				}else{ flag =1;}
			}else if(s[i] == ']'){
				if( !st.empty() && st.top() == '['){
					st.pop();
				}else{ flag =1;}
			}
		}
		if(st.empty() && flag==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}