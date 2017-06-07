#include<bits/stdc++.h>
using namespace std;
bool myfunc (int i, int j) { return (i<j); }
int main(int argc, char const *argv[])
{
	int n,m,l,r,pos,c=0,t,fpos;
	vector<int> v;
	cin>>n>>m;
	v.push_back(0); 
	for(int i=1;i<=n;i++){
		cin>>t;
		v.push_back(t);
	}
	for(int j=0; j<m;j++){
		cin>>l>>r>>pos;
		c=0;
		for(int k=l; k<=r;k++){
			if(v[k]<v[pos]) c++;
		}
		fpos = l+c;
		if(v[fpos] == v[pos]){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}