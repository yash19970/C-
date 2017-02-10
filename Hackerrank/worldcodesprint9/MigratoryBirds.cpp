/*MAPS used*/
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,count=1,max=-1,l,val;
	vector<int> v;
	map <int, int> m;
	map<int,int>::iterator i;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	for (int i = 0; i < n; ++i)
	{
		m[v[i]] =0;
	}
	for (int i = 0; i < n; ++i)
	{
		m[v[i]]++;
	}
	for (i = m.begin(); i !=m.end() ; ++i)
	{
		 if(i->second > max){
		 	max = i->second;
		 	val = i->first;
		 }
	}
	cout<<val<<endl;
	return 0;
}