#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<string> s1;
	vector<string> s2;
	set<string> final;
	int t;
	cin>>t;
	string l;
	int diff =0;
	for (int i = 0; i < t; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cin>>l;
			s1.push_back(l);
			final.insert(l);
		}
		for (int k = 0; k < 4; ++k)
		{
			cin>>l;
			s2.push_back(l);
			final.insert(l);
		}
		int len =final.size();
		diff = 8- len;
		if(diff >=2 ){
			cout<<"similar"<<endl;
		}else{
			cout<<"dissimilar"<<endl;
		}
		s1.clear(); s2.clear(); final.clear(); diff =0;
	}
	return 0;
}