#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n,m,l,l2,count=0;
	vector< int> a,b,c;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n>>m;
		for (int j = 0; j < n; ++j)
		{
			cin>>l;
			a.push_back(l);
			c.push_back(l);
		}
		for (int k = 0; k < m; ++k)
		{
			cin>>l2;
			b.push_back(l2);
			c.push_back(l2);
		}
		sort(c.begin(), c.end());
		for (int ii = 0; ii < c.size()-1; ++ii)
		{	
			if(c[ii] == c[ii+1]){
				count++;
			}
		}
		cout<<count<<endl;
		count =0;
		a.clear();
		b.clear();
		c.clear();
	}
	return 0;
}