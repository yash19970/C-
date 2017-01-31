#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,l;
	vector <int > v;
	int max1 =0, max2 =0;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>n;
		for(int j=0; j<n;j++){
			cin>>l;
			v.push_back(l);
		}
		for(int k=0; k<n; k++){
			max2 += v[k];
			if(max2 <0)
				max2 =0;
			if(max1 < max2)
				max1 = max2;
		}
		if(max1 ==0)
			cout<<*max_element(v.begin(),v.end())<<endl;
		else
			cout<<max1<<endl;
		max1 =0;
		max2 =0;
		v.clear();
	} 
	return 0;
}