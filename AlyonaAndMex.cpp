#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,ip;
	vector<int> a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ip;
		a.push_back(ip);
	}
	sort(a.begin(),a.end());
	int c = 1;
	for(int i=0;i<n;i++){
		if(a[i] >= c){
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}