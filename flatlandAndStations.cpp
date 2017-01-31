#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	long int n,m,u,count=0,val;
	vector<long int> vec,station,final;
	cin>>n>>m;
	for(int i=0; i<m;i++){
		cin>>u;
		station.push_back(u);
	}	
	for(int i=0;i<n;i++){
		vec.push_back(i);
	}

	long long int min=999999999;
	for(int i=0;i<vec.size();i++){
		for(int k=0;k<station.size();k++){
			 val = abs(vec[i]-station[k]);
			 if(val < min){
			 	min = val;
			 }
		}
     	final.push_back(min);
     	min = 999999999;
	}	
	long int last;
	last = *max_element(final.begin(), final.end());
	cout<<last<<endl;
	return 0;
}