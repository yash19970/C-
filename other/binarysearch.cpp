#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,l;
	vector<int>v;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	sort(v.begin(),v.end());

	int first = 0;
	int last = v.size()-1;
	int mid = (first+last )/ 2;
	int x = 2;
	while(first<= last){
		if(v[mid] < x){
			first = mid+1;
		}else if(v[mid] == x){
			cout<<"found"; break;
		}else{
			last= mid-1;
		}
		mid = (first+last) /2;
	}
	return 0;
}