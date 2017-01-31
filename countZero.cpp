/*Amazon*/
#include<iostream>
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int d,t,sum=0;
	long long int total=0,nonZero=0,remain=0;
	cin>>t;
	for (int i = 0; i <t; ++i)
	{
		cin>>d;
		for (int j = 1; j <= d; ++j)
		{
			total = 9*pow(10,j-1);	
			nonZero = pow(9,j);
			remain = total - nonZero;
			sum = sum + remain;
		}
		cout<<sum<<endl;
		sum =0;
	}
	return 0;
}