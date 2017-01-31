#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long int NoofInputs;
	cin>>NoofInputs;
	long double number[NoofInputs];
	for (int i = 1; i <= NoofInputs; ++i)
	{
		cin>>number[i];
	}
	for (int i = 1; i <= NoofInputs; ++i)
	{
		if(i%2==1)
		{
			long int k = (i/2)+1;
			cout.precision(2);
			cout<<fixed<<number[k]<<" ";

		}
		
		else
		{
			int k=(i/2);
			long double result =(number[k]+number[k+1])/2.00;
			cout.precision(2);
			cout<<fixed<<result<<" ";
		}
	}
	return 0;
}