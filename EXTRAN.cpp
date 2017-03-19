#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,t,flag=0,l;
	vector<long long int> v1;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		for (int k = 0; k < n; ++k)
		{
			cin>>l;
			v1.push_back(l);
		}
		sort(v1.begin(),v1.end());
		for (int j = 0; j < n-2; ++j)
		{
			if(v1[j]+1 != v1[j+1]){
				cout<<v1[j]<<endl;
				flag=1;
				break;
			}
		}
		if(flag !=1){
			cout<<v1[n-1]<<endl;
		}
		v1.clear(); flag =0;
	}
	return 0;
}