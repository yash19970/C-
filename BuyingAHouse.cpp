#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v;
	int n,m,l,k,diff=0,min=99999;
	cin>>n>>m>>k;
	v.push_back(0);
	for (int i = 1; i <=n ; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	for (int j = 1; j <=v.size() ; ++j)
	{
		if(v[j]<=k && j!=m && v[j]!=0){
			diff = abs(j-m);
			if(diff<min){
				min=diff;	
			}
		}
	}
	min = min*10;
	cout<<min<<endl;
	return 0;
}