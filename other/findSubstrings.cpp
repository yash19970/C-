#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	int c=0;
	cin>>s;
	set<char>s1;
	for (int i = 0; i <s.length() ; ++i) s1.insert(s[i]);

	for (int i = 0; i <(1<<s1.size()) ; ++i)
	{
		for (int k = 0; k <s1.size(); ++k)
		{
			cout<<i<<" "<<1<<k;
		//	if(i & (1<<k)) cout<<s[k]<<" ";
		}cout<<endl;
	}
	return 0;
}