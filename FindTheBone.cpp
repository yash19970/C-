#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<long long int>h;
	long long int n,m,k,l,p1=0,p2=0,fpos=1,flag=0,temp=0;
	vector<long long int>::iterator it;
	cin>>n>>m>>k;
	h.push_back(0);
	for (long long int i = 1; i <= m; ++i)
	{
		cin>>l;
		h.push_back(l);
	}
	flag=0;
	for (long long int j = 1; j <=k ; ++j)
	{
		cin>>p1>>p2;
		it = find(h.begin(),h.end(),fpos);
		if(it !=h.end()){
			flag =1; 
			temp = fpos;
		}
		if(flag ==0){
			if(p1==fpos){
				fpos=p2;
			}else if(p2==1){
				fpos=p1;
			}
			it = find(h.begin(),h.end(),fpos);
		}
		if(it !=h.end()){
			flag =1; 
			temp = fpos;
		}
	}
	if(flag){
		fpos = temp;
	}
	cout<<fpos<<endl;
	return 0;
}