#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,x,flag=0,l;
	vector<int> v;
	int left,right;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n>>x;
		for (int j = 0; j < n; ++j)
		{
			cin>>l;
			v.push_back(l);
		}
		sort(v.rbegin(),v.rend());
		for (int k = 0; k < n; ++k)
		{		
				left =  k+1;
				right = n-1;
				while(left < right){
					if(v[left] + v[right] + v[k] == x){
						flag =1;
						break;
					}else if(v[left] + v[right] + v[k] > x){
						left++;
					}else{
						right--;
					}
				}
				if(flag){
					break;
				}
		}
		if(flag){
			cout<<1<<endl;
		}else{
			cout<<0<<endl;
		}
		flag =0;
		v.clear();
	}
	return 0;
}
