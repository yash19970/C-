#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v;
	int l,m,flag=0;
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		cin>>l;
		v.push_back(l);
	}
	sort(v.begin(),v.end());
	for(int j=0; j<v.size()-1;j++){
		if(v[j] == v[j+1]){
			flag =1;
			break;
		}
	}
	if(flag){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
	return 0;
}