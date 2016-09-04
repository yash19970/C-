#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long int n,m,a[100],b[100],check[100][100];
	int x,y,sum =0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				check[i][j] =1;
			}
		}
	int c=0;
	for(int i=1;i<=m;i++){ sum=0;
		cin>>x>>y;
		a[i] =x;
		b[i] =y;
		//check[x][y] =;
		for(int i=x+1;i<=n;i++){
			check[i][y] =0;
			cout<<i<<" "<<y<<endl;
		}
		for(int i=x;i>1;--i){
			check[i][y] =0;
			cout<<i<<" "<<y<<endl;
		}

		for(int j=y+1;j<=n;j++){	
			check[x][j] =0;
		}
		for(int j=y;j>1;--j){	
			check[x][j] =0;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(check[i][j] ==0){
					c++;
					
				}
			}
		}
		//cout<<c<<endl;
		/*for(int j=1;j<=n;j++){
			if(check[j][y] == 0){
				sum += 1;
				check[j][y] =1;
			}
		}
		for(int j=1;j<=n;j++){
			if(check[x][j] == 0){
				sum += 1;
				check[x][j] =1;
			}
		}
	cout<<sum<<endl;
	}*/
}

	return 0;
}