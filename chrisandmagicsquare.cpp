#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,rowsum =0,colsum =0,diagonal1sum =0,diagonal2sum=0,x,y,diagonal1=0,diagonal2=0;
	long long int val;
	cin>>n;
	int a[n][n],rsum[n],csum[n];
	for(int i=0;i<n;i++){
		rsum[i] =0;
		csum[i] =0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j] == 0){
				x = i; y =j;
			}
			else{
				rsum[i] += a[i][j];
				csum[j] += a[i][j];
				if(i == j){
					diagonal1 += a[i][j];
				}
				if( i+j == n-1){
					diagonal2 += a[i][j];
				}
			}
		}
	}
	long long int commonsum;
	commonsum = rsum[0];
	if(x==0){
		commonsum = rsum[1];
	}
	for(int i=0;i<n;i++){
		if( i != x){
			if( rsum[i] != commonsum){
				cout<<-1<<endl;
				return 0;
			}
			
		}
		else{
				rowsum = rsum[i]; /*this is the sum of the key row.*/
			}
	}
	for(int j=0;j<n;j++){
		if( j != y){
			if( csum[j] != commonsum){
				cout<<-1<<endl;
				return 0;
			}
		}
		else{
				colsum = csum[j]; /* this is the sum for keycol.*/
			}
	} // for diagonals.
	int f1=0,f2 =0;
	if(x==y){
		f1 =1;
	}
	else if(x+y == n-1){
		f2 =1;
	}
	/* checking whether the element is not a diagonals, then checking the sum.*/
	if(!f1){
		if(diagonal1 != commonsum){
			cout<<-1<<endl; return 0; // if the element is not on diagonal, then check whether it's sum is == to commonsum, if not then -1.
		}
	}
	else{
			diagonal1sum = diagonal1; // if the element is on diagonal, then calc it's new sum.
		}
	
	if(!f2){
		if(diagonal2 != commonsum){
			cout<<-1<<endl; return 0;
		}
		
	} 
	else{
			diagonal2sum = diagonal2;
		}
	// checking whether rowsum and colsum except the key row/col is equal or not. 
	if(rowsum == colsum){
		if(f1 && diagonal1sum != rowsum){
			cout<<-1<<endl; return 0;
		}
		if(f2 && diagonal2sum != rowsum){
			cout<<-1<<endl; return 0;
		}
		val = commonsum - rowsum;
		if(val>0){
			cout<<val<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}