#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long int l,start,end,temp;
	long int n,count=0;
	vector<long int> v;
	cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	start = 0;
	end = n-1;

	for (int h = 0; h <n; ++h)
	{
		swap(v[start],v[end]);
		start = start +2;
		end = end - 2;
		if( start >= end ){
			break;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<v[i]<<" ";
	}cout<<endl;
	return 0;
}