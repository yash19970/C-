/*codeforces round #368 B. Bakery*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,k,a[100],check[100],flour[100],city[100];
	int u[100],v[100],l[100];
	cin>>n>>m>>k;
	for(int i =0; i<m;i++){
		cin>>u[i]>>v[i]>>l[i];
		//city[i] = m;
	}
	if(k > 0){
		for(int i=0;i<k;i++){
			cin>>flour[i];
		}
	}

	return 0;
}