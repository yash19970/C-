	#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,l,sum,flag=0;
	vector<int> v;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		for (int k = 0; k < n; ++k)
		{
			cin>>l;
			v.push_back(l);
		}
		sort(v.begin(), v.end());
		for (int h = 0; h < n; ++h)
		{
			for (int m = h+1; m < n; ++m)
			{
				cout<<v[h]<<" "<<v[m]<<endl;
				sum = sqrt(pow(v[h],2) + pow(v[m],2));
				cout<<sum<<endl;
				if(find(v.begin(),v.end(),sum) !=v.end()){
					cout<<"Yes"<<endl;
					flag =1;
					break;
				}
			}
			if(flag){
				flag =0;
				break;
			}
		}
		flag =0;
		v.clear();
		
	}
	return 0;
}