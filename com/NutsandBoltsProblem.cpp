#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,c,l1,l2;
	vector<int> v1,v2;
	map<int,int> m;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		for (int j = 0; j < n; ++j)
		{
			cin>>l1;
			v1.push_back(l1);
		}
		for (int j = 0; j < n; ++j)
		{
			cin>>l1;
			v2.push_back(l1);
		}
		
	}
	return 0;
}