/*jumpingonclouds easy,hackerrank*/
#include<vector>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> a;
	int k,e=100,n,inp;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>inp; 
		a.push_back(inp);
	} 
	for(int i=0;i<n;i++){
		if((i%k)==0 && i!=0){
			if(a[i]==1){
				e = e-3;
			}else{
				e--;
			}
		}
	}
	if(a[0]==0){
		e--;
	}else{
		e = e-3;
	}
	cout<<e<<endl;
	return 0;
}