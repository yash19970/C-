#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,l,count=0,max=-1;
	int a,b,c;
	vector<int> v,v1;
	cin>>n;
	v.push_back(0);
	for (int i = 1; i <= n; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	int maxele = *max_element(v.begin(),v.end());
	for (int i = 1; i <= n; ++i)
	{
		if(v[i] != maxele){
			count++;
		}
	}





	return 0;
}