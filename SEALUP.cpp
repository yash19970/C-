#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,m,l,l2,count=0;
	vector< pair <int,int> > v1,v2;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		for (int j = 0; j <n; ++j)
		{
			cin>>l1>>l2;
			v1.push_back(make_pair(l1,l2));
		}
		cin>>m;
		for (int j = 0; j <m; ++j)
		{
			cin>>l1>>l2;
			v2.push_back(make_pair(l1,l2));
		}
		

	}
	return 0;
}