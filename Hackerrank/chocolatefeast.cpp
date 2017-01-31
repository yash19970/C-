/*hackerrank chocolatefeast, Easy*/
#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> a;
	int m,n,c,count,wrap,k;
	cin>>k;
	for(int i=0;i<k;i++)
	{cin>>n>>c>>m;
		count =0;
		wrap = n/c;
		count = wrap;
		while(wrap>1){
			if(wrap>=m){
				wrap = wrap-m;
				count++;
				wrap++;
			}else{
				break;
			}		
		}
		cout<<count<<endl;}
	return 0;
}