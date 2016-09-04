#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
/*codeforces round368 div2.*/
int main(int argc, char const *argv[])
{
	int a,b,n,x,y,sum;
	long double dist,min = 999999.0,time,v;
	cin>>a>>b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y>>v;
		sum = pow(x-a,2) + pow(y-b,2);
		dist = sqrt(sum)*1.0; 
		time = (dist/v);
		//cout<<time<<endl;
		if( time <= min){
			min = time;
		}
	}
	cout.precision(10);
	cout<<fixed<<min<<endl;
	return 0;
}