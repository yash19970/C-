#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	string vec;
	int t,n;
	cin>>vec;
	if(next_permutation(vec.begin(),vec.end())){
		cout<<vec<<endl;
	}
	//cout<<vec[0];
	return 0;
}