#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long int n,l,flag=0;
	vector<long int> v;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	sort(v.begin(),v.end());
	for (int i = n-1; i>=2 ; i--)
	{
		if(v[i-1]+v[i-2] > v[i]){
			flag=1;
		}
	}

	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}