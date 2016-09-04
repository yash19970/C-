#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long int n=0; // initially x;
	long long int x = 0;
	long long int count = 0;
	long long int d = 0;
	char ch;
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>ch>>d;
		if(ch == '+'){
			x = x + d;
		}
		if(ch == '-'){
			if( d > x){
				count++;
			}
			else if(d == x){
				x = x - d; 
			}
			if(d < x){
				x = x- d;
			}
		}
	}
	cout<<x<<" "<<count<<endl;
	return 0;
}