#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,k;
	int c1=0,row=0,low,flag=0,lane=0;
	int m1,m2;
	vector<int> v;

	cin>>n>>m>>k;
	m1 = m*2;
	int val = m*2;
	low =1;
	for(int i=0; i<n;i++){
		if(k>=low && k<=m1){
			for(int j=low; j<=m1;j++){
				c1++;
				if(j==k && k%2 !=0){
					row = c1/2 + 1;
					lane = i+1;
					flag = 1; break; 
				}else if(j==k && k%2 ==0){
						lane = i+1;
						row = c1/2;
					    flag =1; break; 
					}
			}

		}else{
			low = m1+1;
			m1 = val + m1;
		}
		if(flag){
			break;
		}
	}
	if(k%2 ==0){
		cout<<lane<<" "<<row<<" "<<'R'<<endl;
	}else{
		cout<<lane<<" "<<row<<" "<<'L'<<endl;
	}
	return 0;
}