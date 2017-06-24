#include<bits/stdc++.h>
using namespace std;
int minIndex(vector<int>v, int x){
	int high = v.size()-1;
	int low = 0;
	int c=0;
	int flag =-1;
	while(low <= high){
		int mid = (high+low)/2;
		if(x == v[mid]){
			flag = mid; 
			high = mid-1;
		}else if(x <= v[mid]){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return flag;
}
int maxIndex(vector<int>v, int x){
	int high = v.size()-1;
	int low = 0;
	int c=0;
	int flag =-1;
	while(low <= high){
		int mid = (high+low)/2;
		if(x == v[mid]){
			flag = mid; 
			low = mid+1;			
		}else if(x < v[mid]){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return flag;
}
int main(int argc, char const *argv[])
{
	int n,x,high,low,mid,flag =-1;
	int l;
	vector<int> v;
	cin>>n>>x;
	for(int i=0; i<n; i++){
		cin>>l;
		v.push_back(l);
	}
	int min = minIndex(v,x);
	int max = maxIndex(v,x);
	cout<<min<<" "<<max<<endl;
	return 0;
}