/* Cards, #364 dv 2
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a[1000];
	int x = 0,y;
	cin>>n;
	int check[1000];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x = a[i] +x;
		check[i] =0;
	}	
	 y = (2*x)/n; 
	 for(int i=1;i<=n;i++){
	 	for(int j=1;j<=n;j++){
	 		if(a[i]+a[j] == y && i!=j && check[i]==0 && check[j] ==0){
	 			cout<<i<<" "<<j<<endl;
	 			check[i] =1;
	 			check[j] =1;
	 		}
	 	}
	 }

	return 0;
}