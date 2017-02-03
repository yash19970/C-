#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,l1,l2;
	pair<int,int> a;
	vector< pair<int,int> > v;
	cin>>t;
	for (int i = 0; i < t; ++i)
	 {
	 	cin>>n;
	 	for (int j = 0; j < n; ++j)
	 	{
	 		cin>>a.first;
	 		cin>>a.second; 
	 		v.push_back(a);
	 	}
	 } 
	return 0;
}