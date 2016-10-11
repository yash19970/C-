	#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	long int n,k,c2=0,c1=0,m;
	vector<long int> a;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>m;
		a.push_back(m);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((a[i]+a[j])%3 ==0){
				c2++;
				
			}else{
				c1++;
			}
		}
	}
	cout<<c<<endl;
	return 0;	
}