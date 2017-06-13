#include<bits/stdc++.h>
using namespace std;

void merge(int left[], int nl ,int right[],int nr ,int v[] ){
	int i=0,j=0,k=0;
	while(i< nl && j< nr){
		if(left[i] <= right[j]){
			v[k] = left[i]; 
			i++; k++;
		}else if(left[i] > right[j]){
			v[k] = right[j]; 
			j++; k++;
		}
	}

	while( i < nl){
		v[k] = left[i];
		i++; k++;
	}
	while( j < nr){
		v[k] = right[j];
		j++; k++;
	}
}
void mergesort(int v[], int n){
	if(n < 2) return ;

	int mid = n/2;
	int l[mid],r[n-mid];
	for(int i=0; i<mid;i++){
		l[i] = v[i];
	}
	for(int j=mid; j<n;j++){
		r[j-mid] = v[j];
	}

	mergesort(l,mid);
	mergesort(r,n-mid);
	merge(l,mid,r,n-mid,v);
}
int main(int argc, char const *argv[])
{
	int n,l,t;
	cin>>n;
	int v[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	mergesort(v,n);
	for (int j = 0; j < n; ++j)
	{
		cout<<v[j]<<" ";
	}
	return 0;
}