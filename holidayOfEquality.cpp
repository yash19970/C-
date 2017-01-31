#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	long int n,count=0,max,diff,sum=0;
	vector<int long > vec;
	cin>>n;
	int l;
	for(int i=0;i<n;i++){
		cin>>l;
		vec.push_back(l);
	}
	max = *max_element(vec.begin(), vec.end());
	for(int j=0; j<n;j++){
		if(vec[j] < max){
			diff = max - vec[j];
			vec[j] = vec[j] + diff;
			sum = sum + diff;
		}
	}
	cout<<sum<<endl;
	return 0;
}