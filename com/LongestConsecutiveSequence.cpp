#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,l,l2,t,count,max=0,max2=0;
	vector<int> v;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		for (int j = 0; j < n; ++j)
		{
			cin>>l;
			v.push_back(l);
		}
		sort(v.begin(),v.end());
		count = v[0];
		for (int k = 0; k <n ; ++k)
		{
			if(v[k+1] == count+1){
				count++;
				max2++;
				if(max2 > max){
					max = max2;
				}
			}else{
				count = v[k+1]; max2=0;
			}
		}
		cout<<max+1<<endl;
		v.clear(); max=0; max2=0;



	}
	return 0;
}