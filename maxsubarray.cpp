/*
	program for checking max sub array with sum =0; gives the length of subarray
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,ch,maxl =0;
	int a[100],max2 =0;
		cin>>ch;
		for (int k = 0; k < ch; ++k)
		{
			/* code */
		
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			int currentSum = 0;
			for(int j=i;j<n;j++){

				currentSum += a[j];
				if(currentSum > max2){ // == 0
					max2 = currentSum; /// maxl = max(maxl,j-i+1)
				}
			}
		}
		 cout<<max2<<endl;	

	}
}