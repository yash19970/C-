#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int c1=0,n,d,l,count=0,sum,sum2;
	vector<int> vec;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>l;
		vec.push_back(l);
	}
	int len=0;
	len = vec.size();
	for(int j=0; j<vec.size();j++){
		sum = vec[j] + d;
		sum2 = vec[j] + 2*d;
		if(find(vec.begin(),vec.end(),sum) != vec.end() && find(vec.begin(),vec.end(),sum2) != vec.end() ){
			c1++;
			cout<<vec.end();
		}
	}
	cout<<c1<<endl;
	return 0;
}