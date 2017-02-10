#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,c=0,l,min=9999999999;
	vector <long long int> v;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < n-1; ++i)
	{
		if(abs(v[i]-v[i+1]) < min){
			min = abs(v[i] - v[i+1]);
		}
	}
	cout<<min<<endl;
	return 0;
}