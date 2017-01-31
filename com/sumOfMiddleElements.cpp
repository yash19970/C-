#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,len,m1,m2,sum=0,l;
	vector<int> v1,v3,v2;
	int i,j,count=0;
	cin>>t;
	for (int ii = 0; ii < t; ++ii)
	{
		cin>>n;
		for (int jj = 0; jj < n; ++jj)
		{
			cin>>l;
			v1.push_back(l);
		}
		for (int jj = 0; jj < n; ++jj)
		{
			cin>>l;
			v2.push_back(l);
		}
		i=0;
		j=0;
		while(count != 2*n){
			if(v1[i] == v2[j]){
				v3.push_back(v1[i]);
				v3.push_back(v2[j]);
				i++; j++; count = count+2;
			}
			else if(v1[i] < v2[j]){
				v3.push_back(v1[i]);
				i++;
				count++;
			}else if(v1[i] > v2[j] ){
				v3.push_back(v2[j]);
				count++; j++;
			}
			if(count == 2*n){
				break;
			}
		}
		len = v3.size();
		if(len%2 == 0){
			m1 = (len/2) -1;
			m2 = m1+1;

			sum = v3[m1] + v3[m2];
		}else{
			m1 = len/2;
			sum = v3[m1];
		}
		cout<<sum<<endl;
		sum =0; m1 =0; m2 =0; len=0; count =0;
		v1.clear(); v2.clear(); v3.clear();

	}
	return 0;
}