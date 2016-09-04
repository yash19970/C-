/*GeeksforGeeks Equal to Product*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int ch;
	int N,p,flag,t;
	int a[1000];
	while(-1){
		cin>>ch;
		if(ch == -1){
			return 0;
		}
		cin>>t;
		for(int i=0;i<t;i++){
			cin>>N>>p;
			for(int i=0;i<N;i++){
				cin>>a[i];
			}
			for(int i = 0 ;i<N;i++){
				for(int j = 0; j<N; j++){
					if(a[i]*a[j] == p){
						cout<<"YES"<<endl;
						 flag = 1;
						 break;
					}
				}
			}
			if(flag == 0){
				cout<<"NO"<<endl;
			}

		}

	}
	return 0;
}