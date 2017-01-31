#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{	vector<int> a;
	int n,c1=0,c2=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c2;
		a.push_back(c2);
	}
	for(int i=0;i<n;i++){
		if(a[i]==0 && a[i+2]==0 && i+2<n){
			c1++; i = i+1;
		}else if(a[i]==0 && a[i+1]==0 && i+1<n){
			c1++;
		}
	}
	cout<<c1<<endl;
	return 0;
}