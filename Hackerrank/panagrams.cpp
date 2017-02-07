#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,l1,len;
	string s1;
	set<char> s;
	set<char>::iterator it;

	getline(cin,s1);
	std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	len = s1.size();
	for (int i = 0; i < len; ++i)
	{
		if(s1[i] != ' '){
			s.insert(s1[i]);
		}
	}
	if(s.size() == 26){
		cout<<"pangram"<<endl;
	}else{
		cout<<"not pangram"<<endl;
	}
	return 0;
}