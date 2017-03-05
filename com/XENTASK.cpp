#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,c,l,t;
	vector<long long int> s1,s2;
	s1.push_back(0); s2.push_back(0);
	cin>>t;
	for(int j=0; j<t;j++){
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>l;
			s1.push_back(l);
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>l;
			s2.push_back(l);
		}
		long long int sum=0,sum2=0;
		for (int i = 1; i <= n; ++i)
		{	
			if(i%2 ==0){
				sum = sum + s1[i];
				sum2 = sum2 + s2[i];
			}else{
				sum = sum + s2[i];
				sum2 = sum2 + s1[i];
			}
		}
		int s = min(sum,sum2);
		cout<<s<<endl;
		s1.clear(); s2.clear();
		s1.push_back(0); s2.push_back(0);
	}	
	return 0;
}