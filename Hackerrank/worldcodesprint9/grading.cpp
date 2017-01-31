#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,l,curr,next,val;
	vector <int> v,vv;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	for (int j = 0; j < n; ++j)
	{
		if(v[j] <38){
			vv.push_back(v[j]);
			
		}
		curr = v[j]/5;
		next = curr + 1;
		val = next*5 - v[j];
		if(val <3 && v[j] >=38){
			v[j] = v[j] + val;
			vv.push_back(v[j]);
		}else if(val >=3 && v[j]>=38){
			vv.push_back(v[j]);
		}	
	}
	for(int k=0; k<vv.size();k++){
		cout<<vv[k]<<endl;
	}
	return 0;
}