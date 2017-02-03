#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,count=0,l,res;
	vector<int> v;
	int max;
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	
	max = *max_element(v.begin(),v.end());
	if(max >= k){
		res = max-k;
	}else{
		res =0;
	}
	cout<<res<<endl;
	return 0;
}