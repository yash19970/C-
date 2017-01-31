	#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,l;
	vector<int> v;
	map <int,int> m;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		for (int h = 0; h < n; ++h)
		{
			cin>>l;
			v.push_back(l);
		}
		for (int k = 0; k < v.size(); ++k)
		{
			m[v[k]] = 0; 
		}

		for (int g = 0; g <v.size() ; ++g)
		{
			m[v[g]]++;
		}
		for (map<int,int>::iterator it = m.begin(); it != m.end(); ++it)
		{
			if(it->second %2 !=0){
				cout<<it->first<<endl;
			}
		}
		v.clear(); m.clear(); 		
	}
	return 0;
}