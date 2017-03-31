#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v1,v2;
	int n,p,q,l;
	set<int> s,s2;
	cin>>n>>p>>q;
	for (int i = 0; i < p; ++i)
	{
		cin>>l;
		v1.push_back(l);
	}
	for (int i = 0; i < q; ++i)
	{
		cin>>l;
		v2.push_back(l);
	}
	int sum=0;
	for(int j=0; j<v1.size();j++){
		for (int k = 0; k <v2.size() ; ++k)
		{
			sum = v1[j]+v2[k];
			s.insert(sum);	
		}
	}
	set<int>::iterator it = s.begin();
	set<int>::iterator itend = s.end();
	int md;
	while(it !=itend){
		//cout<<*it<<" ";
		md = *it%n;
		if(md%n !=0){
			s2.insert(md);		
		}
		it++;
	}
	set<int>::iterator ite = s2.begin();
	set<int>::iterator iten = s2.end();
	while(ite !=iten){
		cout<<*ite<<" ";
		ite++;
	}
	cout<<endl;
	iten--;
	cout<<*iten<<endl;
	return 0;
}