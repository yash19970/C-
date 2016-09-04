/*
LOGIC: 

I have checked for the values at index of m, that is m[a-i] and m[a+i], if both are 1, it means he can pull out both the 
criminals from city, but when distance is  == 0, at that time also criminal value increases two times, so I've done: flag =1;
now we will check the flag value, if its 1, then we will decreament the criminal by 1. 
alsa a max variable is created which is for remaining indexes(cities) which are not covered by the previous for loop,
if the index value is one, then increament the criminal and print the final result. 

*/
#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a,ip;
	int criminal = 0;
	int dist[1000];
	vector<int> m;
	cin>>n>>a;
	for(int i=1; i<=n; i++){
		cin>>ip;
		m.push_back(ip);
	}
	int max = 0;
	int flag = 0;

	for(int i=0 ;i<a; i++){

		if((m[a-i] == 1) && (m[a+i] == 1)){  /* here it should not enter when i =1, but it is going inside the for loop*/
			criminal  = criminal + 2; 
			flag = 1; 
		}
		if(a+i > max) {
				max = a+i;
			}
	} /* because for dist == 0 it will calc criminal twice, so decreamenting it for one time. */
	if(flag == 1){
		criminal--;	
	}
	for(int i = max+1; i <= n;i++){
		if(m[i] == 1){
			criminal++;
		}
	}
	cout<<criminal<<endl;
	
	return 0;
}
