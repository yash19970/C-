/*codeforces, round #365	 MishikaAndTrip*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,sum=0;
	int c[1000];
	int d[1000]; // index
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	for(int i=1;i<=k;i++){
		cin>>d[i];
	}
	for(int i=1;i<=n;i++){
		sum  = c[i]*c[i+1] + sum;
	if(i == (n)){
		sum = sum+ c[1]*c[n];
		}
	}
	/*caps*/
	for(int i=0;i<n;i++){

	}
	cout<<sum;

	return 0;
}


