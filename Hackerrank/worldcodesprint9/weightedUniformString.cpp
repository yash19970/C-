#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,count,l;
	vector <int> v,vv;
	int value,value2 = -1;
	string s;
	cin>>s>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	for (int j = 0; j < s.size(); ++j)
	{
		value = s[j]%96;
		if(j == 0){
			value2 = value;
			vv.push_back(value);
		}
		else if(s[j] != s[j-1] && j > 0){
			value2 = value;
			vv.push_back(value2);

		}else if(s[j] == s[j-1]){
			value2 = value2 + value;
			vv.push_back(value2);
		}
	}
	
	for (int i = 0; i < v.size(); ++i)
	{
		if(find(vv.begin(), vv.end(),v[i]) != vv.end()){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}