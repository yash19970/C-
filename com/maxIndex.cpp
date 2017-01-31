	#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,diff=0,l,left,max=-111,right;
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
		for (int k = 0; k < n; ++k)
		{
			for (int h = 0; h < n; ++h)
			{
				if(v[k] <= v[h]){
					diff = h-k;
					if(diff > max){
						max = diff;
					}
				}
			}
		}
	


		cout<<max<<endl;
		diff =0;max=0; v.clear();



	}
	return 0;
}