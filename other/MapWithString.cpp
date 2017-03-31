#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	map<string,int> m;
	vector<string> s;
	s.push_back("aa");
	s.push_back("b");
	s.push_back("c");
	s.push_back("aa");
	s.push_back("b");
	s.push_back("a");

	for (int i = 0; i < s.size(); ++i)
	{
		m[s[i]] =0;
	}
	for (int i = 0; i < s.size(); ++i)
	{
		m[s[i]]++;
	}
	int max=-9999;
	for (int i = 0; i < s.size(); ++i)
	{
		if(m[s[i]] >max){
			max = m[s[i]];
		}

	}

	for (int i = 0; i < s.size(); ++i)
	{
		if(max == m[s[i]]){
			s.insert(s[i]);
		}
	}
	

	return 0;
}