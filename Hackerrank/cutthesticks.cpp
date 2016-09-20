#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> a;
	int n,k,c=0,size=0,u=0,s1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		a.push_back(k);
	}
	size = a.size();
	while(size >0){
		cout<<size<<endl;
		s1 =0;
		sort(a.begin(),a.end());
		int min = 9999;	
		for(int l=0;l<a.size();l++){
			if(a[l] < min){
				min = a[l];
			}
		}	
		for(int j=0;j<a.size();j++){
			a[j] = a[j]-min;
			if(a[j]>0){
				c++;
			}
			if(a[j] == 0){
				s1++;
				a[j] = 999999999;
			} 
		} 
		size = size-s1;
	}
	return 0;
}