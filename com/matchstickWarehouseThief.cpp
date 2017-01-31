#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n;
	long long int c,l1,l2,sum=0;
	vector < pair<long long int, long long int> > v;
	cin>>n>>c;
	for (int i = 0; i < c; ++i)
	{
		cin>>l1>>l2;
		v.push_back(make_pair(l2,l1));
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < c; ++i)
	{
		if(n >= v[i].second){
			sum = sum +v[i].first*v[i].second;
			n = n - v[i].second;
		}else if( n < v[i].second){
			sum = sum + n*v[i].first;
			n = n - v[i].second;
		}
		if(n<0){
			break;
		}
	}
	cout<<sum<<endl;
	return 0;
}