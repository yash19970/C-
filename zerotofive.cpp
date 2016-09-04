/*
Program to replace all zeors in number with 5. eg: 1005->1555
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,r,on,a[100];
	int in,c=0;
		cin>>n;
		on = n;
		/*counting length*/
		while(n!= 0){
			n = n/10;
			c++;
		}
		int length  = c-1;
		for(int i=length; i>=0;--i){ 
			r = on %10;
			a[i] = r;
			on = on/10;
			if(a[i] == 0){
				a[i] = 5;
			}
		}
		for(int i=0;i<=length;i++){
			cout<<a[i]<<;
		}
		cout<<endl;
	//}
	return 0;
}