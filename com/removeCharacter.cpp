#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<char> v3;
	string s1,s2;
	int t,count;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>s1>>s2;
		for (int j = 0; j < s1.size(); ++j)
		{
			if(find(s2.begin(), s2.end(), s1[j]) == s2.end()){
				v3.push_back(s1[j]);
			}
		}
		for (int ii = 0; ii < v3.size() ; ++ii)
		{
			cout<<v3[ii];
		}
		cout<<endl;
		v3.clear(); 
	}
	return 0;
}