#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long int n,k,l,sum=0;
	int c1=0,c2=0;
	vector<long int> v;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>l;
		v.push_back(l);
		sum = sum + l;
	}
	int flag=0;
	for (int i = 0; i <n; ++i)
	{
		if(v[i] == 1 || v[i]%2 !=0){
			c1++;
			if(c1%2==0){
				c1=0;
			}
		}else if(v[i]%2==0 && v[i] !=0){
			c2 = v[i]%2;
		}else if(v[i] ==0 && c1 !=0){
			flag =1;
			break;
		}		
	}
	if(c1==0 && c2 ==0){
		if(flag){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}