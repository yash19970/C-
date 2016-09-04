/*codeforces div2 round 368 */
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,x[10000],q,m[10000],c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>m[i];
	}
	for(int i=0;i<q;i++){
		c =0;
		for(int j=0;j<n;j++){
			if(m[i] >= x[j]){
				c++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}