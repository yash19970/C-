/*geeksforgeeks possible groups*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a[100],c=0,c2=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j =i+1; j<n;j++){
			if((a[i] + a[j])%3 == 0 && (i != n-1)){
				cout<<a[i]<<a[j]<<endl;
				c++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j =i;j<n;j++){
			if((a[i] +a[j+1] + a[j+2]) %3 ==0 && (j+1<n) && (j+2<n)){
				cout<<a[i]<<a[j+1]<<a[j+2]<<endl;
				c2++;
			}
		}
	}
	int total =0;
	total = c2+ c;
	//cout<<total<<endl;
	return 0;
}

