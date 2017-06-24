#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int start,int end){
	int pIndex = start;
	int pivot = a[end];
	for (int i = start; i <=end; ++i){
		if(a[i] <= a[pivot]){
			int t = a[i];
			a[i] = a[pIndex];
			a[pIndex]  = t;
		}
	}
	return pIndex;
}
void qsort(int a[], int start, int end){

	if(start < end){
		int pIndex = partition(a,start,end);
		qsort(a,start,pIndex-1);
		qsort(a,pIndex+1,end);
	}	
}
int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i){
			cin>>a[i];
	}	
	int start = 0;
	int end = n-1;
	qsort(a,start,end);
	for (int i = 0; i < n; ++i){
			cout<<a[i]<<" ";
	}
	return 0;
}