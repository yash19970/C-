#include<bits/stdc++.h>
using namespace std;
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

	high = v.size()-1;
	low = 0;
	while(low <= high){
		int mid = (high+low)/2;
		if(x == v[mid]){
			flag = mid; 
			//low = mid+1;	// for max inddex
			high = mid-1;	// for smallest index
			//break;
		}else if(x <= v[mid]){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	cout<<flag<<endl;
	return 0;
}