#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned long long int l1,r1,l2,r2,k;
	int c=0;
	cin>>l1>>r1>>l2>>r2>>k;
	if(l2 >= l1 && r2 >= r1){
		c = r1-l2;
		c++;
		if( l2 <=k && k<= r1){
			//cout<<"sd";
			c--;
		}
	}
	else if(l1>=l2 && l1<=r2 && r2<=r1){
		c = l1 - r2;
		c++;
		if( l1 <= k && k<= r2){
			c--;
		}
	}
	else if(l2 >= l1 && r2 <= r1){
		c  = l2- r2;
		c++;
		if( l2 <= k && k<= r2){
			c--;
		}
	}
	else if(l1 >= l2 && l1<=r1 && r1<=r2){
		c = r1 -l1;
		c++;
		if( l1<=k && k<= r1){
			c--;
		}
	}
	cout<<c<<endl;
	return 0;
}