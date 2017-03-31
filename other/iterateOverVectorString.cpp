#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<string> features;
	features.push_back("abaaab");
	features.push_back("abc");
	features.push_back("abab");
	features.push_back("aab");
	vector<string> str;
	string l;
	int c=0;
	for (int i = 0; i < features.size(); ++i)
	{	
		for (int j = 0; j < features[i].length(); ++j)
		{
			l = features[i][j];
			str.push_back(l);
		}
		c=0;
		for (int k = 0; k <str.size()-1 ; ++k)
		{
			if(str[k] == str[k+1]){
				c++;
			}
		}
		str.clear();
		cout<<c<<endl;		
	}
	return 0;
}